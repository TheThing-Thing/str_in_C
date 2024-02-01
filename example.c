#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
// Example of stdio.h

    char name[15];
    char lang[10];
    // Input
    printf("Enter your name: ");
    scanf("%s", name);// or fgets(name, 30, stdin);
    printf("Enter your language: ");
    scanf("%s", lang);
    printf("\n");
    // Output
    printf("Hi %s.\n", name);
    printf("You might be a %s programmer.\n", lang);
    printf("\n");

    int len = sizeof(name)/sizeof(char); //calculate the length of string
    printf("Original String: %s\n", name); 
    printf("Length of String: %d\n", len); 
    printf("\n");

// Example of <stdlib.h>
    
    
    // atoi() function converts a string to an integer
    int num;
    char str[] = "12345";
    num = atoi(str);  
    printf("The number is %s \n",str);
    printf("The converted number is : %d",num);
    printf("\n");


    // atof() function converts a string to a floating point number
    float  fltnum;
    char fstr[] = "123.45";
    fltnum = atof (fstr);    
    printf("The number is %s \n",fstr);
    printf ("The converted floating point number is : %.2f",fltnum);
    printf("\n");


// Example of <string.h>

    // Find length
    printf("Length of Name: %d\n", strlen(name));
    printf("\n");

    // copy name to  another_name
    char another_name[strlen(name)];
    strcpy(another_name, name);
    printf("name: %s\n", name);
    printf("another_name: %s\n", another_name);
    printf("\n");

    // connect Strings
    char lastname[] = "Warali ";
    strcat(lastname, another_name); 
    printf("Name after connecting two strings: %s\n", lastname);
    printf("\n");

    // compare two strings
    printf("%d\n", strcmp(name, another_name)); 
    if (strcmp(name, another_name) == 0) {
        printf("The names are correct.\n");
    }else{
        printf("The names are not correct.\n");
    }
    printf("\n");

    // find substring in a given string
    char sentence[]="This is an example for finding substrings.";
    char word[]="an";
    char *ptr;
    ptr = strstr(sentence,word);
    if(ptr!=NULL){
    	printf("%s was found at position %d on the sentence:\n%s\n",word,ptr-sentence+1,sentence);
    }else{
    	printf("Substring %s was not found in the sentence.\n",word);
    }
    printf("\n");
    return 0;
}