#include<stdio.h>
#include<string.h>
int main()
{
    int length=0,num=0,cap=0,sml=0,spec=0,y;
    char a[17];
    printf ("Enter the password :\t");
    scanf ("%s", a);
    length=strlen(a);
    if(length<8)
    {
        printf("\n The password must contains atleast eight characters");
    }
    for(int i=0;a[i];i++)
    {
        if((a[i]>='A' && a[i]<='Z'))
        {
            cap+=cap++;
        }
        if((a[i]>='a' && a[i]<='z'))
        {
            sml+=sml++;
        }
        if((a[i]>='0' && a[i]<='9'))
        {
            num+=num++;
        }
        y=a[i];
        if((y>=33&&y<=47)||(y>=58&&y<=64)||(y>=91&&y<=96)||(y>=123&&y<=126)) 
        {
            spec+=spec++;
        }
    }
    printf("%d %d %d %d ",cap,spec,num,sml);
    if(cap>=1&&sml>=1&&num>=1&&spec>=1)
    {
        printf("\n the password is valid");
    }
    else
    {
        printf("\n the password is invalid");
    }

    return 0;

}