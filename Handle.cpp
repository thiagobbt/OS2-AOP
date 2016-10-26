/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Handle.cpp
 * Author: cancian
 * 
 * Created on 27 de Setembro de 2016, 22:45
 */

#include "Handle.h"
#include <iostream>
namespace OS {
	template<typename Abstraction>
	Handle<Abstraction>::Handle(Stub<Abstraction>* stub) {
	    this->stub = stub;
	}

	template<typename Abstraction>
	Handle<Abstraction>::Handle(const Handle& orig) {
	}

	template<typename Abstraction>
	Handle<Abstraction>::~Handle() {
	}

	template<typename Abstraction>
	void Handle<Abstraction>::operation() {
	    std::cout << "void Handle::operation()" << std::endl;
	    this->stub->operation();
	}
}