#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>st;
    int queries;
    cin>>queries;
    
    while(queries--) 
    {
        int what;
        cin>>what;
        
        switch(what)
        {
            case 1:
            {
                int element;
                cin>>element;
                st.insert(element);
                break;
            }
            
            case 2:
            {
                int element;
                cin>>element;
                st.erase(element);
                break;
            }
            
            case 3:
            {
                int element;
                cin>>element;
                if(st.find(element) != st.end())
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
                break;
            }
        }
    }
    return 0;
}
