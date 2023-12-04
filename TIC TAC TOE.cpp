#include<stdio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int main()
{
int i,p,j,n=11;
int player=1;
for(p=1;p<=10;p++)
{
	system("cls");
     printf(" Tic Tac Toe \n");
     int k=0;
for( i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j==4 || j==8 || i==4 || i==8)
printf("~ ");
       else if(j%2==0 && i%2==0)
{
printf("%c ",a[k]);
       k++;
}
else
printf("  ");

}
printf("\n");
}
if(a[0]==a[1] && a[1]==a[2])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[3]==a[4] && a[4]==a[5])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[6]==a[7] && a[7]==a[8])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[0]==a[3] && a[3]==a[6])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[1]==a[4] && a[4]==a[7])
{
if(player==2)
 
  {
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[2]==a[5] && a[5]==a[8])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[0]==a[4] && a[4]==a[8])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     else if(a[2]==a[4] && a[4]==a[6])
{
if(player==2)
{
printf("Player 1 Wins");
break;
   }
else
{
printf("Player 2 Wins");
break;
   }
     }
     if(p==10)
     {
      printf("Draw");
      break;
}
int pos;
if(player==1)
{
printf("First player:");
scanf("%d",&pos);
if(a[pos-1]=='x'||a[pos-1]=='0')
{
printf("Wrong move");
p--;
}
else
{
a[pos-1]='x';
player++;
   }
}
else if(player==2)
{
printf("Second player:");
scanf("%d",&pos);
if(a[pos-1]=='x'||a[pos-1]=='0')
{
printf("Wrong move");
p--;
}
else
{
a[pos-1]='0';
player--;
   }
}
printf("\n\n\n");
}
}
