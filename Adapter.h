/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adapter.h
 * Author: cancian
 *
 * Created on 27 de Setembro de 2016, 22:05
 */

#ifndef ADAPTER_H
#define ADAPTER_H

#include "Abstraction_OS.h"
#include "Scenario.h"
#include "Traits.h"
#include <iostream>

namespace OS {
    template<typename Abstraction>
    class Adapter : public Abstraction, public Scenario {
    public:
        Adapter() {}
        Adapter(const Adapter& orig) {}
        virtual ~Adapter() {}
        
        void operation() {
            std::cout << "void Adapter::operation()" << std::endl;
            this->Scenario::enter();
            this->Abstraction::operation();
            this->Scenario::leave();
        }
    };

}

#endif /* ADAPTER_H */

