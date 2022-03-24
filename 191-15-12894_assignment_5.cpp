//Name: Hasibul Hasan
//Id: 191-15-12894
//Section: E

#include<bits/stdc++.h>

using namespace std;
int main(){
    string term[]={"CC","cC","d"};
    char nonterm[]={'S','C','C'};

    for(int i=0;i<3;i++){
        cout<<nonterm[i]<<"->"<<term[i]<<endl;
    }

    char stackk[100];
    stackk[0]='$';
    stackk[1]='\0';
    string input="cdcd$";
    int index=0;

    string tmp="";
    cout<<"stack-----------------input-----------------action"<<endl;
    cout<<stackk<<"                     "<<input<<endl;
    while(1){
        int l=strlen(stackk);
        if(l>1){
        cout<<stackk<<"                     "<<input<<"                 "<<"Shift"<<endl;
        }

        for(int i=l-1;i>0;i--){
            tmp=stackk[i]+tmp;
            for(int j=0;j<3;j++){
                if(tmp==term[j]){

                    stackk[i]=nonterm[j];
                    stackk[i+1]='\0';
                    cout<<stackk<<"                     "<<input<<"                 "<<"Reduce"<<endl;
                    tmp=nonterm[j];
                    break;
                }
            }

        }
        tmp="";

        if(index<input.length()-1){
            int len=strlen(stackk);
            stackk[len]=input[index];
            input[index]=' ';
            stackk[len+1]='\0';
            index++;
        }
        else{
            break;
        }
    }

}
