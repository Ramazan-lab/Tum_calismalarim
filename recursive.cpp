#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void kisayol(int ,int);



int labirent[8][6]={{1,0,0,0,0,0},
					{1,1,0,0,0,0},
					{1,1,1,0,0,0},
					{1,0,1,0,0,0},
					{1,0,1,0,0,0},
					{1,0,1,0,0,0},
					{1,0,1,0,0,0},
					{1,0,1,1,1,1}};	
					
	int yol[8][6]={0};
	
	int main(){

	/*	///////////////////////////////////////////////////////////
	j=0,i=0
		int k=0,l=0,m=0,n=0;
	
	
	for(m=0;m<8;m++){
		
		for(n=0;n<6;n++){
			
			
		    labirent [m][n]=rand()%2;
		    
		}
	
	}
		
		while(k<8)
		{
			while(l<6){
				printf("%d\t",labirent[k][l]);
				l++;
				
			}

			l=0;
			printf("\n");
						
			k++;
			
		}
		printf("%d",labirent[0][5]);
	     buraya kadar labirent olusturduk ////////////////////////////////////
	*/
	int j=0,i=0;
		while(j<8)
		{
			while(i<6){
				printf("%d\t",labirent[j][i]);
				i++;
				
			}

			i=0;
			printf("\n");
						
			j++;
			
		}
		labirent[0][0]=1;
		kisayol(0,0);
	
/* buray kadar labirenti ekrana yazdýrdýk*/
	
	return 0;			
	}
	
void kisayol(int x,int y)
{
	yol[x][y]=1;
	printf("koordinatlar %d,%d\n ",x,y);
	if(y>0 && labirent[x][y-1]==1 && yol[x][y-1]==0)
	kisayol(x,y-1);
	if(x>0 && labirent[x-1][y]==1 && yol[x-1][y]==0)
	kisayol(x-1,y);
	if(y<6 && labirent[x][y+1]==1 && yol[x][y+1]==0)
	kisayol(x,y+1);
	if(x<8 && labirent[x+1][y]==1 && yol[x+1][y]==0)
	kisayol(x+1,y);
	
}

		

