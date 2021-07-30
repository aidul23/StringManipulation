#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Input the string: "<<endl;
    char text[100];
    gets(text);

    cout<<"Vowel in the string are: "<<endl;
    for(int i=0;i<text[i]!= '\0';i++){
            if(text[i]=='A' || text[i]=='a' || text[i]=='E' || text[i]=='e' || text[i]=='I' || text[i]=='i' || text[i]=='O' || text[i]=='o' || text[i]=='U' || text[i]=='u'){
                cout<<text[i];
            }
    }

    cout<<"\n";

    cout<<"Consonant in the string are: "<<endl;
    for(int i=0;i<text[i]!= '\0';i++){
            if(!(text[i]=='A' || text[i]=='a' || text[i]=='E' || text[i]=='e' || text[i]=='I' || text[i]=='i' || text[i]=='O' || text[i]=='o' || text[i]=='U' || text[i]=='u')){
                cout<<text[i];
            }
    }

    cout<<"\n";

    return 0;
}

