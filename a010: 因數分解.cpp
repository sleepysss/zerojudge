#include <iostream>
using namespace std;

int main()
{
    int num,i=2,count=0,hasfirst=0;
    cin>>num;
    
    while(num!=1)
    {
        count=0; //次方數
        while(!(num%i)) //某因數看有幾個
        {
            count++;
            num/=i;
        }
        if(count&&!hasfirst)
        {
            if(count>1)
                cout<<i<<'^'<<count<<' ';
            else
                cout<<i<<' ';
            
            hasfirst=1;
        }
        else if(count&&hasfirst)
        {
            cout<<"* ";
            if(count>1)
                cout<<i<<'^'<<count<<' ';
            else
                cout<<i<<' ';
        }
        i++; //不須額外處理非質因數的問題，因為遇到非質因數時，什麼事也不會做(每個非質因數都可以被它之前的質因數分解，所以在做因數分解時不會出現非質因數)
    }
    cout<<endl;
    return 0;
}
