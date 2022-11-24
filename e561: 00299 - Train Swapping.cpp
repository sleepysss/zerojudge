#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count,num,optimal,temp;
    cin>>count;
    
    for(int i=0;i<count;++i)
    {
        optimal=0;
        cin>>num;
        int store[num];
        for(int j=0;j<num;++j)
        {
            cin>>store[j];
        }
        
        //change
        
        for(int k=0;k<num-1;++k)
        {
            for(int j=0;j<num-1;++j)
            {
                if(store[j]>store[j+1])
                {
                    optimal++;
                    temp=store[j];
                    store[j]=store[j+1];
                    store[j+1]=temp;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<optimal<<" swaps."<<endl;
    }
    
    return 0;
}
