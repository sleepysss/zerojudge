#include <iostream>
#include <string>

using namespace std;

//整理完再印是無法的,因為裡面有引號


int main()
{
    bool s=false;
    string s1;
    while(getline(cin,s1))
    {
        for(int i=0;i<s1.size();++i)
        {
            if(s1[i]=='"')
            {
                if(!s)
                {
                    cout<<"``"; 
                    s=!s;
                }
                else
                {
                    cout<<"''";
                    s=!s;
                }
            }
            else
                cout<<s1[i];
        }
        cout<<endl; 
    }

    return 0;
}
