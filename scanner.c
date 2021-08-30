#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "scanner.h"

int main() {
   
    enum tokens { FDT, SEP, CAD, SPA };
    const char* caracters[3] = {"Fin De Texto:", "Separador", "Cadena"};
    char caracter; 
    int tipoCaracter;
    
    printf("Ingrese un texto \n");
    caracter = getchar();
    
    while(caracter != EOF) 
    {
        if(!isspace(caracter)) 
        {
           if(caracter == ','){
                
                tipoCaracter = SEP;
                printf(caracters[tipoCaracter]);
                printf(": %c", caracter ," \t\n");
               
            }
           else if(caracter == EOF){
               
               tipoCaracter = FDT;
               printf(caracters[tipoCaracter]);
           else{
            
            tipoCaracter = CAD;
            
               printf(caracters[tipoCaracter]);
               printf(": %c", caracter , " \t\n");
           
           }
        }

            printf("\n");
                  
         caracter = getchar();
    
    }

    printf("Fin De Texto"); 
            
    return 0;
}