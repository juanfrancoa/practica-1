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
void problema10();
void problema12();
void problema13();
void problema14();
bool palindro(int a);
void problema15();
void problema17();
void problema11();
int primo(int a);
void problema16();

int main()
{
    /*problema1();
    problema2();
    problema3();
    problema4();
    problema5();
    problema6();
    problema7();
    problema8();
    problema9();
    problema10();
    problema12();
    problema13();
    problema14();
    problema15();
    problema17();
    problema11();*/
    problema16();
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
        for(int b=a;b>0;b--){
            g*=b;
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
void problema10(){
    int a,b=0,c=1,d=1,y=1;
        cout<<"Ingrese posicion de numero primo : ";
        cin>>a;
        while(c<=a)
        {
            while(y<=d and b<3)
            {
            if(d%y==0)
               b++;
            y++;
            }
        if(b==2)
            c++;
        d++;
        b = 0;
        y = 1;
        }
    cout<<"El primo numero "<<a<<" es: "<<d-1<<endl;
}
void problema12(){
    int a,b=0,c=0,d=1,y=1;
    cout<<"Maximo factor primo : ";
    cin>>a;
    while(d<=a)
        {
        while(y<=d and b<3)
        {
            if(d%y==0)
                b++;
            y++;
        }
        if(b==2)
        {
           if(a%d==0)
           c=d;
        }
        d++;
        b = 0;
        y = 1;
        }
    cout<<"El mayor factor primo de "<<a<<" es: "<<c<<endl;
}
void problema13(){
    int a,b=0,c=0,d=1,y=1;
    cout<<"Suma de primo : ";
    cin>>a;
    while(d<a)
    {
       while(y<=d and b<3)
       {
          if(d%y==0)
             b++;
          y++;
        }
        if(b==2)
           c+=d;
        d++;
        b = 0;
        y = 1;
    }
cout<<"El resultado de la suma es : "<<c<<endl;
}
void problema14(){
    int a=100,b=100,c=0,t=0,p=0;
    int u=0;
    for(int ji=b;ji<=999;ji++){
        for(int y=a;y<=999;y++){
            u=y*ji;
            if(palindro(u) and u>c){
                c=u;
                t=y;
                p=ji;
            }
        }
    }
    cout<<t<<"*"<<p<<"="<<c<<endl;
}
bool palindro(int a){
    int c=10000;
    while(c<a){
        c*=10;
    }
    c/=10;
    int y=0;
    int h=a;
    int j=0;
    for(int v=c,u=1;v>=1;v/=10,u*=10){
        j=h/v;
        h-=j*v;
        y+=j*u;
    }
    if(y==a)
        return true;
    else
        return false;
}
void problema15(){
    int n,a=2,b,c=1,d=0,f;
    cout<<"Ingrese numero impar : ";
    cin>>n;
    f=n;
    while(f>=3)
    {
        b=1;
        while(b<=4)
        {
            d+=c;
            c+=a;
            b++;
        }
    f-=2;
    a+=2;
    }
    d+=c;
    cout<<"En una espiral "<<n<<"x"<<n<<", La suma es : "<<d<<endl;
}
void problema17(){
    int a,b=0,c=0,d=0,n=1;
    cout<<"Ingrese numero : ";
    cin>>a;
    while(d<=a)
    {
        d=0;
        b=1;
        c=n*(n+1)/2;
        while(b<=c)
        {
            if(c%b==0)
                d++;
            b++;
        }
        n++;
    }
cout<<"El numero es: "<<c<<" y tiene "<<d<<" divisores"<<endl;
}
void problema11(){
    int a=1,b=1,c=1,d=1,y=1;int h,k;
    cout<<"Ingrese numero entero positivo: ";
    cin>>h;
    k=h;
    while(h>1){

        if(h%primo(b)==0){
            h/=primo(b);
        }
        else{
            b++;
            if(h%primo(b)==0){
                h/=primo(b);
            }
        }
        if(k!=h){
            k=h;

            cout<<b<<endl;
        }
    }
}
int primo(int a){
    int b=0,c=1,d=1,y=1;
        while(c<=a)
        {
            while(y<=d and b<3)
            {
            if(d%y==0)
               b++;
            y++;
            }
        if(b==2)
            c++;
        d++;
        b = 0;
        y = 1;
        }
    d--;
    return d;
}
void problema16(){
    int a,b,c=1,d=1,e;
    cout<<"Ingrese numero entero positivo mayor a uno: ";
    cin>>a;
    b=a-1;

    for(int i=b;i>1;i--){
        b=i;
    while(b>1){
        if(b%2==0){
            b/=2;
        }
        else{
            b=3*b+1;
        }
        c++;
    }
    if(d<c){
        e=i;
        d=c;
    }
    c=1;
   }
   cout<<"La serie mas larga es con la semilla: "<<e<<", teniendo "<<d<<" terminos."<<endl;
   cout<<"Para la semilla: "<<e<<" : "<<e;
   while(e>1){
       if(e%2==0){
           e/=2;
       }
       else{
           e=3*e+1;
       }
       cout<<", "<<e;
   }
   cout<<endl;
}
