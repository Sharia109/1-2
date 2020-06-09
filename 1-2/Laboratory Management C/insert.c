#include "headerfiles.c"
void insert()
{
    printf("\n ********** INSERT ***********\n");
    FILE *p;
    char *q,*r,km;
    int n,i;
    char con[10],date[20],supl[50],warr[20],demo[10];
    printf("\nWhat do you want to insert??\n 1.Computer\n 2.Chair \n 3.Desk\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter the current condition of the computer: ");
        scanf("%s",con);
        gets(demo);

        q=(char *)malloc(sizeof(con));

        strcpy(q,con);
        printf("Enter the date of the baying computer: ");
        gets(date);
        printf("Enter the name of the suppliar: ");
        gets(supl);
        printf("Enter the warrenty: ");
        gets(warr);
        printf("\nDO you really want to insert the computer:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("Computer.txt","a");
            while(*q!='\0')
            {
                fprintf(p,"%c",*q);
                q=q+1;
            }
            fprintf(p,"\n");
            fputs(date,p);
            fprintf(p,"\n");
            fputs(supl,p);
            fprintf(p,"\n");
            fputs(warr,p);
            fprintf(p,"\n");
        }
        free(q);
        break;
        case 2:
        gets(demo);
        printf("Enter the date of the baying Chair: ");
        gets(date);

        r=(char *)calloc(20,sizeof(km));

        r=date;
        printf("Enter the name of the suppliar: ");
        gets(supl);
        printf("\nDO you really want to insert the chair:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("Chair.txt","a");
            while(*r!='\0')
            {
                fprintf(p,"%c",*r);
                r=r+1;
            }
            fprintf(p,"\n");
            fputs(supl,p);
            fprintf(p,"\n");
        }
        free(r);
        break;
        case 3:
        gets(demo);
        printf("Enter the date of the baying desk: ");
        gets(date);
        printf("Enter the name of the suppliar: ");
        gets(supl);
        printf("\nDO you really want to insert the desk:\n1.YES\n2.NO\n");
        scanf("%d",&i);
        if(i==1)
        {
            p=fopen("Desk.txt","a");
            fputs(date,p);
            fprintf(p,"\n");
            fputs(supl,p);
            fprintf(p,"\n");
        }
        break;
        default:
        printf("Your entry is not correct\n");
    }
    fprintf(p,"\n");
    fclose(p);
    printf("\nDo you want to insert again??\n 1.YES \n 2.NO\n");
    scanf("%d",&i);
    if(i==1)
    {
        insert();
    }
}
