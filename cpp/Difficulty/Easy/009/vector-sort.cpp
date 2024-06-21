#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    vector<int>ar;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ar.push_back(x);
    }
    sort(ar.begin(),ar.end());
    
    for(auto it: ar)
        cout<<it<<" ";
    return 0;
}
