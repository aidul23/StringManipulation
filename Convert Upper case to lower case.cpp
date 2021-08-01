#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Input the string: "<<endl;
    char text[100];
    gets(text);

    for(int i=0;i<text[i]!='\0';i++){
        if(text[i] >= 65 && text[i]<=90){
            text[i] = text[i]+32;
            cout<<text[i];
        }
        else if(text[i] >= 97 && text[i]<=122){
            text[i] = text[i] - 32;
            cout<<text[i];
        }
        else if(text[i] == 32){
            cout<<" ";
        }
    }
    return 0;
}
