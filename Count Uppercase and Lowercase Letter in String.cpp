#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countUpper=0,countLower=0;

    cout<<"Input the string: "<<endl;
    char text[100];
    gets(text);

    for(int i=0;i<text[i]!= '\0';i++){
        if(text[i]>='A' && text[i]<='Z' || text[i]>='a' && text[i]<='z'){
            if(text[i]>='A' && text[i]<='Z'){
                countUpper++;
            }
            else if(text[i]>='a' && text[i]<='z'){
                countLower++;
            }
        }
    }
    cout<<"Uppercase in the string: "<<countUpper<<endl;
    cout<<"Lowercase in the string: "<<countLower<<endl;

    //we can determine another way, which is more efficient.
    //suppose we have a string {YourName}. If we determine the Uppercase and then
    //subtract the value from the length of the string we get the number of lowercase letter

    int lengthOfString = 0, countUpper2 = 0, countLower2 = 0;
    for(int i=0;i<text[i]!= '\0';i++){
            if(text[i]!=' '){
                lengthOfString++;
            }
        if(text[i]>='A' && text[i]<='Z'){
                countUpper2++;
        }
    }
    countLower2 = lengthOfString - countUpper2;
    cout<<"Uppercase in the string: "<<countUpper2<<endl;
    cout<<"Lowercase in the string: "<<countLower2<<endl;

    return 0;
}

