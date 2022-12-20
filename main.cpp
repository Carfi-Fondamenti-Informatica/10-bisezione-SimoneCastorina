#include <iostream>
#include <cmath>
using namespace std;
double f (double y,double fy){
    fy=pow(y,2)*cos(y)+1;
    return fy;
}

int main() {
    double a=0, b=0,x=0,fy=0,err=2;
    cout<<"inserire estremi"<<endl;
    while(f(a,fy)*f(b,fy)>=0) {
        cin >> a;
        cin >> b;
        if(f(a,fy)*f(b,fy)<0){
            break;
        }
    }
    while(f(x,fy)!=0){
        x=(a+b/2);
        if(f(a,fy)*f(b,fy)<0){
            a=x;
        }else{
            b=x;
        }
        err=abs(b-a)/2;
        if(err>=1e-6){
            break;
        }
    }
    x=x*10000;
    x=(int)x;
    x=x/10000;
    cout<<x<<endl;
    return 0;
}
