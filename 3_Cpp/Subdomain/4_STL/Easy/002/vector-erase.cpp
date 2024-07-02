#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(auto &it: v)
        cin>>it;
    
    int a,b,c;
    cin>>a>>b>>c;

    v.erase(v.begin()+a-1);
    v.erase(v.begin()+b-1,v.begin()+c-1);
    
    cout<<v.size()<<"\n";
    for(auto it:v)
        cout<<it<<" ";
    return 0;
}
