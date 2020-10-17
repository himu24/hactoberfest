#include <stdio.h>

#include <string.h>

#include "encryption.h"

char inString[10000];

void encryption();

void decryption();

int main(){

    int i,n=0;

    while(n!=3){

       printf("Enter 1 to encrypt some message\n");

       printf("Enter 2 to decrypt some message\n");

       printf("Enter 3 to exit the program\n");

       printf("Enter your choice::");

       scanf("%d",&n);

        if(n==1)

           encryption();

        if(n==2)

           decryption();

        if(n==3)

           printf("\n\nbye! bye! :) ");

    }

}

void encryption(){

    int i,n;

    printf("\n\n");

    printf("Enter some message to encrypt\n");

    scanf(" ");

    gets(inString);

    n=strlen(inString);

    for(i=0;i<n;i++){

        inString[i]=mapping(inString[i]);

    }

    printf("The encrypted message is\n");

    puts(inString);

    printf("\n\n");

}

void decryption(){

    int i,n;

    printf("\n\n");

    printf("Enter the encrypted message\n");

    scanf(" ");

    gets(inString);

    n=strlen(inString);

    for(i=0;i<n;i++){

        inString[i]=revmapping(inString[i]);

    }

    printf("The decrypted message is\n");

    puts(inString);

    printf("\n\n");

}
