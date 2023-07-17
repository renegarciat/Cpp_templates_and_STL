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

template <typename T>
/*Simple function to test if a number is prime*/
const bool is_prime(const T &num){
    if (num<=1) return false;
    bool primeflag = true;
    for(T l = 2; l<num; ++l){
        if (num%l == 0){
            primeflag = false;
            break;
        }
    }
    return primeflag;
}


int main(int argc, char const *argv[]){

    vector<int> v1(30);
    for(auto &i : v1){
    i=rand()%100; //notice this trivial way to generate
    //random numbers. Smaller numbers are more likely to 
    //appear.
    }
    disp_v(v1);
    //all_of
    //none_of

    if(any_of(v1.begin(),v1.end(),is_prime<int>)){ //is_prime act as a predicate function
        cout<<"true\n";
    }else{
        cout<<"false\n";
    }
return 0;
}


