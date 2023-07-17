#include <iostream>
#include <vector>
#include <algorithm>
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
    i=rand()%100; //notice this trivial way to generaterandom numbers. Smaller numbers are more likely to appear.
    }
    disp_v(v1);
    random_device rd;
    mt19937 g(rd()); //Mersenne Twister algorithm

    shuffle(v1.begin(),v1.end(),g); //Does the same thing as random_shuffle but it requires an external random number generator 
    disp_v(v1);
    return 0;
}
