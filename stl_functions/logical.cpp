#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void disp_v(T &v){
    if(!v.size()) return;
    for (auto e : v){cout<<e<<" ";}
    cout<<"\n";
}

int main(int argc, char const *argv[])
{
    vector<int> v1 = {1,0,1,0,1,0,1,0};
    vector<int> v2 = {1,1,1,1,0,0,0,0};
    vector<int> v3 (v1.size(), 0);
    disp_v(v1);
    disp_v(v2);
    cout<<"\n";
    logical_and<int> f; //functor
    logical_or<int> g;
    logical_not<bool> h; //unary function
    transform(v1.begin(),v1.end(),v2.begin(),v3.begin(),f);
    disp_v(v3);
    transform(v1.begin(),v1.end(),v2.begin(),v3.begin(),g);
    disp_v(v3);
        transform(v1.begin(),v1.end(),v3.begin(),h);
    disp_v(v3);

    return 0;
}
