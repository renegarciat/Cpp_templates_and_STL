#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void disp_v(T &v){
    if(!v.size()) return;
    for (auto e : v){cout<<e<<" ";}
    cout<<"\n";
}


int main()
{
    vector<int> v1(30), v2(30);
    for(auto &i : v1){
    i=rand()%100; //notice this trivial way to generaterandom numbers. Smaller numbers are more likely to appear.
    }
    disp_v(v1);
    disp_v(v2);
    copy(v1.begin(),v1.end(),v2.begin()); //makes a copy from the source range to the target
    disp_v(v2);
    copy_n(v1.begin(),10,v2.begin()); //n items to copy (10 in this case)
    disp_v(v2);
    copy_backward(v1.begin(),v1.end(),v2.end());//Copies the elements in back to front BUT the result is in the original order.
    disp_v(v2);
    reverse_copy(v1.begin(),v1.end(),v2.begin());//Copies the elements in reverse order.
    disp_v(v2);
    reverse(v1.begin(),v1.end()); //swap the elements in the same vector.
    disp_v(v1);
    fill(v1.begin(),v1.end()-10,100);//fill a container witha a given value (100 in this case)
    fill_n(v1.begin(),15,200);//fill n places,in this case 15
    disp_v(v1);
    generate(v2.begin(),v2.end(),[]()->int {return rand()%100;}); //Here we use the lambda function
    disp_v(v2);
    random_shuffle(v2.begin(),v2.end());
    disp_v(v2);
    return 0;
}
