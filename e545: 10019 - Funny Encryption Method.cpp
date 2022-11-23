#include <iostream>
#include <vector>

using namespace std;

int power16(int a)
{
    int sum=1;
    for(int i=0;i<a;++i)
        sum*=16;
    return sum;
}

int main()
{
    vector<bool> v1,v2;
    int count,num,x,sum,count2,b1,b2;
    cin>>count;
    
    for(int i=0;i<count;++i)
    {
        cin>>num;
        v1.clear();
        v2.clear();
        b1=0;
        b2=0;
        x=num;
        //10轉2
        while(x)
        {
            v1.push_back(x%2);
            x/=2;
        }
        //b1有幾個1
        for(int i=0;i<v1.size();++i)
        {
            if(v1[i]==1)
                b1++;
        }
        
        //10轉2和b1有幾個可合在一起
        //while (X){
        //    b1 += X & 1; //最低位是否為1
        //    X >>= 1;  //x右移一個bit
        //}
        
        x=num;
        count2=0;
        sum=0;
        //16轉10
        while(x)
        {
            sum=sum+(x%10)*power16(count2);
            x/=10;
            count2++;
        }
         
        while(sum)
        {
            v2.push_back(sum%2);
            sum/=2;
        }
        //b2有幾個1
        for(int i=0;i<v2.size();++i)
        {
            if(v2[i]==1)
                b2++;
        }
        
        cout<<b1<<" "<<b2<<endl;
    }
    
    return 0;
}
