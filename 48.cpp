#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>b+c && a+b>a+c)
        cout<<a<<" "<<b;
    else if(a+c>a+b && a+c>c+b)
        cout<<a<<" "<<c;
    else
        cout<<b<<" "<<c;
    
}
