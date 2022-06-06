#include <iostream>

using namespace std;
void problema1();
void problema2();
void problema3();

int main()
{
    //problema1();
    //problema2();
    problema3();
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
    int i=0;
    int res=3;
    int y=10000;

    cout<<"ingrese numero entero : ";
    cin>>a;
    for(int t=9;t>=0;t--){

        if(i>=3){
            y=y/10;
            i=0;
            res=3;
            c=c/2;
        }
        else if(i>=1 and i<3){
            res=res-2;
        }

        if(a>c){
            cout<<c<<": "<<a/c<<endl;
            a=a-(c*(a/c));

        }
        else{
            cout<<c<<": "<<0<<endl;
        }
        i++;
        if(i!=3)
            c=c-(res*y);
    }
    cout<<"Faltante: "<<a<<endl;
}
void problema3(){
    int a;
    cout<<"Ingrese numero del mes: ";
    cin>>a;
    if(a>12 or a<=0)
        cout<<a<<" es un mes invalido."<<endl;
    else{
        int b;
        cout<<"Ingrese numero de dia del mes: ";
        cin>>b;
        if(a<=7){
            if(a%2==0 and a!=2){
                if(b>30 or b<=0){
                    cout<<a<<"/"<<b<<" es una fecha invalida."<<endl;
                }
                else
                    cout<<b<<"/"<<b<<" es una fecha valida."<<endl;

                }
            else if(a%2==1){
                if(b>31 or b<=0)
                    cout<<a<<"/"<<b<<" es una fecha invalida."<<endl;
                else
                    cout<<a<<"/"<<b<<" es una fecha valida."<<endl;
            }
            else if(a==2){
                if(b==29)
                    cout<<a<<"/"<<b<<" es valida es bisiesto."<<endl;
                else if(b>0 and b<29)
                    cout<<a<<"/"<<b<<" es una fecha valida."<<endl;
                else
                    cout<<a<<"/"<<b<<" es una fecha invalida."<<endl;
            }
            }
        else{
            if(a%2==0){
                if(b>31 or b<=0)
                    cout<<a<<"/"<<b<<" es una fecha invalida."<<endl;
                else
                    cout<<a<<"/"<<b<<" es una fecha valida."<<endl;
            }
            else{
                if(b>30 or b<=0){
                    cout<<a<<"/"<<b<<" es una fecha invalida."<<endl;
                }
                else
                    cout<<b<<"/"<<b<<" es una fecha valida."<<endl;
            }

        }
        }


}
