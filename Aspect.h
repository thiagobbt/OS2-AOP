/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aspect.h
 * Author: thiagobbt
 *
 * Created on October 26, 2016, 10:15 AM
 */

#ifndef ASPECT_H
#define ASPECT_H

class Aspect1 {
public:
    Aspect1();
    Aspect1(const Aspect1& orig);
    virtual ~Aspect1();
    void enter();
    void leave();
};

class Aspect2 {
public:
    Aspect2();
    Aspect2(const Aspect2& orig);
    virtual ~Aspect2();
    void enter();
    void leave();
};

#endif /* ASPECT_H */

