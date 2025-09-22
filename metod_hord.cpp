#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A = 1;
    double B = 2; 
    
    double eps = 0.0001;
    double C;
    int counter = 0;

    double fA = A*A*A*A*A - A - 0.2;
    double fB = B*B*B*B*B - B - 0.2;
    
    //X*X*X*X*X-X-0.2
    
    if((A*A*A*A*A-A-0.2)*(B*B*B*B*B-B-0.2)>=0){
        cout<<"no roots"<<'\n';
        return 1;
    }
    do{
        //Формула метода хорд:
        //x =(A*F(B)-B*F(A))/((F(B)-F(A))
        D=((A*fB)-(B*fA))/(fB-fA);
        double fD = D*D*D*D*D -D -0.2
        if(fabs(fD),eps){
            break;
        }
        if(fA*fD<0){
            B=D;
        }
        else{
            A=D;
        }
    }while((B-A)>=eps);

    cout<<"Result2: "<<D<<endl;
    return 0;
}
