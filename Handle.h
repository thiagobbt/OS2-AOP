/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Handle.h
 * Author: cancian
 *
 * Created on 27 de Setembro de 2016, 22:45
 */

#ifndef HANDLE_H
#define HANDLE_H

#include "AbstractionInterface.h"
#include "Stub.h"

#include <iostream>

namespace OS {
    template<typename Abstraction>
    class Handle : public AbstractionInterface {
    public:
        Handle(Stub<Abstraction>* stub) {
	    this->stub = stub;
	}
        Handle(const Handle& orig) {}
        virtual ~Handle() {}
    public:
        void operation() {
	    std::cout << "void Handle::operation()" << std::endl;
	    this->stub->operation();
	}
    private:
        Stub<Abstraction>* stub;
    };
}
#endif /* HANDLE_H */

