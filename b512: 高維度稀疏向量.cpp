#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1,v2;
    int n,m,sum=0;
    char c;
    
    while(cin>>n>>c>>m)
    {
        v1.push_back(n);
        v2.push_back(m);
    }
    
    for(int i=0;i<v1.size();++i)
    {
        for(int j=i+1;j<v1.size();++j)
        {
            if(v1[i]==v1[j])
                sum+=v2[i]*v2[j];
        }
    }
    
    cout<<sum<<endl;
    
    return 0;
}
