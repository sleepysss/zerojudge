//method 1 : 讀整行

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int abs_diff(int a,int b)
{
    return a>b?a-b:b-a;
}

int main()
{
    vector<int> v1,v2;
    bool flag;
    int num,diff;
    string s1;
    while(getline(cin,s1))
    {
        v1.clear();
        v2.clear();
        flag=1;
        stringstream s;
        s<<s1;
        while(s>>num)
        {
            v1.push_back(num);
        }
        
        for(int i=1;i<v1.size()-1;++i)
        {
            diff=abs_diff(v1[i],v1[i+1]);
            if(diff>(v1[0]-1))
            {
                flag=0;
                break;
            }
            v2.push_back(diff);
        }
        
        num=1;
        sort(v2.begin(),v2.end());
        for(int i=0;i<v2.size();++i)
        {
            if(v2[i]!=num)
            {
                flag=0;
                break;
            }
            num++;
        }
        
        if(flag)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    
    return 0;
}

//method 2 :讀數字

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1,v2;
    bool flag;
    int num,diff,count;
    while(cin>>count)
    {
        v1.clear();
        v2.clear();
        flag=1;
        
        for(int i=0;i<count;++i)
        {
            cin>>num;
            v1.push_back(num);
        }
        
        //計算各數之間的差
        for(int i=0;i<v1.size()-1;++i)
        {
            diff=abs(v1[i]-v1[i+1]);
            if(diff>(count-1))
            {
                flag=0;
                break;
            }
            v2.push_back(diff);
        }
        
        //看是否每個都有
        num=1;
        sort(v2.begin(),v2.end());
        for(int i=0;i<v2.size();++i)
        {
            if(v2[i]!=num)
            {
                flag=0;
                break;
            }
            num++;
        }
        
        if(flag)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    
    return 0;
}
