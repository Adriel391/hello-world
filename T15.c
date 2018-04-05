//Adriel S S Nobre
#include <stdio.h>

//strncpy
char *copiarString(char *str1, char *str2, int *tam){
	
   int i,y;
   
   for(i=0; str1[i]!='\0'; i++);
   	
	for(y=0;y<tam;y++,i++){
		
		str1[y]=str2[y];
	}
	return (str1);
}



//strncmp
int *compararAte(char *str1, char *str2, int *tam){
	
   int i,x,y=0,z=0;
   for(i=0; str1[i]!='\0'; i++);
		

		
   for(;z<=tam;z++){
   		
   		if(z==tam){
   			return (0);
		   }
   		if(str1[z]==str2[z]){
   			continue;
		   }else{            
		   	break;
		   }	   
   }
   
   for(;y<=i;y++){
   		
   		if(str1[y]<str2[y]){
   				return(-1);
			   }
   		if(str1[y]<=str2[y]){   
   			continue;
   		}else{
   			break;
		   }
   }
	
	return (1);

}


//strcmp
int *comparar(char *str1, char *str2){
	
   int i,x,y=0,z=0;
   for(i=0; str1[i]!='\0'; i++);
   
   for(x=0; str2[x]!='\0'; x++);
		
    if(i==x){
     for(;z<=i;z++){
   		
   		if(z==i){
   			return (0);
		   }
   		if(str1[z]==str2[z]){
   			continue;
		   }else{            
		   	break;
		   }	   
     }
	}
   for(;y<=i;y++){
   		
   		if(str1[y]<str2[y]){
   				return(-1);
			   }
   		if(str1[y]<=str2[y]){   
   			continue;
   		}else{
   			break;
		   }
   }
	
	return (1);

}

//strncat
char *concatenar(char *str1, char *str2, int *tam)
{
   int i,j;
   for(i=0; str1[i]!='\0'; i++); 

   	for(j=0; str2[j]!='\0'&&j<tam; j++, i++) 
    {
      str1[i]=str2[j];
    }

    str1[i]='\0';
    return (str1);
}
//strlen
int *tamString(char *str1){
	
	int i;
	for(i=0;str1[i]!='\0';i++){
	}
	return (i);
	
}



//testes
int main ( ){
    char str1[100];
    char str2[100];
    int tam=3;
    

	//teste funcao copiarString
	 printf("\nstrncpy\n\n");
	
	 printf("digite uma string\n");
    fgets(str1,100,stdin);
    strtok(str1, "\n");
	
    copiarString(str1,"ola",tam);
    printf("Strings copiadas: %s \n",str1);
    
    
    //funcao comparar
    printf("\nstrcmp\n\n");
    printf("digite uma string\n");
    fgets(str1,100,stdin);
    strtok(str1, "\n");

    printf("digite outra string\n");
    fgets(str2,100,stdin);
    strtok(str2, "\n");    
    
    printf("iguais = 0, Str1 menor = -1, str2 menor = 1 : %i\n",comparar(str1,str2));
    
    
    
   //teste funcao compararAte
   printf("\nstrncmp\n\n");
    printf("digite uma string\n");
    fgets(str1,100,stdin);
    strtok(str1, "\n");

    printf("digite outra string\n");
    fgets(str2,100,stdin);
    strtok(str2, "\n");    
    
    printf("iguais = 0, Str1 menor = -1, str2 menor = 1 : %i\n",compararAte(str1,str2,tam));
   
    
    //teste funcao de retornar tamanho da string
    printf("\nstrlen\n\n");
	printf("digite uma string\n");
    fgets(str1,100,stdin);
    strtok(str1, "\n");
    
	printf("tamanho da string : %i\n",tamString(str1));
	
	
	//teste funcao concatenar
	printf("\nstrncat\n\n");
    printf("digite uma string\n");
    fgets(str1,100,stdin);
    strtok(str1, "\n");
    printf("digite outra string\n");
    fgets(str2,100,stdin);
    strtok(str2, "\n");
    printf("%s\n",concatenar(str1,str2,tam));
    
}
