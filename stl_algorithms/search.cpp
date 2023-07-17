#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;

template <typename T>
void disp_v(T &v){
    if(!v.size()) return;
    for (auto e : v){cout<<e<<" ";}
    cout<<"\n";
}

template<typename T>
bool is_odd(const T &n){
    return((n%2)==1);
}

int main(int argc, char const *argv[]){

    vector<int> v1(30);
    for(auto &i : v1){
    i=rand()%100; //notice this trivial way to generate
    //random numbers. Smaller numbers are more likely to 
    //appear.
    }
    const vector v2 = v1; //same but "const" qualified
    disp_v(v2);

    auto it = find(v2.begin(),v2.end(),83);

    if(it != v2.end()){
        size_t index = it-v1.begin();
        cout<<"found at index "<<index<<": "<<*it<<"\n";
    } else{
        cout<<"not found \n";
    }
    return 0;
}