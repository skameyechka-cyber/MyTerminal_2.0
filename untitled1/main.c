#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char steam[] = ("\"C:\\Program Files (x86)\\Steam\\steam\"");
    char notepad[] = ("notepad");
    char youtube[] = ("start https://www.youtube.com");
    char google[] = ("\"C:\\Program Files\\Google\\Chrome\\Application\\Chrome.exe\"");
    char ping[100];
    char site[100];
    char input[100];



    while (1)
    { system("cls");
        system("color 2");

       printf("============\n"
              "TERMINAL 2.0\n"
              "============\n");

        printf("write 'help' to see available commands ^_^\n ");
        printf("write 'exit' to exit program :(\n");
        printf("Enter command: ");
        scanf("%s", input);

        if (strcmp(input, "help")== 0)
        {

            printf("--Enable commands--\n"
                   "steam - Steam (need internet connection)\n"
                   "warthunder - Tanks in Steam\n"
                                "youtube - Youtube (need internet connection)\n"
                                "google - Google chrome browser (need internet connection)\n"
                                "notepad - Notepad (just notepad -_-)\n"
                                "ping - you can check site ping\n"
                                "myip - your IP configuration\n\n");
            printf("Press enter to continue...\n");
            fflush(stdin); getchar();
        }

       else if (strcmp(input, "exit")== 0)
        {
            exit(0);
        }

        else if (strcmp(input, "steam")== 0)
        {
            system(steam);
        }

        else if (strcmp(input, "warthunter")== 0)
        {
            system("start steam://run/236390");
        }

        else if (strcmp(input, "notepad")== 0)
        {
            system(notepad);
        }

        else if (strcmp(input , "youtube")== 0)
        {
            system(youtube);
        }

        else if (strcmp(input, "google")== 0)
        {
            system(google);
        }

        else if (strcmp(input , "ping")== 0)
        {
            printf("Enter site link: ");
            scanf("%s", site);
            sprintf(ping,"ping %s", site);
            system(ping);
            printf("\nPress enter to continue...\n");
            fflush(stdin); getchar();
        }

        else if (strcmp(input , "myip")== 0)
        {
            printf("Your computer name: ");
            system("whoami");

            printf("Your IP configuration:");
            system("ipconfig");
            printf("\nPress enter to continue...\n");
            fflush(stdin); getchar();
        }

        else if (strcmp(input, "Monika")== 0)
        {   printf("Just Monika.\n\n");
            printf("\nPress enter to continue...\n");
            fflush(stdin); getchar();
        }

        else
        {
            printf("Invalid command!\n");
            printf("\nPress enter to continue...\n");
            fflush(stdin); getchar();
        }
    }
     return 0;
}
