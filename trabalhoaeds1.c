#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//struct da 1 entidade//
typedef struct cadrpg{
	char nome[50];
	char arma[50];
	char email[50];
	char nomepersonagem[50]; 
	char cidadepersonagem[50];
	int i;
}Cadastrorpg;
//struct da 2 entidade//
typedef struct cadfps{
	char nome[50];
	char arma[50];
	char email[50];
	char nomepersonagem[50]; 
	char cidadepersonagem[50];
	int i;
}Cadastrofps;
//struct da 3 entidade//
typedef struct cadmoba{
	char nome[50];
	char arma[50];
	char email[50];
	char nomepersonagem[50]; 
	char cidadepersonagem[50];
	int i;
}Cadastromoba;

//esta funcao tem a funcionalidade de vizualizar os personagem registrados pelo usuario//	
void vizu1(Cadastrorpg x[999], int nrpg1){
	  char q[50];
	 printf("!!!!VIZUALIZACAO DE PERSOANGEM!!!!\n");
	  printf("Digite o nome  que vc deseja ver:");
	  scanf("%s", q);
	  for(int i = 0 ; i < nrpg1; i++){
	  	    if(strcmp(q,x[i].nome)==0){
	  	      printf("O seu email e:%s \n", x[i].email);
            printf(" Seu nome e:%s \n",x[i].nome);
            printf("O nome do seu personagem e:%s \n",x[i].nomepersonagem);
            printf("A arma escolhida para ele e:%s \n",x[i].arma);
            printf("A cidade natal do seu personagem e:%s \n\n",x[i].cidadepersonagem);
            return;
			  }
			
	  }
	  printf("!!!!NOME INVALIDO!!!!\n");	    
			
}
//esta funcao tem a funcionalidade de vizualizar os personagem registrados pelo usuario//
void vizu2(Cadastrofps y[999], int nfps1){
	  char q[50];
	 printf("!!!!VIZUALIZACAO DE PERSOANGEM!!!!\n");
	  printf("Digite o nome que vc deseja ver:");
	  scanf("%s", q);
	  for(int i = 0 ; i < nfps1; i++){
	  	    if(strcmp(q,y[i].nome)==0){
	  	    printf("O seu email e:%s \n", y[i].email);
            printf(" Seu nome e:%s \n",y[i].nome);
            printf("O nome do seu personagem e:%s \n",y[i].nomepersonagem);
            printf("A arma escolhida para ele e:%s \n",y[i].arma);
            printf("A cidade natal do seu personagem e:%s \n\n",y[i].cidadepersonagem);
            return;
			  }
			
	  }
	  printf("!!!!NOME INVALIDO!!!!\n");	    
			
}
//esta funcao tem a funcionalidade de vizualizar os personagem registrados pelo usuario//
void vizu3(Cadastromoba z[999], int nmoba1){
	  char q[50];
	  printf("!!!!VIZUALIZACAO DE PERSOANGEM!!!!\n");
	  printf("Digite o nome que vc deseja ver:");
	  scanf("%s", q);
	  for(int i = 0 ; i < nmoba1; i++){
	  	    if(strcmp(q,z[i].nome)==0){
	  	    printf("O seu email e:%s \n", z[i].email);
            printf(" Seu nome e:%s \n",z[i].nome);
            printf("O nome do seu personagem e:%s \n",z[i].nomepersonagem);
            printf("A arma escolhida para ele e:%s \n",z[i].arma);
            printf("A cidade natal do seu personagem e:%s \n\n",z[i].cidadepersonagem);
            return;
			  }
			
	  }
	  printf("!!!!NOME INVALIDO!!!!\n");	    
			
}
//esta funcao serve para apagar o registro do personagem o deslocando para esquerda//
int apagar2(Cadastrofps y[999],int nfps){
	int r;
	printf("!!!!APAGAR PERSONAGEM!!!!\n");
	printf("Digite o numero do personagem que deseja apagar: ");
	scanf("%d", &r);
	r=r-1;
	if(r >= nfps){
		printf("Digite um numero valido.\n");
		return 0;
	}
	for(int i = r; i < nfps; i++){
		y[i]=y[i+1];
		
	}
	printf("Personagem apagado\n");
	  return 1;
}
//esta funcao serve para apagar o registro do personagem o deslocando para esquerda//
int apagar3(Cadastromoba z[999],int nmoba){
	int r;
	printf("!!!!APAGAR PERSONAGEM!!!!\n");
	printf("Digite o numero do personagem que deseja apagar: ");
	scanf("%d", &r);
	r=r-1;
	if(r >= nmoba){
		printf("Digite um numero valido.\n");
		return 0;
	}
	for(int i = r; i < nmoba; i++){
		z[i]=z[i+1];
		
	}
	printf("Personagem apagado\n");
	  return 1;
}
//esta funcao serve para apagar o registro do personagem o deslocando para esquerda//
int apagar1(Cadastrorpg x[999],int nrpg){
	int g;
	printf("!!!!APAGAR PERSONAGEM!!!!\n");
	printf("Digite o numero do personagem que deseja apagar: ");
	scanf("%d", &g);
	g=g-1;
	if(g >= nrpg){
		printf("Digite um numero valido.\n");
		return 0;
	}
	for(int i = g; i < nrpg; i++){
		x[i]=x[i+1];
		
	}
	printf("Personagem apagado\n");
	  return 1;
}
int main(){
	Cadastromoba z[999];
	Cadastrofps y[999];
	Cadastrorpg x[999];
	int n,n2,n3,n4, i=0, j=0, p=0;
	

  do{
    printf("\nEscolha um dos modos de jogo abaixo\n");
    printf("1 - RPG\n");
    printf("2 - FPS\n");
    printf("3 - MOBA\n");
    printf("0 - Sair\n");
    scanf("%d", &n);
    system("cls");

    switch(n){
      case 1:
        do{
        	
          printf("1 - CADASTRAR PERSONAGEM\n");
          printf("2 - VISUALIZAR PERSONAGENS CADASTRADOS\n");
          printf("3 - DESEJA APAGAR ALGUM PERSONAGEM?\n");
          printf("0 - Voltar\n");
          scanf("%d", &n2);
          system("cls");
          switch(n2){
            case 1:
        printf("!!!!CADASTRO DO PERSONAGEM!!!!\n");    
        printf("Qual e seu email? ");
			  fflush(stdin);
			  gets(x[i].email);
				printf("Qual seu nome?: ");
				fflush(stdin);
				gets(x[i].nome);
				printf("Qual sera o nome do seu personagem?");
				fflush(stdin);
				gets(x[i].nomepersonagem);
				fflush(stdin);
				printf("Qual arma ele usa? ");
				fflush(stdin);
				gets(x[i].arma);
				fflush(stdin);
				printf("Digite agora uma cidade natal para ele:");
				fflush(stdin);
				gets(x[i].cidadepersonagem);
				printf("Numero do personagem e:%d   \n\n", i+1);
				i++;	
                break;
            case 2:
             	vizu1(x,i);
              break;
            case 3:
			   if(apagar1(x,i)){
			  	i--;
			  }
			  break;
            case 0:
              n2 = 0;
              break;
            default:
            printf("DIGITE UMA OPCAO VALIDA\n");
          }
        }
        while(n2);
        break;
      case 2:
        do{
          printf("1 - CADASTRAR PERSONAGEM\n");
          printf("2 - VISUALIZAR PERSONAGEM\n");
          printf("3 - DESEJA APAGAR ALGUM PERSONAGEM?\n");
          printf("0 - Voltar\n");

          scanf("%d", &n3);
          system("cls");

          switch(n3){
            case 1:
              printf("!!!!CADASTRO DO PERSONAGEM!!!!\n");    
              printf("Qual e seu email? ");
              fflush(stdin);
              gets(y[j].email);
			        printf("Qual seu nome?: ");
			        fflush(stdin);
              gets(y[j].nome);
              printf("Qual sera o nome do seu personagem?");
              fflush(stdin);
              gets(y[j].nomepersonagem);
              fflush(stdin);
              printf("Qual arma ele usa? ");
              fflush(stdin);
              gets(y[j].arma);
              fflush(stdin);
              printf("Digite agora uma cidade natal para ele:");
              fflush(stdin);
              gets(y[j].cidadepersonagem);
              printf("Numero do personagem e:%d   \n\n", j+1);
              j++;
              break;
            case 2:
            	vizu2(y, j);
              break;
              case 3:
              	if(apagar2(y,j)){
			  	j--;
			  }
			  break;
            case 0:
              n3 = 0;
              break;
            default:
            printf("DIGITE UMA OPCAO VALIDA\n");
          }
        }
        while(n3);
        break;
     case 3:
        do{
          printf("1 - CADASTRAR PERSONAGEM\n");
          printf("2 - VISUALIZAR PERSONAGEM\n");
          printf("3 - DESEJA APAGAR ALGUM PERSONAGEM?\n");
          printf("0 - Voltar\n");
          scanf("%d", &n4);
          system("cls ");

          switch(n4){
            case 1:
              printf("!!!!CADASTRO DO PERSONAGEM!!!!\n");    
              printf("Qual e seu email? ");
              fflush(stdin);
              gets(z[p].email);
			        printf("Qual seu nome?: ");
			        fflush(stdin);
              gets(z[p].nome);
              printf("Qual sera o nome do seu personagem?");
              fflush(stdin);
              gets(z[p].nomepersonagem);
              fflush(stdin);
              printf("Qual arma ele usa? ");
              fflush(stdin);
              gets(z[p].arma);
              fflush(stdin);
              printf("Digite agora uma cidade natal para ele:");
              fflush(stdin);
              gets(z[p].cidadepersonagem);
              printf("Numero do personagem e:%d   \n\n", p+1);
              p++;
              break;
            case 2:
              vizu3(z,p);
              break;
              case 3:
              	if(apagar3(z,p)){
			  	p--;
			  }
			  break;
            case 0:
              n4 = 0;
              break;
            default:
            printf("DIGITE UMA OPCAO VALIDA\n");
          }
        }
        while(n4);
        
    }
  } while(n);
  return 0;
}

