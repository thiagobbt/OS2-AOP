/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adapter.cpp
 * Author: cancian
 * 
 * Created on 27 de Setembro de 2016, 22:05
 */

#include "Adapter.h"

#include <iostream>

namespace OS {

    template<typename Abstraction>
    Adapter<Abstraction>::Adapter() {
    }

    template<typename Abstraction>
    Adapter<Abstraction>::Adapter(const Adapter& orig) {
    }

    template<typename Abstraction>
    Adapter<Abstraction>::~Adapter() {
    }

    template<typename Abstraction>
    void Adapter<Abstraction>::operation() {
        std::cout << "void Adapter::operation()" << std::endl;
        this->Scenario::enter();
        this->Abstraction::operation();
        this->Scenario::leave();
    }
}
