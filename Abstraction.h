/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstraction.h
 * Author: cancian
 *
 * Created on 27 de Setembro de 2016, 23:17
 */

#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "AbstractionInterface.h"

class Abstraction1 : public AbstractionInterface {
public:
    Abstraction1();
    Abstraction1(const Abstraction1& orig);
    virtual ~Abstraction1();
public:
    void operation();
private:
    AbstractionInterface* handle;
};

class Abstraction2 : public AbstractionInterface {
public:
    Abstraction2();
    Abstraction2(const Abstraction2& orig);
    virtual ~Abstraction2();
public:
    void operation();
private:
    AbstractionInterface* handle;
};

#endif /* ABSTRACTION_H */

