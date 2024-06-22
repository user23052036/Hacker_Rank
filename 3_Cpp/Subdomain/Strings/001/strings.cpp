#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str1,str2;
    char temp;
    cin>>str1>>str2;
    
    cout<<str1.size()<<" "<<str2.length()<<"\n";
    cout<<str1+str2<<"\n";
    
    temp=str2[0];
    str2[0]=str1[0];
    str1[0]=temp;
    cout<<str1<<" "<<str2; 
    return 0;
}
