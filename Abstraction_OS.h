/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstraction.h
 * Author: cancian
 *
 * Created on 27 de Setembro de 2016, 21:50
 */

#ifndef ABSTRACTION_OS_H
#define ABSTRACTION_OS_H

#include "AbstractionInterface.h"

namespace OS {

    class Abstraction1 : public AbstractionInterface {
    public:
        Abstraction1();
        Abstraction1(const Abstraction1& orig);
        virtual ~Abstraction1();
    public:
        void operation();
    private:

    };

    class Abstraction2 : public AbstractionInterface {
    public:
        Abstraction2();
        Abstraction2(const Abstraction2& orig);
        virtual ~Abstraction2();
    public:
        void operation();
    private:

    };

}
#endif /* ABSTRACTION_H */

