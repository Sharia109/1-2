#include "headerfiles.c"
void number()
{
    printf("\n ********** NUMBER **********\n");
        FILE *p;
    int n,i,x,j=0,k,demo[10];
    printf("\nWhich number do you want?\n 1.Computer\n 2.Desk \n 3.Chair\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        p=fopen("Computer.txt","r");
        while(!feof(p))
        {
            fgets(c[j].condi,10,p);
            fgets(c[j].date,20,p);
            fgets(c[j].suppliar,50,p);
            fgets(c[j].warranty,20,p);
            fgets(demo,10,p);
            j=j+1;
        }
        fclose(p);
        printf("The number of Computer is: %d\n ",j);
        break;
        case 2:
        p=fopen("Desk.txt","r");
        while(!feof(p))
        {
                fgets(d[j].date,20,p);
                fgets(d[j].suppliar,50,p);
                fgets(demo,10,p);
                j=j+1;
        }
        fclose(p);
        printf("The number of Desk is: %d\n ",j);
        break;
        case 3:
        p=fopen("Chair.txt","r");
        while(!feof(p))
        {
            fgets(ch[j].date,20,p);
            fgets(ch[j].suppliar,50,p);
            fgets(demo,10,p);
            j=j+1;
        }
        fclose(p);
        printf("The number of Chair is: %d\n ",j);
        break;
        default:
        printf("Your entry is not correct\n");
    }
}

