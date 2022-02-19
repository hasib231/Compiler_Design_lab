#include <bits/stdc++.h>

using namespace std;

bool isIdnORkey(string s)
{
    string keyword[40]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while",
      "cin","cout","endl","string","auto","map","list","set"};


    if (!((s[0] >='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_'))
        return false;

    for(int i = 1; i < s.length(); i++) {
        if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'))
            return false;
    }

    bool flag = 0;
       for(int i = 0; i < 40; i++) {
          if( s == keyword[i]) {
             flag = 1;
          }
       }
       if(flag){
        cout<<s<<" --> keyword"<<endl;
        return false;
       }


    return true;
}

int main()
{
    string s,s2;
    int i;
    cout<<"Enter the code: "<<endl;
    getline(cin,s,'$');
    for(i=0;s[i];i++){

        if(s[i]=='"'){
            while(1){
                if(s[i]=='"')break;
                i++;
            }
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'||s[i]==' '
           ||s[i]=='('||s[i]==')'||s[i]==','||s[i]=='['||s[i]==']'||s[i]=='='||s[i]=='+'||s[i]=='-'
           ||s[i]=='*'||s[i]=='&'||s[i]=='|'||s[i]==';'||s[i]=='.'||s[i]=='<'||s[i]=='>'){
            if((s[i]==' '||s[i]=='('||s[i]==')'||s[i]==','||s[i]=='['||s[i]==']'||s[i]=='='
               ||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='&'||s[i]=='|'||s[i]==';'||s[i]=='.'
               ||s[i]=='<'||s[i]=='>')&&s2[0]!='\0'){
                bool b = isIdnORkey(s2);
                if(b){
                    cout<<s2<<" --> identifiers"<<endl;
                    s2.erase();
                }
                else{
                    s2.erase();
                }
            }
            else{
                if(s[i]!=' '){
                s2=s2+s[i];
                }
            }
        }

    }

}

