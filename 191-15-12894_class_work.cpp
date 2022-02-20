#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
   list <string> l;
   list <string>::iterator it;
   int i=1;
   while(getline(cin,s)){
    if(s[s.length()-1]!=';'){
        s+="  //error at";
        l.push_back(s);

    }
    else{
        l.push_back(s);
    }

   }
   for(it=l.begin();it!=l.end();it++){
    if((*it)[(*it).length()-1]==';'){
        cout<<i<<" "<<*it<<endl;
    }
    else{
    cout<<i<<" "<<*it<<i<<endl;
    }
    i++;
   }


}
