#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


void clear() {
    system("cls");
}

void pause() {
    printf("\n\n");
    system("pause");
}


void yep_1() {
    char input[24], *prt;
    int count = 30;
    float x, z, result = 0;

    printf("Calculate the sequence\n\n\n");
    printf("Type numbers:\n\n");

    printf("X: ");
    scanf("%s", input);
    x = strtof(input, &prt);

    printf("Z: ");
    scanf("%s", input);
    z = strtof(input, &prt);

    for (int i = 0; i < count; i++) {
        result += powf(x, (float)i) / powf(z, (float)i);
    }

    printf("\nResult: %f", result);

    pause();
}


void yep_2() {
    char month_list[12][16] = {
            "January", "February", "March",
            "April", "May", "June",
            "July", "August", "September",
            "October", "November", "December"
    };

    printf("Names of all months\n\n");

    for (int i = 0; i < sizeof(month_list) / sizeof(month_list[0]); i++) {
        printf("\n%s", month_list[i]);
        Sleep(250);
    }

    pause();
}


void yep_3() {
    char num[255] = { '-' };
    int num_digits = 0;

    printf("Determine the number of digits in this number and multiply these digits by 2\n\n\n");
    printf("Type number: ");
    scanf("%s", num);

    printf("\n");

    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
        char char_num = num[i];

        if (char_num == NULL) {
            break;
        }

        int _num = (int)char_num - 48;

        num_digits++;

        printf("%d * 2 = %d\n", _num, _num * 2);
    }

    printf("\nNum digits: %d", num_digits);

    pause();
}


int main() {
    int num;
    char input[11], *prt;

    while (1) {
        clear();

        printf("1. Calculate the sequence\n");
        printf("2. Names of all months\n");
        printf("3. Determine the number of digits in this number and multiply these digits by 2\n");
        printf("4. Leave\n");
        printf("\nSelect function: ");
        scanf("%s", input);
        num = strtol(input, &prt, 0);

        clear();

        switch (num) {
            case 1:
                yep_1();
                break;
            case 2:
                yep_2();
                break;
            case 3:
                yep_3();
                break;
            case 4:
                exit(0);
            default:
                printf("Bruh... %d, rly?", num);
        }
    }
}