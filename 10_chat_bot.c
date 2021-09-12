#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <MMsystem.h>

char user_input[10000];
void decrypt(char *c1)
{
    char *ptr = c1;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
void age()
{
    int d1, m1, y1, d2, m2, y2, r1, r2, r3;
    printf("**********************************************************\n");
    printf("**                  Age calculator                      **\n");
    printf("**********************************************************\n");
repeate10:
    printf("bot===>Enter your birth year-\n");
    scanf("%d", &y1);
    printf("bot===>Enter your birth month-\n");
    scanf("%d", &m1);
    printf("bot===>Enter your birth day-\n");
    scanf("%d", &d1);
    printf("bot===>Enter current year-\n");
    scanf("%d", &y2);
    printf("bot===>Enter current month-\n");
    scanf("%d", &m2);
    printf("bot===>Enter current day-\n");
    scanf("%d", &d2);
    if ((d1 > 31 || d1 < 1) && (d2 > 31 || d2 < 1) && (m1 > 12 || m1 < 1) && (m2 > 12 || m2 < 1) && (y2 < 0 && y2 < 0))
    {
        printf("bot===>you enter somthing wrong!\n");
        goto repeate10;
    }
    else
    {
        r3 = y2 - y1;
        if (d2 > d1)
        {
            r1 = d2 - d1;
        }
        else
        {
            m2 = m2 - 1;
            d2 = d2 + 30;
            r1 = d2 - d1;
        }
        if (m2 > m1)
        {
            r2 = m2 - m1;
        }
        else
        {
            y2 = y2 - 1;
            m2 = m2 + 12;
            r2 = m2 - m1;
        }
    }
    printf("bot===>your age is->%d year %d month and %d day\n", r3, r2, r1);
}
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
void calculator()
{
    char operator;
    float first, second, third, fourth;
    float sum, substract, multiply, divide;
    int hmn;

    printf("How many number you want to calculate in this calculator--> ");
    scanf("%d", &hmn);
    if (hmn == 2)
    {
    repeate1:
        printf("Which operator do you want to use(+,-,*,/)?\n");
        scanf("%c", &operator);
        fflush(stdin);
        if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
        {
            printf("Enter the first number-->");
            scanf("%f", &first);
            printf("Enter the second number-->");
            scanf("%f", &second);

            sum = first + second;
            substract = first - second;
            multiply = first * second;
            divide = first / second;

            switch (operator)
            {
            case '+':
                printf("sum of your entered number is %f\n", sum);
                break;
            case '-':
                printf("substract of your entered number is %f\n", substract);
                break;
            case '*':
                printf("multiplication of your entered number is %f\n", multiply);
                break;
            case '/':
                printf("division of your entered number is %f\n", divide);
                break;
            }
        }
        else
        {
            printf("Please enter right operator symbol\n");
            goto repeate1;
        }
    }
    else if (hmn == 3)
    {

    repeate2:
        printf("Which operator do you want to use(+,-,*,/)?\n");
        scanf("%c", &operator);
        fflush(stdin);
        if (operator== '+' || operator== '-' || operator== '*' || operator== '/')

        {

            printf("Enter the first number-->");
            scanf("%f", &first);
            printf("Enter the second number-->");
            scanf("%f", &second);
            printf("Enter the third number-->");
            scanf("%f", &third);

            sum = first + second + third;
            substract = first - second - third;
            multiply = first * second * third;
            divide = first / second / third;

            switch (operator)
            {
            case '+':
                printf("sum of your entered number is %f\n", sum);
                break;
            case '-':
                printf("substract of your entered number is %f\n", substract);
                break;
            case '*':
                printf("multiplication of your entered number is %f\n", multiply);
                break;
            case '/':
                printf("division of your entered number is %f\n", divide);
                break;
            }
        }
        else
        {
            printf("Please enter right operator symbol\n");
            goto repeate2;
        }
    }
    else if (hmn == 4)
    {
    repeate3:
        printf("Which operator do you want to use(+,-,*,/)?\n");
        scanf("%c", &operator);
        fflush(stdin);
        if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
        {

            printf("Enter the first number-->");
            scanf("%f", &first);
            printf("Enter the second number-->");
            scanf("%f", &second);
            printf("Enter the third number-->");
            scanf("%f", &third);
            printf("Enter the fourth number-->");
            scanf("%f", &fourth);

            sum = first + second + third + fourth;
            substract = first - second - third - fourth;
            multiply = first * second * third * fourth;
            divide = first / second / third / fourth;

            switch (operator)
            {
            case '+':
                printf("sum of your entered number is %f\n", sum);
                break;
            case '-':
                printf("substract of your entered number is %f\n", substract);
                break;
            case '*':
                printf("multiplication of your entered number is %f\n", multiply);
                break;
            case '/':
                printf("division of your entered number is %f\n", divide);
                break;
            }
        }
        else
        {
            printf("Please enter right operator symbol\n");
            goto repeate3;
        }
    }
    else
    {
        printf("Please enter number between (2-4)\n");
    }

    printf("Thanks for using this calculator\n");
}

int main()
{
    printf("########################################\n");
    printf("##------>Welcome in AI chat bot<------##\n");
    printf("########################################\n");

    while (1)
    {
        printf("user ===========>");
        gets(user_input);
        if (strcmp(user_input, "exit") == 0)
        {
            system("cls");
            printf("bot===>Have a good day\n");
            printf("bot===>Okay byy!!!!!!");
            break;
        }
        else if (strcmp(user_input, "hi") == 0)
        {
            printf("bot===>Hello sir how may i help you.\n");
        }
        else if (strcmp(user_input, "hii") == 0)
        {
            printf("bot===>Hello sir how may i help you.\n");
        }
        else if (strcmp(user_input, "hiii") == 0)
        {
            printf("bot===>Hello sir how may i help you.\n");
        }
        else if (strcmp(user_input, "hey") == 0)
        {
            printf("bot===>Hello sir how may i help you.\n");
        }
        else if (strcmp(user_input, "hello") == 0)
        {
            printf("bot===>Hello sir how may i help you.\n");
        }
        else if (strcmp(user_input, "what is your name?") == 0)
        {
            printf("bot===>My name is divya.\n");
        }
        else if (strcmp(user_input, "what is your name") == 0)
        {
            printf("bot===>My name is divya.\n");
        }
        else if (strcmp(user_input, "your name") == 0)
        {
            printf("bot===>My name is divya.\n");
        }
        else if (strcmp(user_input, "your name?") == 0)
        {
            printf("bot===>My name is divya.\n");
        }
        else if (strcmp(user_input, "where from you?") == 0)
        {
            printf("bot===>i'm from your Device.\n");
        }
        else if (strcmp(user_input, "oh") == 0)
        {
            printf("bot===>yes sir.\n");
        }
        else if (strcmp(user_input, "ohh") == 0)
        {
            printf("bot===>yes sir.\n");
        }
        else if (strcmp(user_input, "ohhh") == 0)
        {
            printf("bot===>yes sir.\n");
        }
        else if (strcmp(user_input, "what are you doing?") == 0)
        {
            printf("bot===>Nothing sir.\n");
            printf("bot===>i'm allways available for you sir.\n");
        }
        else if (strcmp(user_input, "what are you doing") == 0)
        {
            printf("bot===>Nothing sir.\n");
            printf("bot===>i'm allways available for you sir.\n");
        }
        else if (strcmp(user_input, "who is your dad?") == 0)
        {
            printf("bot===>my father is mr. Devendra parihar.\n");
        }
        else if (strcmp(user_input, "who is your father?") == 0)
        {
            printf("bot===>my father is mr. Devendra parihar.\n");
        }
        else if (strcmp(user_input, "who is your dad") == 0)
        {
            printf("bot===>my father is mr. Devendra parihar.\n");
        }
        else if (strcmp(user_input, "who is your father") == 0)
        {
            printf("bot===>my father is mr. Devendra parihar.\n");
        }
        else if (strcmp(user_input, "who create you?") == 0)
        {
            printf("bot===>Devendra parihar create me.\n");
        }
        else if (strcmp(user_input, "who create you") == 0)
        {
            printf("bot===>Devendra parihar create me.\n");
        }
        else if (strcmp(user_input, "what is your birth date?") == 0)
        {
            printf("bot===>My birth date is is 28-06-2021.\n");
        }
        else if (strcmp(user_input, "what is your birth date") == 0)
        {
            printf("bot===>My birth date is is 28-06-2021.\n");
        }
        else if (strcmp(user_input, "open chrome") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening chrome browser..........\n");
            system("start chrome");
        }
        else if (strcmp(user_input, "open cmd") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening cmd terminal..........\n");
            system("start cmd");
        }
        else if (strcmp(user_input, "open brave") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening brave browser..........\n");
            system("start brave");
        }
        else if (strcmp(user_input, "time") == 0)
        {
            time_t s, val = 1;
            struct tm *current_time;
            s = time(NULL);
            //time in seconds
            current_time = localtime(&s);
            printf("bot===>%02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
        }
        else if (strcmp(user_input, "what is the day today") == 0)
        {
            time_t now;
            time(&now);
            printf("bot===>%s\n", ctime(&now));
        }
        else if (strcmp(user_input, "what is time now") == 0)
        {
            time_t now;
            time(&now);
            printf("bot===>%s\n", ctime(&now));
        }

        else if (strcmp(user_input, "open youtube") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening youtube..........\n");
            system("start https://www.youtube.com/");
        }
        else if (strcmp(user_input, "open mail") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening Gmail..........\n");
            system("start https://mail.google.com");
        }
        else if (strcmp(user_input, "open notepad") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening Notepad Editor..........\n");
            system("start notepad");
        }
        else if (strcmp(user_input, "open wordpad") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening Wordpad Editor..........\n");
            system("start wordpad");
        }
        else if (strcmp(user_input, "open google") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening google..........\n");
            system("start https://www.google.com");
        }
        else if (strcmp(user_input, "open whatsapp") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>opening WhatsApp..........\n");
            system("start https://web.whatsapp.com");
        }
        else if (strcmp(user_input, "open calculator") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>This is my calculator hope you like it.\n");
            calculator();
            fflush(stdin);
        }
        else if (strcmp(user_input, "you are very inteligent") == 0)
        {
            printf("bot===>Thank you so much sir.\n");
        }
        else if (strcmp(user_input, "who is narendra modi") == 0)
        {
            printf("bot===>Okay sir.\n");
            printf("bot===>searching..........\n");
            system("start https://en.wikipedia.org/wiki/Narendra_Modi");
        }
        else if (strcmp(user_input, "can you translate") == 0)
        {
            printf("bot===>yes sir.\n");
            printf("bot===>searching for translator..........\n");
            system("start  https://translate.google.co.in");
        }
        else if (strcmp(user_input, "can you play music") == 0)
        {
            printf("bot===>yes sir.\n");
            printf("bot===>searching for music..........\n");
            system("start https://www.youtube.com/watch?v=XhEU5uL0T84");
        }
        else if (strcmp(user_input, "can you calculate my age") == 0)
        {
            fflush(stdin);
            printf("bot===>yes sir.\n");
            fflush(stdin);
            age();
            fflush(stdin);
            system("cls");
        }
        else if (strcmp(user_input, "what is special talent in you") == 0)
        {
            printf("bot===>i can encrypt and decrypt massages");
            printf("bot===> type encrypte for encrypting massage");
            printf("bot===> type decrypte for decrypting massage");
        }
        else if (strcmp(user_input, "encrypte") == 0)
        {
            char c[60];
            printf("bot===>Enter your for encrypt massage-->");
            gets(c);
            encrypt(c);
            printf("bot===>Encrypted massage is-> %s\n", c);
        }
        else if (strcmp(user_input, "decrypte") == 0)
        {
            char c1[60];
            printf("bot===>Enter your massage-->");
            gets(c1);
            decrypt(c1);
            printf("bot===>Decrypted massage is-> %s\n", c1);
        }
        else if (strcmp(user_input, "tell me the news today") == 0)
        {
            printf("bot===>yes sir.\n");
            printf("bot===>searching for Today news..........\n");
            system("start https://www.indiatoday.in/news.html");
        }
        else
        {
            printf("bot===>Sorry I don't know the answer to this one.\n");
            printf("bot===>%s -->is out of my knowledge\n", user_input);
        }
    }

    return 0;
}