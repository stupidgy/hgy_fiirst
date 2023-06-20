#pragma once
#include <memory>
#include <list>
#include "event.h"

using namespace std;

class Window;

class Widget {
    string _name;
    Window* _parent;
public:
    Widget(string name) :_name(name), _parent(nullptr) {}
    string getName() const { return _name; }
    Window* getParent() const { return _parent; }
    void setParent(Window * parent) {_parent = parent;}
    virtual ~Widget() {}
};

class Button :public Widget, public Click, public DoubleClick {
public:
    Button(string name) :Widget(name) {}
};

class Checkbox :public Widget, public Click {
public:
    bool state = 0;
    Checkbox(string name) :Widget(name){}
    void click(){
        state = 1 - state;
    }
};

class Window {

private:
    list<shared_ptr<Widget>> Widgets;
    // TODO

public:
    // TODO
    shared_ptr<Widget> getPointerByName(string name){
        for(auto i : Widgets){
            if(i->getName() == name){
                return i;
            }
        }
    }
    Widget& getElementByName(string name){
        for(auto i : Widgets){
            if(i->getName() == name){
                return *i;
            }
        }
    }
   
    bool addElement(shared_ptr<Widget> w){
        for(auto i : Widgets){
            if(i->getName() == w->getName()){
                return 0;
            }
        }
        Widgets.push_back(w);
        return 1;
    }
    bool undo(){}
};
