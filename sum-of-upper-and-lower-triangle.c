#include<stdio.h>
#include<conio.h>
int main(){

int n[3][3],i,j,uppersum=0,lowersum=0,row,col;

printf("Enter rows and colums matrix = : ");
scanf("%d%d",&row,&col);

printf("Enter matrix = : ");
  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < col; j++)
      { printf("[%d][%d] = ",i,j);
        scanf("%d",&n[i][j]);
      }
  }
      printf("\n");
  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < col; j++)
      {
          printf("%d ",n[i][j]);
      }
      printf("\n");
  }
  
  
   //printf("sum of upper and lower elements = "); 

  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < col; j++)
      {
        if (i<j)
        {  
            uppersum=uppersum + n[i][j];
        }
        if (i>j)
        {
             lowersum=lowersum + n[i][j];
        }
        
      }
             
  }
      printf("upper sum of triangle elements = %d\n",uppersum);     
      printf("lower sum of triangle elements = %d",lowersum);     
  
  
  
  
    getch();
}
