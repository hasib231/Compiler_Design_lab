#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i;
    cout<<"Enter the code (for stop using '@') : "<<endl;
    getline(cin,s,'@');

    for(i=0; s[i]; i++){
        if(s[i]=='/'&&s[i+1]=='/'){
            while(1){
                if(s[i]=='\n'){
                    cout<<endl;
                    break;
                }
                i++;
            }
        }
        else if(s[i]=='/'&&s[i+1]=='*'){
            while(1){
                if(s[i]=='*'&&s[i+1]=='/'){

                    if(s[i+2]=='\n'){
                        i++;
                    }
                    else{
                        cout<<endl;
                    }
                    i++;
                    break;
                }
                i++;
            }
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}
