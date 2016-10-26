/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aspect.cpp
 * Author: thiagobbt
 * 
 * Created on October 26, 2016, 10:15 AM
 */

#include "Aspect.h"
#include <iostream>

Aspect1::Aspect1() {
}

Aspect1::Aspect1(const Aspect1& orig) {
}

Aspect1::~Aspect1() {
}

void Aspect1::enter() {
    std::cout << "Aspect1::enter()" << std::endl;
}

void Aspect1::leave() {
    std::cout << "Aspect1::leave()" << std::endl;
}

Aspect2::Aspect2() {
}

Aspect2::Aspect2(const Aspect2& orig) {
}

Aspect2::~Aspect2() {
}

void Aspect2::enter() {
    std::cout << "Aspect2::enter()" << std::endl;
}

void Aspect2::leave() {
    std::cout << "Aspect2::leave()" << std::endl;
}