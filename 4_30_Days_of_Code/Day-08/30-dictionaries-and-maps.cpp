#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string,int>phoneBook;

    for (int i = 0; i < n; i++)
    {
        string name;
        int number;
        cin >> name >> number;  
        phoneBook[name] = number;
    }

    for (int j = 0; j < n; j++)
    {
        string str;
        cin >> str;

        if(str.size())
        {
            auto it = phoneBook.find(str);
            if (it != phoneBook.end())
                cout << it->first << "=" << it->second << endl;
            else
                cout << "Not found" << endl;
        } 
        else
            break;
    }

    return 0;
}