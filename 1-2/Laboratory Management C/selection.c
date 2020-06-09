#include "headerfiles.c"
int ac=2,light=8,fan=7,i;
void selection()
{
    int x,p;
    p=1;
    printf("Welcome to the laboratory\n");
    while(p==1)
    {
       // printf(" ********** BEGINING *********\n");
        printf("\nEnter your choice\n1.Number\n2.Insert\n3.Update\n4.Delete\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            number();
            break;
            case 2:
            insert();
            break;
            case 3:
            update();
            break;
            case 4:
            delet();
            break;
            default:
            printf("Your Entry is not correct\n");
        }

    }
}
