#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int choice,i,j,k;
    printf(":for first pattern press 1:\n");
    printf(":for second pattern press 2:\n");
    printf(":for third pattern press 3:\n");
    printf(":for fourth pattern press 4:\n");
    printf(":for random pattern press 5:\n");


    printf("\n: enter your choice :\n");
    scanf("%d",&choice);
    if(choice==1||choice==2||choice==3||choice==4)
{
    switch(choice)
    {
        case 1:
            
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<5-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
break;
    case 2:
     for(k=0;k<3;k++)
    {
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    }
    break;
    case 3:
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0||j==0||i==5-1||j==5-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    break;
    case 4:
    for(i=0;i<5;i++)
    {
       
        {
        for(j=i;j<5;j++)
        {
            printf("  ");
        }
        }
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("  ");
        }
        for(j=i;j<5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    break;
    }
}
else{
    srand(time(NULL));
    int random=rand()%5 +1;
        switch(random)
    {
        case 1:
            
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<5-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
break;
    case 2:
     for(k=0;k<3;k++)
    {
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    }
    break;
    case 3:
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0||j==0||i==5-1||j==5-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    break;
    case 4:
    for(i=0;i<5;i++)
    {
       
        {
        for(j=i;j<5;j++)
        {
            printf("  ");
        }
        }
        for(j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("  ");
        }
        for(j=i;j<5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    break;
    }
    }
}

