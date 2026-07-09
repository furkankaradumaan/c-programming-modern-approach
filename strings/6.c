#include <stdbool.h>
#include <stdio.h>
#include <strings.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
        const char *planets[NUM_PLANETS] = {"Mercury", "Venus", "Earth",
                                            "Mars", "Jupiter", "Saturn",
                                            "Uranus", "Neptune", "Pluto"};

        for (int i = 1; i < argc; i++) {
                bool found = false;
                for (int j = 0; j < NUM_PLANETS; j++) {
                        if (strcasecmp(planets[j], argv[i]) == 0) {
                                printf("%s is planet %d\n", argv[i], j + 1);
                                found = true;
                        }
                }
                if (!found) {
                        printf("%s is not a planet\n", argv[i]);
                }
        }

        return 0;
}
