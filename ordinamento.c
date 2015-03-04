#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{

	
	  int n;

	  do
	  {
	  		printf("Inserire il numero di studenti: ");
	  		scanf("%d",&n);
	  		printf("\n\n");
	  		if(n<=0)
	  		{
	  			printf("ERRORE! Dimensione non valida!");
	  			printf("\n\n");
			}
	  }
	  while(n<=0);

	  int voti[n],i,j,scambioInt;
	  char studenti[n][20],scambioChar[20];

	  for(i=0;i<n;i++)
	  {
	  		printf("Inserire il nome dello studente n.%d: ",i+1);
	  		scanf("%s",studenti[i]);
	  		printf("Inserire il voto riportato a informatica dallo studente n.%d: ",i+1);
	  		scanf("%d",&voti[i]);
	  		printf("\n");
	  }

	  for(i=0;i<n-1;i++)
	  {
	  		for(j=i+1;j<n;j++)
	  		{
	  			if(voti[i]>voti[j])
	  			{
	  				scambioInt=voti[i];
	  				voti[i]=voti[j];
	  				voti[j]=scambioInt;
	  				strcpy(scambioChar,studenti[i]);
	  				strcpy(studenti[i],studenti[j]);
	  				strcpy(studenti[j],scambioChar);
	  				
	  			}
			}
	  }

	  puts("Risultati ordinati in ordine crescente di voto: ");
	  printf("\n");
	  for(i=0;i<n;i++)
	  {
	  		printf("%d)Alunno:%s, con voto: %d",i+1,studenti[i],voti[i]);
	  		printf("\n");
	  }
	  printf("\n\n");
 }
