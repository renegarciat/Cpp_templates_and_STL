#include <iostream>
#include <list>
using namespace std;

template <typename T>
void printl(list<T> &l){
    if(l.empty()) return;
    for (T &i : l) cout << i << " ";
    cout<<endl;
}

//print a simple message
void message(const char * s) {cout<<s<<endl;}
void message(const char *s,const int n){cout<<s<<": "<<n<<endl;}

int main(){
    list<int> l1={1,2,3,4,5,6,7,8,9,10};
    printl(l1);
    message("size",(int) l1.size());
    message("front",(int) l1.front());
    message("back",(int) l1.back());
    
    //need an interator to insert and erase
    message("insert:");
    list<int>::iterator it1 = l1.begin();
    while((*++it1 != 5) && (it1 != l1.end()));
    if(it1 !=l1.end()){
        message("Insert 112 before 5");
        l1.insert(it1,112);
    }
    printl(l1);

    //Find element value 7
    while ((*++it1 != 7) && (it1 != l1.end()));
    if(it1 != l1.end()){
        message("erase 7");
        l1.erase(it1);
    }
    printl(l1);
    return EXIT_SUCCESS;
}