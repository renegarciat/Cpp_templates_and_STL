#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printv(vector<T> & v){
    if(v.empty()) return;
    for (T &i : v) cout << i << " ";
    cout<<endl;
}

//print a simple message
void message(const char * s) {cout<<s<<endl;}
void message(const char *s,const int n){cout<<s<<": "<<n<<endl;}

int main(){
    cout<<"vector from intializer list: "<<endl;
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    printv(v1);

    //info
    message("size",(int) v1.size());
    message("front",v1.front());
    message("back",v1.back());

    //index
    message("element at 5",v1[5]);
    message("element at 5",v1.at(5));
    
}