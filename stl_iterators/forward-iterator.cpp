#include <iterator>
#include <forward_list>
#include <iostream>
using namespace std;
int main(){
    forward_list<int> fl1 = {1,2,3,4,5};
    forward_list<int>::iterator it1;

    for(it1 = fl1.begin(); it1!=fl1.end(); ++it1){
        cout<<*it1<<" ";
    }
    cout<<endl;
    for (auto i : fl1){ //uses a forward iterator.
        cout << i <<" ";
    }
}