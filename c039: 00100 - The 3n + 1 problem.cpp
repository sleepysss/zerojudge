#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4,longest,count;
    
    while(cin>>num1>>num2)
    {
        longest=0;
        if(num1>num2)
        {
            num3=num1;
            num4=num2;
        }
        else
        {
            num3=num2;
            num4=num1;
        }
        for(int i=num4;i<=num3;++i)
        {
            count=1;
            int x=i;
            while(x!=1)
            {
                x=(x%2)?3*x+1:x/2;
                count++;
            }
            
            if(count>longest)
                longest=count;
        }
        cout<<num1<<" "<<num2<<" "<<longest<<endl;
    }
    return 0;
}
