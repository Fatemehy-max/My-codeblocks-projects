#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;
    
    int c=1;
    
    cout<<"maghsoom alaihaie adadha:"<<a<<endl;
    do{
        if(a%c==0)
        cout<<c<<"\n";
        c++;
    }while(c<=a);
    cout<<endl;
    
    int d=1;
    
    cout<<"Maghsoom alaihaie adadha:"<<b<<endl;
    do{
    if(b%d==0)
    cout<<d<<"\n";
    d++;
    
    }while(d<=b);



    return 0;
}