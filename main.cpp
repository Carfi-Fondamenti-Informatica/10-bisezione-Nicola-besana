#include <iostream>
#include <math.h>
using namespace std;

float f(float y) {

    float x=0;
    x = (y*y)*cos(y)+1;
    return x;
}

int main() {
    float a = 0, b = 0, x = 0, err = 1,m=0;
    do {
        cout << "Inserire gli estremi:";
        cin >> a;
        cin >> b;
    } while (f(a) * f(b) >= 0);


while(f(x) !=0) {
    x = (a + b) / 2;
    if (f(a) * f(b) < 0) {
            b = x;
        } else {
            a = x;
        }
        err = ((b - a) / 2);
    if(err >= (1e-6)){
        break;
    }
}
    x=x*10000;
    x=(int)x;
    x=x/10000;
    cout<< x;
    return 0;
}
