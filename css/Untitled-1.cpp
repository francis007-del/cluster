#include <iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v={1,2,3,4,5};
    v.pop_back();
    for(auto i:v)cout<<i;
}