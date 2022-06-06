#include <iostream>

using namespace std;
void problema1();
void problema2();

int main()
{
    //problema1();
    problema2();
    return 0;
}
void problema1(){
    char a;
    cout<<"Ingrese una letra : ";
    cin>>a;
    if(a==97 or a==101 or a==105 or a==111 or a==117 or a==65 or a==69 or a==73 or a==79 or a==85)
        cout<<a<<" es una vocal."<<endl;
    else if(a>65 and a<=90)
        cout<<a<<" es una consonante."<<endl;
    else if(a>97 and a<=122)
        cout<<a<<" es una consonante."<<endl;
    else
        cout<<a<<" no es una letra."<<endl;
}
void problema2(){
    int a;

    int c=50000;
    int i=1;
    int res=3;
    int y=10000;

    cout<<"ingrese numero entero : ";
    cin>>a;
    for(int t=8;t>=0;t--){

    if(a>c){
        cout<<c<<": "<<a/c<<endl;
        a=a-(c*(a/c));

    }
    else{
    cout<<c<<": "<<0<<endl;
    }

    c=c-(res*y);
    res=res-1;
    //cout<<i<<","<<res;
    i++;
    cout<<res<<endl;
    if(i>=3){
        c=c/2;
        y=y/10;
        i=1;
        res=3;
    }

    }
}
