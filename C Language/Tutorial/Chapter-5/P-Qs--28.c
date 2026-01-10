#include<stdio.h>
//declaration//prototype
void namaste();
void bonjour();

int main() {
    printf("Enter f for french & i for india");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste();
    } else {
        bonjour();
    }
    
     
    return 0;
}
//function definition
void namaste() {
    printf("namaste!\n");
   }

   void bonjour() {
    printf("bonjour!\n");
   }