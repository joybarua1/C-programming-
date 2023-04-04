#include<stdio.h>
int main()
{
    // printf("Recently i heard that you've achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you'll shine in your life!\tGood luck with all the barriers (/\\) in\nyour life.");

    // int a=5, b=2;
    // int sum = a+b;
    // int sub = a-b;
    // int mul = a*b;
    // int div = a/b;
    // printf("%d", div);

    // int a;
    // int mod = a%2;
    // printf("%d", mod);


    // int tk;
    // scanf("%d", &tk);
    // if(tk >0){
    //     printf("positive");
    // }
    // else if(tk <0){
    //     printf("negative");
    // }
    // else if(tk ==0){
    //     printf("Zero");
    // }


    int tk;
    scanf("%d", &tk);
    if(tk >=10000){
        printf("Gucci Bag\n");
        if(tk>=20000){
            printf("Gucci Belt");
        }
    }
    else if(tk >=5000){
        printf("Livis Bag");
    }
    else{
        printf("something");
    }
    return 0;
}