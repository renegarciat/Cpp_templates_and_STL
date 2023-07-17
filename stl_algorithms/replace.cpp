#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

template< typename T>
bool is_even(T n){
    return((n%2)==0 ? true : false);
}


template <typename T>
void disp_v(T &v){
    if(!v.size()) return;
    for (auto e : v){cout<<e<<" ";}
    cout<<"\n";
}

int main(int argc, char const *argv[])
{
    vector<int> v1(30);
    for(auto &i : v1){
    i=rand()%100; //notice this trivial way to generate
    //random numbers. Smaller numbers are more likely to 
    //appear.
    }
    disp_v(v1);
    replace(v1.begin(),v1.end(),35,99);
    disp_v(v1);
    replace_if(v1.begin(),v1.end(),is_even<int>, 99);\
    disp_v(v1);
    auto it = remove(v1.begin(),v1.end(),42); //Passes iterator pointing to the last element that is not removed
    if(it == v1.end()){cout<<"no elements were removed\n";
    } else { //Otherwise, we have to rezise our container
    v1.resize(it - v1.begin());
    }
    disp_v(v1);
    //Also exists a remove_if
    auto it2 = remove_if(v1.begin(),v1.end(),is_even<int>);
    disp_v(v1);
    //"Unique" removes consecutive duplicates from the range
    unique(v1.begin(),v1.end());
    disp_v(v1);
    return 0;
}
