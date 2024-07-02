#include<bits/stdc++.h>
using namespace std;

struct student
{
    int age;
    string first_name,last_name;
    int standard;
};

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    student s1;
    
    cin>>s1.age>>s1.first_name>>s1.last_name;
    // getline(cin>>ws,s1.first_name);
    // getline(cin>>ws,s1.last_name);
    cin>>s1.standard;
    
    cout<<s1.age<<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.standard;
    return 0;
}
