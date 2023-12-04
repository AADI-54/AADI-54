#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int height=20,width=20,x,y,fx,fy,flag,end,score,a;
int tx[100],ty[100];
int p=0;
void draw();
void setup();
void ctrl();
void move();
int main(){
	setup();
	while(end==0){
	sleep(8.5/9);
	ctrl();
	draw();
	move();
	}
}
void draw()
{
	sleep(8.5/9);
	system("cls");												// CLEAR SCREEM FUNCTION
	int i,j,k,c;
	for(i=0;i<height;i++){
	for(j=0;j<width;j++){
		if(i==0||i==height-1)									//BOUNDARY	
			printf("-");
		else if(j==0||j==width-1)
			printf("|");
		else{
			if(i==x&&j==y){										//HEAD OF SNAKE
				printf("@");
			}
			else if(i==fx&&j==fy){								// FRUIT
				printf("$");
			}
			else{
				c=0;
			for(k=0;k<=p;k++){
				if(i==tx[k]&&j==ty[k]){
				c=1;
				printf("0");
			}
			}
			if(c==0)
			printf(" ");	
		}
			}}		
	printf("\n");	}	
	printf("SCORE : %d",score);
}
void setup(){
	x = height / 2;										// POSITION OF SNAKE IN CENTER
	y = width / 2;
	
	label1:												// X POSITION OF FRUIT
	fx = rand()%18;
	if(fx==0)
	goto label1;
	
	label2:												// Y POSITION OF FRUIT	
	fy = rand()%18;
	if(fy==0)
	goto label2;
	
	end = 0;
	score = 0;	
	p++;
}
void ctrl(){
	sleep(8.5/9);
	if(kbhit()){							// KBHIT TAKES INPUT FROM KEYBOARD AND ASSIGNS VALUE TO FALG ACCORDING TO SWITCH CASES
		switch(getch()){
			case 'w':{
				flag=1;
				break;
			}
			case 's':{
				flag=2;
				break;
			}
			case 'a':{
				flag=3;
				break;
			}
			case 'd':{
				flag=4;
				break;
			}
			}}
}
void move(){
	sleep(8.5/9);
	int i,prvx,prvy,prv2x,prv2y;
	prvx=tx[0];
	prvy=ty[0];
	tx[0]=x;
	ty[0]=y;
	for(i=1;i<=p;i++){
		prv2x=tx[i];
		prv2y=ty[i];
		tx[i]=prvx;
		ty[i]=prvy;
		prvx=prv2x;
		prvy=prv2y;
	}
	switch(flag){							// FLAG TAKES VALUE FROM MOVE FUNCTION AND MOVES THE HEAD / BODY OF SNAKE
		case 1:{
			x--;
			break;
		}
		case 2:{
			x++;
			break;
		}
		case 3:{
			y--;
			break;
		}
		case 4:{
			y++;
			break;
		}
	}
	if(x==0||x==height||y==0||y==width)
	end = 1;
	if(x==fx&&y==fy){
	label3:												// X POSITION OF FRUIT
	fx = rand()%18;
	if(fx==0)
	goto label3;
	
	label4:												// Y POSITION OF FRUIT	
	fy = rand()%18;
	if(fy==0)
	goto label4; 
	p++;
	score=score+10;	
	}
	}

