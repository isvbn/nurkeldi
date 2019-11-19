#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    double a,b,c,a1,b1,c1;
    cin>>a>>b>>c;
    a1=a+b;
    b1=c-a;
    c1=a+b+c;
    a=a1;b=b1;c=c1;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
