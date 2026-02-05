// Ask two numbers "a" and "b" and calculate the smaller number between other. For example: the smaller number
/*
int main(void){
    int a, b, multiple;

    printf("Input 'a' value and 'b' value: ");
    scanf("%d\n%d", &a, &b);
    for (int i = 0; i<=b; i++){
        multiple = a*i;
    }
}
*/
// The code above will consume high memory from system.
#include <stdio.h>
int main(void){
    int a, b, result;
    
    printf("Input 'a' value and 'b' value: ");
    scanf("%d\n%d", &a, &b);
    result = b - (a%b);
    printf("Highest multiple: %d\n", result);
}