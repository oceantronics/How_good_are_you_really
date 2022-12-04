#include <stdio.h>
#include <stdbool.h>

bool better_than_average(const int class_points[], int class_size, int your_points);

int main() {

    int size = 8;
    int points[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int your = 69;
    if (better_than_average(points, size, your))
        printf("You are the best!\n");
    else printf("You are'n (: \n");
    return 0;
}

bool better_than_average(const int class_points[], int class_size, int your_points) {

    int total = class_points[0], averige;
    for (int i = 1; i < class_size; ++i) {
        total += class_points[i];
    }
    averige = total / class_size;

    return your_points > averige;
}