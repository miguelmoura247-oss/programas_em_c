#include <stdio.h>

    double pi = 3.141592;

    double converter(double x){
        double radiano;
        radiano = (x * pi)/180;
        printf("%lf",radiano);
        return radiano;
    }

    double cosseno(double x){

        double radiano = converter(x);
        double soma = 0.0;
        int termos = 10;

        for (int i = 0; i < termos; i++) {

        double numerador = 1.0;
        double denominador = 1.0;
        
        
        for (int j = 0; j < 2 * i; j++) {
            numerador *= radiano;
        }
        
        
        for (int j = 1; j <= 2 * i; j++) {
            denominador *= j;
        }
        
        double termo = numerador / denominador;
        if (i % 2 != 0) {
            soma -= termo;
        } else {
            soma += termo;
        }
    }
      printf("%lf",soma);
      return soma;

}

    double seno(double x){
        
    double radiano = converter(x);
    double soma = 0.0;
    int termos = 10;

    for (int i = 0; i < termos; i++) {
        double numerador = 1.0;
        double denominador = 1.0;
        
        for (int j = 0; j < (2 * i) + 1; j++) {
            numerador *= radiano;
        }
        
        for (int j = 1; j <= (2 * i) + 1; j++) {
            denominador *= j;
        }
        
        double termo = numerador / denominador;
        
        // Alterna o sinal
        if (i % 2 != 0) {
            soma -= termo;
        } else {
            soma += termo;
        }
    } 
    
    printf("%lf",soma);
    return soma;
}

 double tangente(double x){

    double tan = seno(x)/cosseno(x);
    printf("%lf",tan);
    return tan;
}
