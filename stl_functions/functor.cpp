#include <iostream>
using namespace std;


template<typename T>
class multiply_by{
T _mult=0; //private variable, but can be accessed through methods defined below.
multiply_by(); //default constructor
public:
    multiply_by(T n) : _mult(n) {} //Constructor
    void mult(T n){_mult = n;} //set the multiplier
    T mult() const {return _mult;} //get the multiplier
    /*functor:  Overloading the parenthesis () operator*/
    T operator() (T n) const{return _mult * n;} 
};
int main(){
    multiply_by<int> x(9);
    cout<<"x mult is: "<<x.mult()<<endl;

    cout<<"x(25) is: "<<x(25)<<endl;
    cout<<"x(5) is: "<<x(5)<<endl;

    x.mult(7);
    cout<<"x mult is: "<<x.mult()<<endl;

    cout<<"x(25) is: "<<x(25)<<endl;
    cout<<"x(5) is: "<<x(5)<<endl;
    return 0;
}