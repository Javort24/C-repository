#include <stdio.h>
int main(){
    
    const double PI=3.1416;
    double radio;
    double longitud;
    double area;
    double volumen;
        printf("Introduce el radio de la circunferencia \n");
        scanf("%lf", &radio);
        longitud = 2* PI *radio;
        printf("La longitud de la circunferencia es: %.3f \n", longitud);
        area = PI * radio * radio;
        printf("El area del cicurlo es: %.3lf \n", area);
        volumen = 4/3 * PI * radio;
        printf("El volumen de la esfera es: %.3lf", volumen);
        

return 0;

}