#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name,code;
    map <char,int> m;
    map <char, int>::iterator it;
    int i,j,cnt;

    cout<<"Enter the name : "<<endl;
    cin>>name;
    cout<<"Enter the code (for stop using '*') : "<<endl;
    getline(cin,code,'*');

    for(i=0;name[i];i++){
         m[name[i]] = 1;

    }


    for(j=0;code[j];j++){
        if(m[code[j]]>0){
            m[code[j]]++;
        }
    }
    for(i=0;name[i];i++){
         cout<<name[i]<<" count: "<<m[name[i]]-1<<endl;

    }



    return 0;
}
