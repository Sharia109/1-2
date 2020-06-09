#include "headerfiles.c"
void update()

{
    printf("\n********** UPDATE **********\n");
    FILE *p;
    int n,i,x,j=0,k;
    char con[10],date[20],supl[50],warr[20],demo[10];
    printf("\nWhat do you want to update??\n 1.Computer\n 2.AC \n 3.Fan\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Whice number of computer you want to update: ");
        scanf("%d",&x);
        gets(demo);
        printf("Enter the current condition of the computer: ");
        gets(con);
        printf("Enter the date of the buying computer: ");
        gets(date);
        printf("Enter the warrenty: ");
        gets(warr);
        printf("DO you really want to update the computer:\n1.YES\n2.NO\n");
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
            strcpy(c[x-1].condi,con);
            strcat(c[x-1].condi,"\n");
            strcpy(c[x-1].date,date);
            strcat(c[x-1].date,"\n");
            strcpy(c[x-1].warranty,warr);
            strcat(c[x-1].warranty,"\n");
            p=fopen("Computer.txt","w");
            for(k=0;k<j;k++)
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
        printf("Whice number of AC you want to update: ");
        scanf("%d",&x);
        printf("Enter the current condition of the AC: ");
        scanf("%s",con);
        gets(demo);
        printf("Enter the date of the baying AC: ");
        gets(date);
        printf("Enter the warrenty: ");
        gets(warr);
        printf("DO you really want to update the AC:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("AC.txt","r");
            while(!feof(p))
            {
                fgets(a[j].condi,10,p);
                fgets(a[j].date,20,p);
                fgets(a[j].suppliar,50,p);
                fgets(a[j].warranty,20,p);
                fgets(demo,10,p);
                 j++;
            }
            fclose(p);
            strcpy(a[x-1].condi,con);
            strcpy(a[x-1].date,date);
            strcpy(a[x-1].warranty,warr);
            strcat(a[x-1].condi,"\n");
            strcat(a[x-1].date,"\n");
            strcat(a[x-1].warranty,"\n");
            p=fopen("AC.txt","w");
            for(k=0;k<j;k++)
            {
                fputs(a[k].condi,p);
                fputs(a[k].date,p);
                fputs(a[k].suppliar,p);
                fputs(a[k].warranty,p);
                fprintf(p,"\n");
            }

        }
        fclose(p);
        break;
        case 3:
        printf("Whice number of fan you want to update: ");
        scanf("%d",&x);
        printf("Enter the current condition of the fan: ");
        scanf("%s",con);
        gets(demo);
        printf("Enter the date of the baying fan: ");
        gets(date);
        printf("Enter the warrenty: ");
        gets(warr);
        printf("DO you really want to update the fan:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("Fan.txt","r");
            while(!feof(p))
            {
                fgets(f[j].condi,10,p);
                fgets(f[j].date,20,p);
                fgets(f[j].suppliar,50,p);
                fgets(f[j].warranty,20,p);
                fgets(demo,10,p);
                 j++;
            }
            fclose(p);
            strcpy(f[x-1].condi,con);
            strcpy(f[x-1].date,date);
            strcpy(f[x-1].warranty,warr);
            strcat(f[x-1].condi,"\n");
            strcat(f[x-1].date,"\n");
            strcat(f[x-1].warranty,"\n");
            p=fopen("Fan.txt","w");
            for(k=0;k<j;k++)
            {
                fputs(f[k].condi,p);
                fputs(f[k].date,p);
                fputs(f[k].suppliar,p);
                fputs(f[k].warranty,p);
                fprintf(p,"\n");
            }
        }
        fclose(p);

        break;
        default:
        printf("Your entry is not correct\n");
    }
    fclose(p);
    printf("\nDo you want to update again??\n 1.YES \n 2.NO\n");
    scanf("%d",&i);
    if(i==1)
    {
        update();
    }
}
