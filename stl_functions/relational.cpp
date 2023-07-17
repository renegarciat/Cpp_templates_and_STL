#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

template <typename T>
void disp_v(vector<T> &v){
    if(!v.size()) return;
    if (typeid(T) == typeid(bool)){
        for (bool e : v){cout<<(e ? "T" : "F")<<" ";}
    }
    else{for (T e : v){cout<<e<<" ";}
    }
        cout<<endl;
}

int main(int argc, char const *argv[]){
    vector<long> v1={26,52,6,54};
    vector<long> v2={52,2,4};
    vector<bool> v3(v1.size());
    disp_v(v1);
    disp_v(v2);
    greater<long> f;//functor from <functional> header
    less<long> g;
    sort(v1.begin(),v1.end(),f);
    disp_v(v1);
    sort(v1.begin(),v1.end(),g);
    disp_v(v1);
    return 0;
}
