//validate Password

#include<iostream>

using namespace std;

bool validate(string &str){
    //length of string
    int length=str.length();
    int upper=0;
    int lower=0;
    int number=0;
    int special=0;

    if(length > 8){
        for(int i=0;i<=length;i++)
        {
            if('a'<=str[i]<='z')
            {
                lower++;
            }
            if('A'<=str[i]<='Z')
            {
                upper++;
            }
            if('0'<=str[i]<='9')
            {
                number++;
            }
            else
            {
                special++;
            }
        }
        if(upper > 0 && lower > 0  && number > 0 && special > 0)
        {
            return true;
        }
    }
    else{
        return false;
    }
}

int main()
{
    string str;
    cin>>str;
    string *pt=&str;

    bool res=validate(*pt);
    if (res==true)
    {
        cout<<"Password Validated"<<endl;

    }
    else{
        cout<<"Password is Invalid"<<endl;

    }
    return 0;
}