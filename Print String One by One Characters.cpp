#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Input the string: "<<endl;
    char text[100];
    gets(text);

    cout<<"Printing the string one by one characters: "<<endl;
    for(int i=0;i<text[i]!= '\0';i++){
        cout<<text[i]<<" ";
    }
    return 0;
}
