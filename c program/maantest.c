#include<stdio.h>

int main() {
    int bonus, cy, yoj, yr_of_ser;

    printf("enter current year and year of joining");
    scanf("%d %d", &cy, &yoj);

    yr_of_ser = cy - yoj;

    if(yr_of_ser > 3){

        bonus = 2500;
        printf("bonus = RS%d", bonus);
    }

return 0;
}