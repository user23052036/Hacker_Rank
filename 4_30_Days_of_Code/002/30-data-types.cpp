#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    double db;
    string str;
    cin>>num>>db;
    getline(cin>>ws,str);
    
    cout<<num+4<<endl;
    cout<<fixed<<setprecision(1)<<db+4.0<<endl;
    
    str.insert(0,"HackerRank ");
    cout<<str<<'\n';
    return 0;
}
