#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lengthWithWithoutSpaces(char str[]) {
    int withSpaces = strlen(str);
    int withoutSpaces = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            withoutSpaces++;
        }
    }
    
    printf("\nLength with spaces: %d", withSpaces);
    printf("\nLength without spaces: %d\n", withoutSpaces);
}

void reverseString(char str[]) {
    int len = strlen(str);
    char reversed[200];
    
    for(int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
    
    printf("\nOriginal string: %s", str);
    printf("\nReversed string: %s\n", reversed);
}

void reverseWords(char str[]) {
    char temp[200];
    strcpy(temp, str);
    
    printf("\nOriginal string: %s", str);
    printf("\nWords reversed: ");
    
    char *word = strtok(temp, " ");
    int firstWord = 1;
    
    while(word != NULL) {
        int len = strlen(word);
        
        if(!firstWord) printf(" ");
        
        for(int i = len - 1; i >= 0; i--) {
            printf("%c", word[i]);
        }
        
        firstWord = 0;
        word = strtok(NULL, " ");
    }
    printf("\n");
}

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && !inWord) {
            inWord = 1;
            count++;
        } else if(str[i] == ' ') {
            inWord = 0;
        }
    }
    
    return count;
}

int countVowels(char str[]) {
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[200];
    int choice;
    
    printf("==================================================\n");
    printf("        STRING OPERATIONS MENU\n");
    printf("==================================================\n");
    
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    while(1) {
        printf("\n==================================================\n");
        printf("MENU OPTIONS:\n");
        printf("==================================================\n");
        printf("1. Length of string (with spaces and without spaces)\n");
        printf("2. Reverse whole string\n");
        printf("3. Reverse every word of string\n");
        printf("4. Count number of words\n");
        printf("5. Count number of vowels\n");
        printf("6. Exit\n");
        printf("==================================================\n");
        
        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);
        getchar(); // Consume newline
        
        switch(choice) {
            case 1:
                lengthWithWithoutSpaces(str);
                break;
                
            case 2:
                reverseString(str);
                break;
                
            case 3:
                reverseWords(str);
                break;
                
            case 4:
                printf("\nNumber of words: %d\n", countWords(str));
                break;
                
            case 5:
                printf("\nNumber of vowels: %d\n", countVowels(str));
                break;
                
            case 6:
                printf("\nThank you for using the String Operations Menu!\n");
                printf("Goodbye!\n");
                return 0;
                
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 6.\n");
        }
    }
    
    return 0;
}