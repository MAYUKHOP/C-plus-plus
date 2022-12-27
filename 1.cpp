#include<iostream>

using namespace std;
int main()
{
    float a,b;
    char c;

    cout<<"Welcome to my calculator"<<endl;

    cout<<"Enter the first number:";
    cin>>a;

    cout<<"Enter the second number:";
    cin>>b;

    cout<<"What do you want to do?{just type :- + , - , * , / }"<<endl;
    cin>>c;
    
    if (c =='/')
    {
        cout<<"The answer is:"<<(float)a/b;
    }

    else if (c =='+')
    {
        cout<<"The answer is:"<<(float)a+b;
    }

    else if (c =='/')
    {
        cout<<"The answer is:"<<(float)a-b;
    }
    

    else if (c == '*')
    {
        cout<<"The answer is:"<<(float)a*b;
    }

    else
    {
        cout<<"unknown operator";
    }


    return 0;
}