#include <map>
#include <iostream>
using namespace std;

//print a pair
template <typename T1, typename T2>
void printpair(pair<T1,T2> &p){
    cout<<p.first<<": "<<p.second<<endl;
    return;
}

//print the elements of the map
template<typename T>
void print_map(T &m){
    if(m.empty()) return;
    for(auto i : m){
        printpair(i);
        cout<<endl;
    }
    return;
}

//print a simple message
void message(const char * s) {cout<<s<<endl;}
template <typename T>
void message(const char *m,const T &v){cout<<m<<": "<<v<<endl;}


int main(){

    message("map of strings from initializer list");
    map<string,string> mapstr ={{"George","Father"},{"Ellen","Mother"},{"Ruth","Daughter"},
    {"Spike","Neighbor's Son"}};
    message("size",mapstr.size());
    message("get some values");
    message("George",mapstr["George"]);
    message("Ellen",mapstr.at("Ellen"));
    message("Spike",mapstr.find("Spike")->second);
    print_map(mapstr);
    message("Insert an element");
    mapstr.insert({"Luke","Neighbor"});
    message("size",mapstr.size());
    print_map(mapstr);

    cout <<"insert a duplicate:"<<endl;
    auto rp = mapstr.insert({"Luke","Neighbor"});
    if(rp.second){
        message("insert succeded");
    }
    else{
        message("insert failed");
    }
    rp.second ? message("insert succeded") : message("insert failed");
    }