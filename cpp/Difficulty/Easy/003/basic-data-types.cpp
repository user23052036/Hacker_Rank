#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() 
{
    int a;
    long b;
    char ch;
    float fl;
    double db;
    cin>>a>>b>>ch>>fl>>db;
    cout<<a<<"\n"<<b<<"\n"<<ch<<"\n";
    cout<<fixed<<setprecision(3)<<fl<<"\n";
    cout<<fixed<<setprecision(9)<<db<<"\n";
    return 0;
}
