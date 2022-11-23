#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,y,c,count,num1,num2;
    while(cin>>num1>>num2)
    {
        count=0;
        c=0;
        if(!num1&&!num2)
            break;
        
        while(num1||num2)
        {
            x=num1%10; //num1的尾數
            y=num2%10;
            if((x+y+c)>=10)
            {
                c=1;
                count++;
            }   
            else
                c=0;
            num1/=10;
            num2/=10;
        }
        if(count==0)
            cout<<"No carry operation."<<endl;
        else if(count==1)
            cout<<count<<" carry operation."<<endl;
        else
            cout<<count<<" carry operations."<<endl;
    }
    
    return 0;
}
