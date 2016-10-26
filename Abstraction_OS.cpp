/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstraction.cpp
 * Author: cancian
 * 
 * Created on 27 de Setembro de 2016, 21:50
 */

#include "Abstraction_OS.h"

#include <iostream>

namespace OS {

    Abstraction1::Abstraction1() {
    }

    Abstraction1::Abstraction1(const Abstraction1& orig) {
    }

    Abstraction1::~Abstraction1() {
    }

    void Abstraction1::operation() {
        std::cout << "void Abstraction_OS1::operation()" << std::endl;
    }

    Abstraction2::Abstraction2() {
    }

    Abstraction2::Abstraction2(const Abstraction2& orig) {
    }

    Abstraction2::~Abstraction2() {
    }

    void Abstraction2::operation() {
        std::cout << "void Abstraction_OS2::operation()" << std::endl;
    }

}