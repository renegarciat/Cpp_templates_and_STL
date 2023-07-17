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

int main(int argc, char const *argv[])
{
    vector<int> v1(30);
    for(auto &i : v1){
    i=rand()%100; //notice this trivial way to generate
    //random numbers. Smaller numbers are more likely to 
    //appear.
    }
    disp_v(v1);
    int n = 83;
    sort(v1.begin(),v1.end());
    disp_v(v1);

    if(binary_search(v1.begin(),v1.end(),n)){//search for a number in the vector.
    cout<<"found "<<n<<endl;
    } else{
        cout<<n<<" not found"<<endl;
    }
    return 0;
}
