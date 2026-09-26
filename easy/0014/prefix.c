#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize);

int main(){
    
    char* arr[] = {"woow", "woowow", "wooo"};
    char* ergebnis = longestCommonPrefix(arr,3);
    free (ergebnis);
}

char* longestCommonPrefix(char** strs, int strsSize) {
    char* strsout = malloc(201*sizeof(char));
    int j = 0;
    
    for(j = 0; strs[0][j] != '\0'; j++){
        char currChar = strs[0][j];
        for (int i = 0; i < strsSize; i++){
            if(strs[i][j] == '\0' || strs[i][j] != currChar){
                strsout[j] = '\0';
                return strsout;
            }
        }
        strsout[j] = currChar;
    }
    strsout[j] = '\0';
    return strsout;
    

}
