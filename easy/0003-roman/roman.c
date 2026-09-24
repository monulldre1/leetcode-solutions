#include <string.h>
#include <stdio.h>


int getNum(char romanC);
int romanToInt(char* s);

int main(){
    printf("Roman number in INT: %d", romanToInt("III"));
    

}

int romanToInt(char* s) {
    int slength = strlen(s);
    

    int numFinal = 0;
    if(slength == 0 || slength > 15){
        numFinal = 0;
    } else if (slength == 1){
        numFinal = getNum(s[0]);
        
    } else {
        for(int i = 0; i < slength; i++){
            
            int current = getNum(s[i]);

            int next = (i + 1 < slength) ? getNum(s[i + 1]) : 0;

            if(current < next){
                numFinal -= current;
            }else {
                numFinal += current;
            }

        }

    }

    return numFinal;
}
int getNum(char romanC){

        int num = 0;


        switch(romanC){
        case 'I':
            num = 1;
            break;
        case 'V':
            num = 5;
            break;  
        case 'X':
            num = 10;
            break;  
        case 'L':
            num = 50;
            break;  
        case 'C':
            num = 100;
            break;  
        case 'D':
            num = 500;
            break;  
        case 'M':
            num = 1000;
            break;  

        default: printf("Not a roman number!\n");
            num = 0;
            break;
        }
        return num;
}
