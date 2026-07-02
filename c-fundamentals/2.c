// Computes the volume of a sphere with given radius

#include <stdio.h>

#define PI              3.14f
#define FRACTION        (4.0f/3.0f)

int main() {
        float radius = 0.0f;
        float volume = 0.0f;

        printf("Radius: ");
        scanf("%f", &radius);

        volume = radius * radius * radius * PI * FRACTION;

        printf("Volume of a sphere with radius %.2f: %.2f\n", radius, volume);

        return 0;
}
