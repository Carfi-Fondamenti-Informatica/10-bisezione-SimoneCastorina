#include <iostream>
#include <cmath>
using namespace std;
double f (double &y){
    return pow(y,2)*cos(y)+1;

}

int main() {
    double a=0, b=0,x=0,err=2;
    cout<<"inserire estremi"<<endl;
    while(f(a)*f(b)>=0) {
        cin >> a;
        cin >> b;
        if(f(a)*f(b)<0){
            break;
        }
    }
    while(f(x)!=0){
        x=(a+b/2);
        if(f(a)*f(b)<0){
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
    cout<<f(x)<<endl;
    return 0;
}
