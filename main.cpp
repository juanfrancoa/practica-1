#include <iostream>

using namespace std;
void problema1();
void problema2();
void problema3();
void problema4();
void problema5();
void problema6();
unsigned long long int factorial(int a);
void problema7();
void problema8();
void problema9();
int potencia(int a);

int main()
{
    /*problema1();
    problema2();
    problema3();
    problema4();
    problema5();
    problema6();
    problema7();
    problema8();*/
    problema9();
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
void problema4(){
    int a;
    cout<<"Ingrese hora: ";
    cin>>a;
    if(a%100>59 or a>2359 or a<0){
        cout<<a<<" es un tiempo invalida."<<endl;
    }
    else{
        int b;
        cout<<"Ingrese segunda hora: ";
        cin>>b;
        if(b%100>59 or b>2359 or b<0){
            cout<<b<<" es un tiempo invalida."<<endl;
        }
        else{
            int d=b%100+a%100,c=b/100+a/100,e=0;
            if(d>=60){
                e=d/60;
                d=d-60*e;
                c=c+e;
            }
        if(d<10)
            cout<<"La hora es "<<c<<":0"<<d<<endl;
        else
            cout<<"La hora es "<<c<<":"<<d<<endl;
        }
    }
}
void problema5(){
    int t,y=1;
    cout<<"Ingrese numero impar: ";
    cin>>t;
    for(int j=t/2;j>=0;j--)
        {
        for(int f=j;f>0;f--)
            cout<<" ";
        for(int g=1;g<=y;g++)
            cout<<"*";
         y+=2;
         cout<<endl;
        }
    for(int j=1;j<=t/2;j++)
        {
        for(int f=1;f<=j;f++)
            cout<<" ";
        for(int g=t-(2*j);g>0;g--)
            cout<<"*";
        cout<<endl;
        }
}
void problema6(){
    int a;
    cout<<"Ingrese numero natural: ";
    cin>>a;
    long double f=0.0;
    long double g=0.0;
    for(int e=0;e<a;e++){
        g=factorial(e);
        f=f+(1/g);
    }
    cout<<"e es aproximadamente: "<<f<<endl;

}
unsigned long long int factorial(int a){
    unsigned long long int g=1;
    if(a==0)
        return 1;
    else{
        for(a;a>0;a--){
            g*=a;
        }
        return g;
    }
}
void problema7(){
    int a=1,b=1,p=0,h=0,in;
        cout<<"Ingrese numero : ";
        cin>>in;
        while(h<in)
            {
            h=a+b;
            a=b;
            b=h;
            if(h%2==0 and h<in)
            p=p+h;
        }
    cout<<"El resutado de la suma : "<<p<<endl;

}
void problema8(){
    int a,b,c,d=0,e=1,f;
        cout<<"Ingrese el primer numero : ";
        cin>>a;
        cout<<"Ingrese seguno numero : ";
        cin>>b;
        cout<<"Ingrese tercer numero : ";
        cin>>c;
        f=a;
        while(f<c)
            {
            d+=f;
            cout<<f;
            e++;
            f=a*e;
            if(f<c)
                cout<<"+";
            }
        a=f/e;
        e=1;
        f=b;
        while(f<c)
            {
            if(f%a!=0)
                {
                d+=f;
                cout<<"+"<<f;
                }
            e++;
            f=b*e;
            }
        cout<<"="<<d<<endl;

}
void problema9(){
    int a,b=10,c=0,m=0;
    cout<<"Ingrese numero entero positivo: ";
    cin>>a;
    while(a>b)
        b*=10;
    b/=10;
    while(b>=1){
        m=a/b;
        c+=potencia(m);
        a-=m*b;
        b/=10;
    }
    cout<<"El resultado de la suma es: "<<c<<endl;
}
int potencia(int a){
    int t=0;
    int y=1;
    while(t<a){
        y*=a;
        t++;
    }
    return y;
}
