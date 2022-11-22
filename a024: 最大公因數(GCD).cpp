#include <iostream>
using namespace std;

int Gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return Gcd(b,a%b);
}

int main()
{
    long long num1,num2,gcd;
    cin>>num1>>num2;
    cout<<Gcd(num1,num2)<<endl;
    
    return 0;
}
