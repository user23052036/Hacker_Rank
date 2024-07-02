#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    unordered_map<string,string>ump;
    vector<string>tags;
    string tag,value,val;
    char unwanted,equal;

    for(int i=0; i<n; i++)
    {
        int how_much;
        string str;
        getline(cin>>ws,str);
        stringstream ss(str);
        ss>>unwanted>>tag;

        if(tag.front() != '/' && tag.back() == '>')
        {
            tag.pop_back();
            tags.push_back(tag);
            continue;
        }

        else if(tag.front() != '/')
        {
            tags.push_back(tag);

            do
            {
                string key;
                ss>>value>>equal>>val;
                (val.back() == '>')? how_much=3 : how_much=2;

                for(int i=0; i<tags.size(); i++)
                    key += tags[i] + '.';
                    
                key.pop_back();
                key = key + '~' + value;
                ump[key]=val.substr(1,val.size()-how_much);

            }while(val.back() != '>');
        }
        
        else
            tags.pop_back();
    }

    while(q--)
    {
        string quaries;
        getline(cin,quaries);

        if(ump.count(quaries) > 0)
            cout<<ump[quaries]<<"\n";
        else 
            cout<<"Not Found!"<<"\n";
    }
    return 0;
}
