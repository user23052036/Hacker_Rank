#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string str;
    getline(cin>>ws,str);

    vector<vector<char>>vcr(2);//first for even and 2nd for odd
    for(int i=0; i<str.size(); i++)
    {
        if(i%2 == 0)
            vcr[0].push_back(str[i]);
        else
            vcr[1].push_back(str[i]);
    }
    
    for(int i=0; i<vcr[0].size(); i++)
        cout<<vcr[0][i];
    cout<<" ";
    for(int i=0; i<vcr[1].size(); i++)
        cout<<vcr[1][i];
    cout<<"\n";
}

int main() 
{
  int tt; cin >> tt; 
  while(tt--){solve();}
  return 0;
}