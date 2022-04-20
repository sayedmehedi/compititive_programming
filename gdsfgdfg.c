#include<stdio.h>

#include<string.h>

int main()

{

    char country[100];
    printf("Enter included country or city:\n");
    gets(country);

    while(strcmp(country,"End")!=0)

    {

        if(strcmp(country,"Canada")==0)

            printf("Ottawa \n");

        else if(strcmp(country,"England")==0)

            printf("London \n");

        else if(strcmp(country,"Bangladesh")==0)

            printf("Dhaka \n");

        else if(strcmp(country,"France")==0)

            printf("Paris \n");

        else if(strcmp(country,"Germany")==0)

            printf("Bonn \n");

        else if(strcmp(country,"India")==0)

            printf("New Delhi \n");

        else if(strcmp(country,"Israel")==0)

            printf("Jerusalem \n");

        else if(strcmp(country,"Italy")==0)

            printf("Rome \n");

        else if(strcmp(country,"Japan")==0)

            printf("Tokyo \n");

        else if(strcmp(country,"Mexico")==0)

            printf("Mexico City \n");

        else if(strcmp(country,"People's Republic of China")==0)

            printf("Beijing \n");

        else if(strcmp(country,"Russia")==0)

            printf("Moscow \n");

        else if(strcmp(country,"United States")==0)

            printf("Washington \n");

        else if(strcmp(country,"Ottawa")==0)
            printf("Canada \n");

        else if(strcmp(country,"Dhaka")==0)

            printf("Bangladesh \n");

        else if(strcmp(country,"London")==0)

            printf("England \n");

        else if(strcmp(country,"Paris")==0)

            printf("France \n");

        else if(strcmp(country,"Bonn")==0)

            printf("Germany \n");

        else if(strcmp(country,"New Delhi")==0)

            printf("India \n");

        else if(strcmp(country,"Jerusalem")==0)

            printf("Israel \n");

        else if(strcmp(country,"Rome")==0)

            printf("Italy \n");

        else if(strcmp(country,"Tokyo")==0)

            printf("Japan \n");

        else if(strcmp(country,"Mexico City")==0)

            printf("Mexico \n");

        else if(strcmp(country,"Beijing")==0)

            printf("People's Republic of China \n");

        else if(strcmp(country,"Moscow")==0)

            printf("Russia \n");

        else if(strcmp(country,"Washington")==0)

            printf("United States \n");

        else

            printf("enter included country or city: \n");

        gets(country);

    }

    return 0;

}
