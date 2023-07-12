#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "numword.h"

using namespace std;
template <typename T>
void disp_v (const vector<T> &v){
    if(!v.size()) return;
    bool first = true;
    for(auto e : v){
        if(first) first= false;
        else cout << " , ";
        cout<<e;
    }
    cout <<endl;
}

int main(){
    const vector<uint64_t> nums={1,300,500,72};
    disp_v(nums);

    bw::numword nw;
    vector<string> words(nums.size());
    transform(nums.begin(),nums.end(),words.begin(),nw);
    disp_v(words);
    return EXIT_SUCCESS;
}