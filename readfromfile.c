
#include <stdio.h>
#include <math.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    float a, b, c, discriminant, root1, root2;

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fscanf(file, "%f %f %f", &a, &b, &c);
    fclose(file);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    discriminant = b*b - 4*a*c;

    if(discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}
