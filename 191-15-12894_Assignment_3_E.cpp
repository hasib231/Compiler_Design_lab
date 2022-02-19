//Name: Hasibul Hasan
//Id: 191-15-12894
//section : E

#include <bits/stdc++.h>

using namespace std;


bool isValidIdentifiers(string s,int n)
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

    for(i = 1; i < s.length(); i++) {
        if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'))
            return false;
    }

    bool flag=0;
       for(i = 0; i < 32; i++) {
          if(s==keyword[i]) {
             flag=1;
          }
       }
       if(flag){
        cout<<"This is a keyword and ";
        return false;
       }


    return true;
}


int main()
{
    string s;
    cout<<"Enter a string for check identifiers: "<<endl;
    cin>>s;
    int n = s.length();

    if (isValidIdentifiers(s, n))
        cout << "This is a Valid identifiers"<<endl;
    else
        cout << "Invalid identifiers"<<endl;

    return 0;
}
