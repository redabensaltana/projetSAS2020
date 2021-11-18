#include <stdio.h>
#include <stdlib.h>


int main(){

	int i,j;
//=======================================================================
//entree dynamique de nombre de presidents

		int nombrePresident;
	do {
	
	    printf("\tenter your number of presidents : ");
	    scanf("%d",&nombrePresident);
	}
	 while(nombrePresident<5);

//entree de noms de presidents

	char arrayPres[nombrePresident][100];
	
	
	for(i=0;i<nombrePresident;i++){
	    printf("\tenter president name #%d : ",i+1);
	    scanf("%s",&arrayPres[i]);
	}

//=======================================================================
//entree dynamique de nombre de electeurs
            
        int nombreElecteur;
    do {

        printf("\n\nenter your number of electors : ");
        scanf("%d",&nombreElecteur);
    }
     while(nombreElecteur<10);

//entree de noms de presidents
    char arrayElec[nombreElecteur][100];


    for(i=0;i<nombreElecteur;i++){
        printf("enter elector name #%d : ",i+1);
        scanf("%s",&arrayElec[i]);
    }
    
//=======================================================================
////afficher les presidents

//printf("\n\nPresidents names :");
//     for (i=0;i<nombrePresident;i++){
//        printf("%s\n",arrayPres[i]);
//     }    
//
////afficher les electeurs
//     printf("Electors names :");
//     for (i=0;i<nombreElecteur;i++){
//        printf("%s\n",arrayElec[i]);
//     }     

//=======================================================================
//afficher les presidents avec numero

	printf("\n\n\t Those are the candidats :\n");
     for (i=0;i<nombrePresident;i++){
        printf("\n\tPress %d to vote on candidat %s .",i+1,arrayPres[i]);
        }
    printf("\n\n");
//=======================================================================
//entree de votes

	int vote;
	int arrayVotes[nombreElecteur];
	int voteIncrem;
  
     for(int j=0;j<nombreElecteur;j++){
     	printf("\n Please elector named %s choose your candidat : ",arrayElec[j]);
    	scanf("%d",&vote);
    	arrayVotes[j]=vote;
     }
     
	printf("\n\n\n");
//compter les votes
	printf("\tCANDIDATS/VOTES :");
    int  arrayVotesCounter[nombrePresident];
    
     for(int i=0;i<nombrePresident;i++){
        voteIncrem=0;
        for(int j=0;j<nombreElecteur;j++){
        if(i+1== arrayVotes[j]){

         voteIncrem++;
    	}

        }       
        arrayVotesCounter[i]=voteIncrem;
//affichage de chaque president et ses votes
        printf("\nThe candidat with number %d has %d vote(s)",i+1,arrayVotesCounter[i]);

     }
        
}
