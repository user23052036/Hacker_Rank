#include<bits/stdc++.h>
using namespace std;

int max(int,int);
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int tt;
    cin>>tt;
    
    while(tt--)
    {
        int n,k;
        cin>>n>>k;
        deque<int>dq;
        vector<int>result;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            dq.emplace_back(x);
        }
        auto it =  max_element(dq.begin(),dq.begin()+k-1);
        int MX = *it;

        for(int i=k; i<dq.size(); i++)
        {
            MX = max(MX,dq[i]);
        }
    }  
    return 0;
}

int max(int a, int b)
{
    if(a>=b) return a;
    else return b;
}
