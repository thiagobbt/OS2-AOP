/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Scenario.cpp
 * Author: cancian
 * 
 * Created on 27 de Setembro de 2016, 22:53
 */

#include "Scenario.h"
#include "Traits.h"
#include <iostream>

namespace OS {
Scenario::Scenario() {
    aspect = Traits<AbstractionInterface>::Aspect();
}

Scenario::Scenario(const Scenario& orig) {
    aspect = Traits<AbstractionInterface>::Aspect();
}

Scenario::~Scenario() {
}

void Scenario::enter() {
    std::cout << "void Scenario1::enter()" << std::endl;
    aspect.enter();
}

void Scenario::leave() {
    std::cout << "void Scenario::leave()" << std::endl;
    aspect.leave();
}
}