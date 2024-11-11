#include <stdio.h>
int main(){
    int number;
    printf("cho so nguyen co gia tri la: ");
    scanf("%d", &number);
    if (number < 100){
        printf("so nguyen tren co gia tri nho hon 100");
    }
    else{
        printf("so nguyen tren co gia tri lon hon 100");
    }
    return 0;
}
