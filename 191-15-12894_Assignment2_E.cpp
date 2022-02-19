//ID:191-15-12894
//Section: E

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,len;
    len=s.length();
    if(s[0]=='b'){
        int b1=0;
        for(i=0;s[i];i++){
            if(s[i]=='b'){
                b1++;
            }
        }
        if(b1==len){
            cout<<"Accepted"<<endl;
        }
        else{
        cout<<"Not Accepted"<<endl;
        }
    }
    else if(s[0]=='a'){
        int b2=0;
        for(i=0;s[i];i++){
            if(s[i]=='a'){
                b2++;
            }
            if(s[i+1]=='b'){break;}
        }
        if(s[b2]=='b'){
            for(i=b2;s[i];i++){
            if(s[i]=='b'){
                b2++;
            }
            }
        }
        if(b2==len){
            cout<<"Accepted"<<endl;
        }
        else{
        cout<<"Not Accepted"<<endl;
        }
    }
    else{
        cout<<"Not Accepted"<<endl;
    }
    return 0;
}
