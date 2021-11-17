#include<stdio.h>


int main(){


//entre dynamique de nombre de presidents
	int nombrePresident;
do {

    printf("enter you number of president : ");
    scanf("%d",&nombrePresident);
}
 while(nombrePresident<5);

//entree de noms de presidents
char arrayPres[nombrePresident][100];

int i,j;

for(i=0;i<nombrePresident;i++){
    printf("enter president name #%d : ",i+1);
    scanf("%s",&arrayPres[i]);
}




            //entre dynamique de nombre de electeurs
                int nombreElecteur;
            do {

                printf("enter you number of elector : ");
                scanf("%d",&nombreElecteur);
            }
            while(nombreElecteur<10);

            //entree de noms de presidents
            char arrayElec[nombreElecteur][100];


            for(i=0;i<nombreElecteur;i++){
                printf("enter elector name #%d : ",i+1);
                scanf("%s",&arrayElec[i]);
            }



//afficher les presidents
printf("\n\nPresidents names :");
     for (i=0;i<nombrePresident;i++){
        printf("%s\n",arrayPres[i]);
     }    

//afficher les electeurs
     printf("Electors names :");
     for (i=0;i<nombreElecteur;i++){
        printf("%s\n",arrayElec[i]);
     }     
}
