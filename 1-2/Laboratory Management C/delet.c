#include "headerfiles.c"

int delet()
{
    printf("\n ********** DELETE **********\n");
    FILE *p;
    int n,i,x,j=0,k;
    char demo[10];
    printf("\nWhat do you want to delet?\n 1.Computer\n 2.Chair \n 3.Desk\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Whice number of computer you want to delete: ");
        scanf("%d",&x);
        gets(demo);
        printf("DO you really want to delete the computer:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
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
            while(x<j)
            {
                strcpy(c[x-1].condi,c[x].condi);
                strcpy(c[x-1].date,c[x].date);
                strcpy(c[x-1].suppliar,c[x].suppliar);
                strcpy(c[x-1].warranty,c[x].warranty);
                x++;
            }

            p=fopen("Computer.txt","w");
            for(k=0;k<j-1;k++)
            {
                fputs(c[k].condi,p);
                fputs(c[k].date,p);
                fputs(c[k].suppliar,p);
                fputs(c[k].warranty,p);
                 fprintf(p,"\n");
            }
        }
        fclose(p);
        break;
        case 2:
        printf("Whice number of chair you want to delete: ");
        scanf("%d",&x);
        gets(demo);
        printf("DO you really want to delete the chair:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("Chair.txt","r");
            while(!feof(p))
            {
                fgets(ch[j].date,20,p);
                fgets(ch[j].suppliar,50,p);
                fgets(demo,10,p);
                j=j+1;
            }
            fclose(p);
            while(x<j)
            {
                strcpy(ch[x-1].date,ch[x].date);
                strcpy(ch[x-1].suppliar,ch[x].suppliar);
                x++;
            }

            p=fopen("Chair.txt","w");
            for(k=0;k<j-1;k++)
            {
                fputs(ch[k].date,p);
                fputs(ch[k].suppliar,p);
                 fprintf(p,"\n");
            }
        }
        fclose(p);
        break;
        case 3:
        printf("Whice number of desk you want to delete: ");
        scanf("%d",&x);
        gets(demo);
        printf("DO you really want to delete the desk:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("desk.txt","r");
            while(!feof(p))
            {
                fgets(d[j].date,20,p);
                fgets(d[j].suppliar,50,p);
                fgets(demo,10,p);
                j=j+1;
            }
            fclose(p);
            while(x<j)
            {
                strcpy(d[x-1].date,d[x].date);
                strcpy(d[x-1].suppliar,d[x].suppliar);
                x++;
            }

            p=fopen("desk.txt","w");
            for(k=0;k<j-1;k++)
            {
                fputs(d[k].date,p);
                fputs(d[k].suppliar,p);
                 fprintf(p,"\n");
            }
        }
        fclose(p);
        break;
        default:
        printf("Your entry is not correct\n");
    }
    fclose(p);
    printf("\nDelete Successful\n");
    printf("\nDo you want to delete again??\n 1.YES \n 2.NO\n");
    scanf("%d",&i);
    if(i==1)
    {
        delet();
    }
}
