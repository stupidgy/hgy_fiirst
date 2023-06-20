#pragma once
#include <functional>
using namespace std;

class Click {
private:
    std::function<void()> F;
public:
    // TODO
    Click(){}
    
    void setClickCommand(std::function<void()> f){
        F = f;
    }
    
    virtual void click(){
        F();
    }
};
class DoubleClick {
private:
    std::function<void()> F;
public:
    // TODO
    DoubleClick(){}
    // TODO
    void setDoubleClickCommand(std::function<void()> f){
        F = f;
    }
    
    virtual void doubleClick(){
        F();
    }
};