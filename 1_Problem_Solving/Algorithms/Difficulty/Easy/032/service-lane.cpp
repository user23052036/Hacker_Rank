#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    vector<int> width;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        width.push_back(x);
    }

    vector<vector<int>> cases;
    for(int i=0; i<t; i++)
    {
        int first,second;
        cin>>first>>second;
        cases.push_back(vector<int>{first,second});
    }

    for(int i=0; i<t; i++)
    {
        int min_width = 10;
        for(int j=cases[i][0]; j<=cases[i][1]; j++)
        {
            if(width[j] < min_width)
                min_width = width[j];
        }
        cout<<min_width<<'\n';
    }
    return 0;
}
