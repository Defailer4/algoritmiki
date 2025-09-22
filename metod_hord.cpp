#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A = 1;
    double B = 2; 
    
    double eps = 0.0001;
    double D;
    int counter = 0;

    //X*X*X*X*X-X-0.2
    
    if((A*A*A*A*A-A-0.2)*(B*B*B*B*B-B-0.2)>=0){
        cout<<"no roots";
        return 1;
    }

    do{
        //Формула метода хорд: x =(A*F(B)-B*F(A))/((F(B)-F(A))
        D = (((A*(B*B*B*B*B - B - 0.2))-(B*(A*A*A*A*A - A - 0.2)))/((B*B*B*B*B - B - 0.2)-(A*A*A*A*A - A - 0.2)));
        double fD = D*D*D*D*D - D - 0.2;
        if(fabs(fD) < eps){
            break;
        }
        if((A*A*A*A*A - A - 0.2)*(B*B*B*B*B - B - 0.2)<0){
            B=D;
        }
        else{
            A=D;
        }
    }while((B-A)>=eps);

    cout<<"Result2: "<<D<<endl;
    return 0;
}
