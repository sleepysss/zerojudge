#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct store
{
  int count;
  char c;
};


bool cmp(struct store a,struct store b)
{
    if(a.count==b.count)
    {
        return a.c<b.c;
    }
    else
        return a.count>b.count;
}

int main()
{
    string s1;
    int num;
    cin>>num;
    cin.get(); //要有這個,不然會少一行(因為num按下去的enter)
    struct store s[26];
    
    for(int i=0;i<26;++i)
    {
        s[i].count=0;
        s[i].c='A'+i;
    }
        
    for(int i=0;i<num;++i)
    {
        getline(cin,s1);
        
        for(int i=0;i<s1.size();++i)
        {
            //to upper
            if(s1[i]>='a'&&s1[i]<='z')
                s1[i]-=32;
            //count
            if(s1[i]>='A'&&s1[i]<='Z')
                s[s1[i]-'A'].count++;
        }
    }
    
    sort(s,s+26,cmp);
    
    for(int i=0;i<26;++i)
    {
        if(s[i].count==0)
            break;
        cout<<s[i].c<<' '<<s[i].count<<endl;
    }

    return 0;
}
