#include<stdio.h>
#include<windows.h>
char grid[3][3];

int checker(){
	
	
	
	if(grid[1][1]=='X'&&grid[1][2]=='X'&&grid[1][3]=='X'){
		printf("Player One Win"); return 1;
	}
	else if(grid[2][1]=='X'&&grid[2][2]=='X'&&grid[2][3]=='X'){
		printf("Player One Win");return 1;	
	}
	else if(grid[3][1]=='X'&&grid[3][2]=='X'&&grid[3][3]=='X'){
		printf("Player One Win");return 1;
	}
	else if(grid[1][1]=='X'&&grid[2][1]=='X'&&grid[3][1]=='X'){
		printf("Player One Win");return 1;
	}
	else if(grid[1][2]=='X'&&grid[2][2]=='X'&&grid[3][2]=='X'){
		printf("Player One Win");return 1;
	}
	else if(grid[1][3]=='X'&&grid[2][3]=='X'&&grid[3][3]=='X'){
		printf("Player One Win");return 1;
	}
	else if(grid[1][1]=='X'&&grid[2][2]=='X'&&grid[3][3]=='X'){
		printf("Player One Win");return 1;
	}
	else if(grid[1][3]=='X'&&grid[2][2]=='X'&&grid[3][1]=='X'){
		printf("Player One Win");return 1;
	}
	
	else if(grid[1][1]=='O'&&grid[1][2]=='O'&&grid[1][3]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[2][1]=='O'&&grid[2][2]=='O'&&grid[2][3]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[3][1]=='O'&&grid[3][2]=='O'&&grid[3][3]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[1][1]=='O'&&grid[2][1]=='O'&&grid[3][1]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[1][2]=='O'&&grid[2][2]=='O'&&grid[3][2]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[1][3]=='O'&&grid[2][3]=='O'&&grid[3][3]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[1][1]=='O'&&grid[2][2]=='O'&&grid[3][3]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[1][3]=='O'&&grid[2][2]=='O'&&grid[3][1]=='O'){
		printf("Player Two Win");return 1;
	}
	else if(grid[1][1]!=' '&&grid[1][2]!=' '&&grid[1][3]!=' '&&grid[2][1]!=' '&&grid[2][2]!=' '&&grid[2][3]!=' '&&grid[3][1]!=' '&&grid[3][2]!=' '&&grid[3][3]!=' '){
		printf("DRAW");return 1;
	}
	
}


int play(){

	int row,col;
	int check=0;
	for(int x=1;x<=3;x++){
		for(int y=1;y<=3;y++){
			grid[x][y]=' ';
			printf("%d,%d [%c] ",x,y,grid[x][y]);
		}
		printf("\n");
	}
	for(int i=1;i<=1000;i++){
		printf("Player One (X) turn\n");
		printf("enter row: ");
		scanf("%d",&row);
		printf("enter coloumn: ");
		scanf("%d",&col);
		if(grid[row][col]!=' '||row!=1&&row!=2&&row!=3||col!=1&&col!=2&&col!=3){
				
				while(grid[row][col]!=' '||row!=1&&row!=2&&row!=3||col!=1&&col!=2&&col!=3){
					system("cls");
					for(int x=1;x<=3;x++){
					for(int y=1;y<=3;y++){
						
						printf("%d,%d [%c] ",x,y,grid[x][y]);
					}
					printf("\n");
				}
					printf("select another coordinate!\n");
					printf("Player One (X) turn\n");
					printf("enter row: ");
					scanf("%d",&row);
					printf("enter coloumn: ");
					scanf("%d",&col);
					
				}
			}
			
				grid[row][col]='X';
				system("cls");
				
				for(int x=1;x<=3;x++){
					for(int y=1;y<=3;y++){
						printf("%d,%d [%c] ",x,y,grid[x][y]);
					}
					putchar('\n');
				}
				
			
			check=checker();
			if(check==1){
				break;
		
			}
			
			printf("Player Two (O) turn\n");
			printf("enter row: ");
			scanf("%d",&row);
			printf("enter coloumn: ");
			scanf("%d",&col);
			if(grid[row][col]!=' '||row!=1&&row!=2&&row!=3||col!=1&&col!=2&&col!=3){
				
				while(grid[row][col]!=' '||row!=1&&row!=2&&row!=3||col!=1&&col!=2&&col!=3){
					system("cls");
					for(int x=1;x<=3;x++){
						for(int y=1;y<=3;y++){
							printf("%d,%d [%c] ",x,y,grid[x][y]);
						}
						putchar('\n');
					}
					printf("select another coordinate!\n");
					printf("Player Two (O) turn\n");
					printf("enter row: ");
					scanf("%d",&row);
					printf("enter coloumn: ");
					scanf("%d",&col);	
				}
			}
			
				grid[row][col]='O';
				system("cls");
				
				for(int x=1;x<=3;x++){
					for(int y=1;y<=3;y++){
						printf("%d,%d [%c] ",x,y,grid[x][y]);
					}
					putchar('\n');
				}
				
			
			check=checker();
			if(check==1){
				break;
		
			}
			
		}

	}
	
int main(){
	char letsplay[1000];
	printf("WELCOME TO THE TIC TAC TOE GAME!\n");
	printf("Press enter button to play!");
	scanf("%[^\n]",&letsplay);
	fflush(stdin);
	system("cls");
	play();
	
}


