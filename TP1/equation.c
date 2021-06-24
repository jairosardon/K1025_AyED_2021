    #include<stdio.h>
    #include<math.h>
     
    int main(){
      float a,b,c;
      float d,root1,root2;  
     
     
      printf("Ingrese a, b y c de la ecuacion cuadratica: ");
      scanf("%f%f%f",&a,&b,&c);
       
      d = b * b - 4 * a * c;
      
      if(d < 0){
        printf("No tiene solucion en los reales.\n");
      }
      else if(d==0){
       printf("Raices iguales.\n");
     
       root1 = -b /(2* a);
       printf("Ambas raices valen : %.3f ",root1);
     
       return 0;
      }
      else{
       printf("Raices reales.\n");
      
       root1 = ( -b + sqrt(d)) / (2* a);
       root2 = ( -b - sqrt(d)) / (2* a);
       printf("Las raices son: %.3f , %.3f",root1,root2);
      }
     
      return 0;
    }
