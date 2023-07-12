#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class accum{
    T _acc = 0;
    accum() {}

public:
    accum(T n) : _acc(n) {}
    T operator()(T y) { //C++ functor! Allows to use an object like a function.
        _acc += y;
        return _acc;
    }
};

template <typename T>
void disp_v(vector<T> &v){
    if (!v.size()) return;
    for (T e : v){
        cout << e << " ";
    }
    cout << endl;
}

int main(){
    accum<int> x(7);//x is an object of the class accum, of type int.
    cout << x(7) << endl;

    vector<int> v1 = {1, 2, 3, 4, 5};
    disp_v(v1);

    vector<int> v2(v1.size());
    /*x is an object operator. Its a unary function, so
    its a pointer to either a function or a object functor 
    that takes one argument */ 
    transform(v1.begin(),v1.end(),v2.begin(),x);

    disp_v(v2);

}