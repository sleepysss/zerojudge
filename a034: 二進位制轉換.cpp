#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string s1;
    int num,x;
    while(cin>>num)
    {
        s1.clear();
        while(num!=0)
        {
            x=num%2;
            num/=2;
            
            x?s1.insert(0,"1"):s1.insert(0,"0");
        }
        cout<<s1<<endl;
    }
    return 0;
}
