#include<bits/stdc++.h>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin>>n>>q;
    vector<vector<int>>vec(n); 
    
    for(int i=0; i<n; i++)
    {
        int size;
        cin>>size;

        for(int j=0; j<size; j++)
        {
            int x;
            cin>>x;
            vec[i].push_back(x);
        }
    }
    
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        cout<<vec[i][j]<<"\n";
    }
    return 0;
}
            