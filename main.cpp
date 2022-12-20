#include <iostream>
#include <cmath>
using namespace std;
double f (double x,double &fx){
    fx=x*x*cos(x)+1;
    return fx;
}

int main() {
    double a=0, b=0,x=0,fx=0,err=2;
    while(f(a,fx)*f(b,fx)>=0) {
        cout<<"inserire estremi"<<endl;
        cin >> a;
        cin >> b;
        if(f(a,fx)*f(b,fx)<0){
            break;
        }
    }

    while(f(x,fx)!=0){
        x=(a+b)/2;
        if(f(x,fx)*f(b,fx)<0){
            a=x;
        }else{
            b=x;
        }
        err=abs((a-b))/2;
        if(err <1e-6){
            break;
        }
    }
    x=x*10000;
    x=(int)x;
    x=x/10000;
    cout<<x<<endl;
    return 0;
}
