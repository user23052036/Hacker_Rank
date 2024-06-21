#include<bits/stdc++.h>
using namespace std;

template <typename Iterator>
Iterator max_it(Iterator a, Iterator b) 
{
    return (*a >= *b) ? a : b;
}

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

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            dq.emplace_back(x);
        }

        auto ptr_max=dq.begin()-1;
        for(auto it=dq.begin(); it<=dq.end()-k; it++)
        {
            if(ptr_max >= it)
                ptr_max = max_it(ptr_max,it+k-1);
            else
                ptr_max = max_element(it,it+k);

            cout<<*ptr_max<<" ";
        }
        cout<<"\n";
    }  
    return 0;
}
