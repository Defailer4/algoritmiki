#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A = 1;
    double B = 2; 

    double e = 0.0001;
    double C;
    int counter = 0;

    if((A*A*A*A*A-A-0.2)*(B*B*B*B*B-B-0.2)>=0){
        cout<<"no roots"<<'\n';
        return 1;
    }
    while((B-A)>=e){
        counter++;
        C = (A+B)/2;
        cout<<counter<<"  :  "<<C<<endl;

        double f_c = C*C*C*C*C-C-0.2;

        if(fabs(f_c)< e){
            break;
        }

        if((pow(A,5)-A-0.2)*f_c<0){
            B = C;
        }
        else{
            A=C;
        }
    }
    cout<<"result: "<<C<<endl;
    return 0;
}
