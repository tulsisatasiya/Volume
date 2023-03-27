#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};


struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches %= 12;
    }
    return result;
}

int main() {
    struct Distance d1, d2, sum;

    
    printf("Enter first distance in feet and inches: ");
    scanf("%d %d", &d1.feet, &d1.inches);

   
    printf("Enter second distance in feet and inches : ");
    scanf("%d %d", &d2.feet, &d2.inches);

   
    sum = addDistances(d1, d2);

    printf("The sum of the distances is: %d feet %d inches", sum.feet, sum.inches);

    return 0;
}

