#include<stdio.h>
#include<stdlib.h>
main()
{
	  
	  int numero;
	  
	  do
	  {
	  		printf("Inserire la dimensione dei vettori: ");
	  		scanf("%d",&numero);
	  		printf("\n\n");
	  		if(numero<=0)
	  		{
	  			printf("ERRORE! Dimensione non valida!");
	  			printf("\n\n");
	}
	  }
	             while(numero<=0);
	            
	  
 int a[numero],b[numero],c[numero],i;

      for(i=0;i<numero;i++)
      {
                       printf("Inserire il valore n. %d del vettore A: ",i+1);
                       scanf("%d",&a[i]);
                       printf("Inserire il valore n. %d del vettore B: ",i+1);
                       scanf("%d",&b[i]);
      }
      printf("\n\n");

      for (i=0;i<numero;i++)
      {
                        c[i]=a[i]+b[i];
      }
 
      printf("Elementi del vettore C: ");
      printf("\n");
      for (i=0;i<numero;i++)
      {
               printf("\nIl valore n. %d di C e': %d",i+1,c[i]);
      }
      printf("\n\n");
}
