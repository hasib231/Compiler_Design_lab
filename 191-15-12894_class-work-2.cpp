//ID: 191-15-12894
//Name: HASIB
//H*ASIB*

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,len;
    len=s.length();

    if(len==3&&s[0]=='A'&&s[1]=='S'&&s[2]=='I'){
        cout<<"Accepted"<<endl;
    }
    else if(len>3&&s[0]=='A'&&s[1]=='S'&&s[2]=='I'){
        int b1=3;
        for(i=3;s[i];i++){
            if(s[i]=='B'){
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
    else if(len>3&&s[0]=='H'){
        int b2=0;
        for(i=0;s[i];i++){
            if(s[i]=='H'){
                b2++;
            }
            if(s[i+1]=='A'){break;}
        }
        b2+=3;
        if(s[b2]=='B'){
            for(i=b2;s[i];i++){
            if(s[i]=='B'){
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
