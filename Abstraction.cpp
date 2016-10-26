/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstraction.cpp
 * Author: cancian
 * 
 * Created on 27 de Setembro de 2016, 23:17
 */

#include "Abstraction.h"
#include "Abstraction_OS.h"

#include "Handle.h"
#include "Stub.h"

#include <iostream>

Abstraction1::Abstraction1() {
    handle = new OS::Handle<OS::Abstraction1>(new OS::Stub<OS::Abstraction1>());
}

Abstraction1::Abstraction1(const Abstraction1& orig) {
}

Abstraction1::~Abstraction1() {
}

void Abstraction1::operation() {
    std::cout << "void Abstraction1::operation()" << std::endl;
    this->handle->operation();
}


Abstraction2::Abstraction2() {
    handle = new OS::Handle<OS::Abstraction2>(new OS::Stub<OS::Abstraction2>());
}

Abstraction2::Abstraction2(const Abstraction2& orig) {
}

Abstraction2::~Abstraction2() {
}

void Abstraction2::operation() {
    std::cout << "void Abstraction2::operation()" << std::endl;
    this->handle->operation();
}
