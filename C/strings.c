//Contains various functions to be used on strings. 
#include<stdio.h>
int main()
{
    char s[8]; //strings don't exist so we use array of characters.
    printf("Enter your name: ");
    scanf("%s",s);
    printf("Hello %s",s);
}

#include<stdio.h>
int main()
{
    char s[]="Ryane"; //Strings can also be made like this.
    printf("Hello %s",s);
}

//Using gets() & puts() function 
#include<stdio.h>
int main()
{
    char a[10]; 
    printf("Enter your name: ");
    gets(a);//Used to enter value into array
    printf("Hello ");
    puts(a);//Displays the value in array
}

//Functions on strings
#include<stdio.h>
#include<string.h>//Requires this library.
int main()
{
    char a [10], c [10];
    gets(a);
    printf("Length of string is: %d\n",strlen(a)); //Displays length of string. 

    printf("String in uppercase: %s\n",strupr(a));

    printf("String in lowercase: %s\n",strlwr(a));


    strcpy(c,a);
    printf("Reversed string is: %s\n",strrev(c)); //Reverses string

    char b [10];
    strcpy(b,a); //Copies value from a to b.
    puts(b);

    strcat(a,b); //Concatenates strings.
    printf("%s\n",a);

    printf("Value upon comparing the two strings is: %d",strcmp(a,b)); //if a is lexicographically  greater, returns value >0, else returns value <0, if equal returns 0

}


