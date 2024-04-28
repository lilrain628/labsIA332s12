#include <stdio.h>
#include <math.h>

double res_ln(double x, int n) {
    double result = (pow(x - 1, n )) / (n  * pow(x, n));
    if(fabs(result) < 10e-4){
        return result;
    }
    return result+ res_ln(x, n+1);
}

int main() {
    double x=0.6;
    double n=1;
    double res=res_ln(x, n);

    

    printf("Результат : %f\n",res);
   // printf("Точность достигнута за %d итераций.\n", iteration);

    return 0;
}