#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int T,a,b,total,l,r,mid;
    
    cin>>T;
    
    for(int i=0;i<T;++i)
    {
        total=0;
        cin>>a>>b;
        
        for(int j=a;j<=b;++j)
        {
            //用binary search看j是否為完全平方數
            //另解:把之間的數每個開平方後相成，若開平方後相成後還是一樣。就是完全平方數
            l=0;
            r=j;
            while(l<=r)
            {
                
                mid=l+(r-l)/2;
                if(mid*mid>j)
                    r=mid-1;
                else if(mid*mid<j)
                    l=mid+1;
                else
                {
                    total+=j;
                    break;
                }
            
            }
        }
        
        cout<<"Case "<<i+1<<": "<<total<<endl;
    }
    
    return 0;
}
