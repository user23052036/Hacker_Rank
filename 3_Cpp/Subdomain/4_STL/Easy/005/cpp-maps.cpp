#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int queries;
    cin >> queries;
    cin.ignore(); // Clear the newline character after reading queries

    map<string,int> mp;

    while (queries--)
    {
        string str;
        getline(cin >> ws, str);
        stringstream ss(str);

        int choice;
        ss >> choice;

        switch (choice)
        {
            case 1:
            {
                string name;
                int num;
                ss >> name >> num;
                mp[name] += num;
                break;
            }
            case 2:
            {
                string name;
                ss >> name;
                mp.erase(name);
                break;
            }
            case 3:
            {
                string name;
                ss >> name;
                cout << mp[name] << "\n";
                break;
            }
        }
    } 
    return 0;
}
