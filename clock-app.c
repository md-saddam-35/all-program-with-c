
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<graphics.h>



void main()
{

    int h, m, s,p;
    
    printf("plese Enter time  :");
    scanf("%d%d%d",&h,&m,&s);
     
    printf("plese Enter AM:and PM:\n1.am\n2.pm :");
    scanf("%d",&p);
    
while(1){
    for (h; h < 24; h++)
    { 

        for (m; m < 60; m++)
        {

            for (s; s < 60; s++)
            { 
                printf("\n\n\n\n\t\t\t\t\t\t\tHH:MM:SS\n");
                //texcolor(GREEN);
                printf("\t\t\t\t\t\t\t%02d:%02d:%02d", h, m, s);
                switch (p)
                {
                case 1:
                 if (h<12||h>12)
                printf(" am");
                else 
                printf(" pm");
                  break; 
                case 2:
            
                 if (h>12||h<12)
                printf(" pm");
                else 
                 printf(" am");
               
                  break; 

                }

                for (double i = 1; i <39100000; i++)
                {i++;
                i--;
                }
                system("cls");

                
            }
            s = 0;
        }
        m = 0;
        
    }  
    h=0;
    }
    getch();
}