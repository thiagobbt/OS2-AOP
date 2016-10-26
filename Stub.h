/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stub.h
 * Author: cancian
 *
 * Created on 27 de Setembro de 2016, 22:08
 */

#ifndef STUB_H
#define STUB_H

#include "Adapter.h"
#include "Proxy.h"
#include "Templater.h"
#include "Traits.h"

#include <iostream>

namespace OS {
    template<typename Abstraction>
    class Stub : public IF<Traits<AbstractionInterface>::isRemote, Proxy, Adapter<Abstraction>>::Result {
    public:
        Stub() {
        }

        Stub(const Stub& orig) {
        }

        virtual ~Stub() {
        }
    private:
        typedef typename IF<Traits<AbstractionInterface>::isRemote, Proxy, Adapter<Abstraction>>::Result BaseClass;
    public:
        void operation() {
            std::cout << "void Stub::operation()" << std::endl;
            this->BaseClass::operation();
        }
    };
}
#endif /* STUB_H */

