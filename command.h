#pragma once
#include "window.h"
#include <iostream>
#include <memory>
#include <list>
using namespace std;

class ClearAll {
    list<shared_ptr<Checkbox>> checkboxs;
public:
    // TODO
    ClearAll(list<shared_ptr<Checkbox>> checkbox):checkboxs(checkbox){}
    void operator()(){
        for(auto i : checkboxs){
            i->state = 0;
        }
    }
};

class SelectAll {
    list<shared_ptr<Checkbox>> checkboxs;
public:
    // TODO
    SelectAll(list<shared_ptr<Checkbox>> checkbox):checkboxs(checkbox){}
    void operator()(){
        for(auto i : checkboxs){
            i->state = 1;
        }
    }
};

class Submit {
    list<shared_ptr<Checkbox>> checkboxs;
public:
    // TODO
    Submit(list<shared_ptr<Checkbox>> checkbox):checkboxs(checkbox){}
    void operator()(){
        for(auto i : checkboxs){
            if(i->state == 1){
                std::cout<<i->getName()<<" is selected"<<std::endl;
            }
            if(i->state == 0){
                std::cout<<i->getName()<<" is not selected"<<std::endl;
            }
        }
    }
};