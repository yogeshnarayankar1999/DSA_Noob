#include<iostream>

using namespace std;

string reverse_str(string str){
    
    //int length=str.length();
    int length=0;
    for(length=0;str[length]!='\0';length++);

    cout<<length<<endl;

    for(int i=0;i<length/2;i++)
    {   

        char n = str[i];
        str[i]=str[length-1-i];
        str[length-1-i] = n;
    }
    cout<<str<<endl;
    return str;
}


int main()
{
    string str;
    cin>>str;
    //string palindrom=str;

    string reverse=reverse_str(str);
    string palindrom=str;

    if(palindrom==reverse)
    {
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"Not palindrom"<<endl;

    }

    return 0;
}