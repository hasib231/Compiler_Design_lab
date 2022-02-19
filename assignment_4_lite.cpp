#include <bits/stdc++.h>

using namespace std;

bool isItem(string s)
{
    string keyword[32]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"};


    if (!((s[0] >='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_'))
        return false;

    int i=0;
    bool flag = 0;
       for(i = 0; i < 32; i++) {
          if( s == keyword[i]) {
             flag = 1;
          }
       }
       if(flag){
        cout<<s<<" is a keyword"<<endl;
        return false;
       }


    return true;
}

int main()
{
    string s,p;
    int i;
    getline(cin,s,'#');
    for(i=0;s[i];i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'||s[i]==' '){
            if(s[i]==' '&&p[0]!='\0'){
                bool b = isItem(p);
                if(b){
                    cout<<p<<" is a identifiers"<<endl;
                    p.erase();
                }
                else{
                    p.erase();
                }
            }
            else{
                if(s[i]!=' '){
                p=p+s[i];
                }
            }
        }

    }

}
