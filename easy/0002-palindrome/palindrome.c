#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isPalindrome(int);

int main(){
    
    isPalindrome(222);
    return 0;
}
bool isPalindrome(int x) {
    if(x == 0){
        return true;
    }else if (x < 0){
        return false;
    }
    int number = x;

    //int in array
    int pos = 0;
    int n = number;
    while(n != 0){
        n /= 10;
        pos++;
        
    }
    int arrayi[pos];
    int arrayi2[pos];

    pos = 0;
    n = number;

    while(n != 0){
        arrayi[pos] = number % 10;
        pos++;
        number /= 10;
    }
    // Copying reversed arrayi in arrayi2
    int j = 0;
    for(int i = pos - 1; i >= 0; i--){
        arrayi2[j] = arrayi[i];
        j++;
    }
    for(int i = 0; i < sizeof(arrayi)/sizeof(int); i++){
        if(arrayi[i]!=arrayi2[i]){
            printf("Not a palindrome");
            return 0;
        }
        
    }
    
    printf("That number is a palindroooomee!");
    return 1;



    
}

