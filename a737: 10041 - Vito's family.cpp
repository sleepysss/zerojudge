#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int count,num,addr,sum,mid;
    cin>>count;
    
    for(int i=0;i<count;++i)
    {
        sum=0;
        //get address
        vector<int> v1;
        cin>>num;
        for(int j=0;j<num;++j)
        {
            cin>>addr;
            v1.push_back(addr);
        }
        
        //get min distance
        
        sort(v1.begin(),v1.end());
        
        mid=v1[num/2];
        
        for(int j=0;j<num;++j)
            sum+=abs(mid-v1[j]);
        
        cout<<sum<<endl;
    }
    
    return 0;
}
