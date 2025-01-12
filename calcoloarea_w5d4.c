#include <stdio.h>
#include <math.h>

int main() {
    printf("Calcolo area quadrato, cerchio e triangolo equilatero\n");
    printf("Inserisci un numero: ");
    float d;
    scanf("%f", &d);
    
    //AREA QUADRATO
    float area_quadrato = d*d;
    printf("L'area del quadrato è: %f\n", area_quadrato);
    
    //AREA QUADRATO CON FUNZIONE POTENZA
    float a=pow(d, 2);
    printf("L'area del quadrato con funzione potenza: %f\n", a);
    
    //AREA CERCHIO
    float r = d/2;
    float area_cerchio = r*r*M_PI;
    printf("L'area del cerchio è: %f\n", area_cerchio);
    
    //AREA TRIANGOLO EQUILATERO
    float area_triangolo = (sqrt(3)/4)*d*d;
    printf("L'area del trangolo equilatero è: %f\n", area_triangolo);
    
    return 0;
}