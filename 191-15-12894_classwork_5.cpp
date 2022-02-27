#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin,s,'$');

    int i,j,line=1,space=0,total=0;
    for(i=0;i<s.length();i++){

        if(s[i]=='/'&&s[i+1]=='/'){
            while(1)
            {
                i++;
                if(s[i]=='\n'){
                    break;
                }
            }
        }
        else if(s[i]==' '){
                space++;
                total++;
            }
        else if(s[i]=='\n'){
            cout<<"Number of space in line no "<<line<<" is "<<space<<endl;
                line++;
                space=0;
                }

        }
        cout<<"Total number of space "<<total<<endl;

}
