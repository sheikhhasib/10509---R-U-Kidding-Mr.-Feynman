#include<stdio.h>
#include<math.h>
int main()
{
    double f,a,bx;
        while(scanf("%lf",&f)==1 && f){
            a = floor(pow(f,1/3.0)+1e-6);
            bx = (f-a*a*a)/3.0/(a*a);
            printf("%.4lf\n",a+bx);
        }

    return  0;
}
