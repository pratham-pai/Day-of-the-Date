//Created by Pratham Pai on 18,October,2019
//Program to calculate the day of any given date, month and year
#include<stdio.h>
main()
{
    int date,year,month,nod=0,a,b,c,d,e;
    char k,yes,no;
    /*d is 1 year for leap*/
    /*d is 0 year for normal*/
    printf("Enter the date, month and year in numbers respectively\n");
    scanf("%d%d%d",&date,&month,&year);

    if((date>0)&&(month>0)&&(month<=12)&&(year>=0))
    {
          if((year%400==0)||((year%400!=0)&&(year%4==0)))
          {
          d=1;
          if((month>2)&&(d==1))
            nod=nod+1;
          }
        while(year>=399)
            year=year-400;

        if((year<400)&&(year>=300))
        {
            year=year-300;
            nod=nod+1;
        }
        else if((year<300)&&(year>=200))
        {
            year=year-200;
            nod=nod+3;
        }
        else if((year<200)&&(year>=100))
        {
            year=year-100;
            nod=nod+5;
        }

        year=year-1;
        a=year/4;
        b=year-a;
        c=a*2;
        nod=nod+b+c;

        if((month==2)||(month==3))
            nod=nod+3;
        else if(month==4)
            nod=nod+6;
        else if(month==5)
            nod=nod+1;
        else if(month==6)
            nod=nod+4;
        else if(month==7)
            nod=nod+6;
        else if(month==8)
            nod=nod+2;
        else if(month==9)
            nod=nod+5;
        else if(month==11)
            nod=nod+3;
        else if(month==12)
            nod=nod+5;

        if(date>=7)
            nod=nod+(date%7);
        else
            nod=nod+date;
        if(nod>=7)
            e=nod%7;
        else
            e=nod;

        printf("The day on this given date is.....\n");
        if(e==0)
            printf("SUNDAY");
        else if(e==1)
            printf("MONDAY");
        else if(e==2)
            printf("TUESDAY");
        else if(e==3)
            printf("WEDNESDAY");
        else if(e==4)
            printf("THURSDAY");
        else if(e==5)
            printf("FRIDAY");
        else if(e==6)
            printf("SATURDAY");

        printf("\n\nTry one more\n\n");
        main();
    }
    else
    {
        printf("\nError\nInvalid date entered\nTry again\n\n");
        main();
    }
}
//end of program
