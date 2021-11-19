#include <stdio.h>
#include <stdlib.h>


int main(){

	int i,j;

//=======================================================================
//entree dynamique de nombre de presidents
printf("\n================DATA ENTRY=================\n");
		int nombrePresident;
	do {
	
	    printf("\nenter your number of presidents : ");
	    scanf("%d",&nombrePresident);
	}
	 while(nombrePresident<5);
//entree de noms de presidents
	char arrayPres[nombrePresident][100];
	char arrayPres2[nombrePresident][100];
	
	
	for(i=0;i<nombrePresident;i++){
	    printf("enter president name #%d : ",i+1);
	    scanf("%s",&arrayPres[i]);
	}

//=======================================================================
//entree dynamique de nombre de electeurs
            
        int nombreElecteur;
    do {

        printf("\nenter your number of electors : ");
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

	system("cls");

	printf("\n\n============THOSE ARE THE CANDIDATS=============\n");
     for (i=0;i<nombrePresident;i++){
        printf("\n\tPress %d to vote on candidat %s .",i+1,arrayPres[i]);
        }
    printf("\n\n");
//=======================================================================
//entree de votes

	int vote;
	int arrayVotes[nombreElecteur];
	int voteIncrem;
  
  printf("\n\n================!! ELECTIONS !!=================\n\n\n");
  
     for( j=0;j<nombreElecteur;j++){
     	printf("Please elector named %s choose your candidat : ",arrayElec[j]);
    	scanf("%d",&vote);
    	arrayVotes[j]=vote;
     }
     
    system("cls");
	printf("\n\n\n");
//compter les votes
	printf("===========CANDIDATS/VOTES===========:");
    int  arrayVotesCounter[nombrePresident];
    
     for( i=0;i<nombrePresident;i++){
        voteIncrem=0;
        for( j=0;j<nombreElecteur;j++){
        if(i+1== arrayVotes[j]){

         voteIncrem++;
    	}

        }       
        arrayVotesCounter[i]=voteIncrem;
//affichage de chaque president et ses votes
        printf("\nThe candidat with number %d has %d vote(s)",i+1,arrayVotesCounter[i]);

     }

//=======================================================================
//TOUR 1
    int nombreGagnant=0;
    int x=0;
    printf("\n\n");
     float arrayPercentage[nombrePresident];

       for (i=0;i<nombrePresident;i++){

            arrayPercentage[i]=arrayVotesCounter[i]*100/nombreElecteur;

            if (arrayPercentage[i]<15) {
            printf("\n  the candidat %s (%d) : is excluded.",arrayPres[i],i+1);
            }
            else if (arrayPercentage[i]>=15)
            {
                for (int strin=0;strin<100;strin++)
                    arrayPres2[i][strin] = arrayPres[i][strin];
                    nombreGagnant++;
        }

            else if (arrayPercentage[i]==arrayPercentage[i+1]) 
            x++;
            
            else if(arrayVotesCounter[i]==nombreElecteur){
            	
            printf("\n the candidat %s :%d is the winner in this election.",arrayPres[i],i+1);
            
            return 0 ; // temporaire
        }


       }
       
      
       getch(); //test

        
        while (x==nombrePresident-1);
 		
 		system("cls");
        printf("\n\n====THOSE ARE THE CANDIDATS FOR THE SECOND ELECTION===\n");
        for (i=0;i<nombreGagnant;i++){
        printf("\n\t to vote on candidat %s  press : %d  ",arrayPres[i],i+1);
        }
        
//=======================================================================
//TOUR 2
	
	    
       
	} 
