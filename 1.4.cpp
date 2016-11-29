#include <stdio.h>

int main() {
    int feet = 0;
    int inches = 0;
    double sm;

    printf("Input height (feet inches): ");
    scanf("%d%*c%d", &feet, &inches);

    sm = (12 * feet + inches) * 2.54;

    printf("Height in sm: %10.1f", sm);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
    return 0;
}
            }