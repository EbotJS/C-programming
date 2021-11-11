#include <stdio.h>


int main() {
    int radius,radiusCubed;
    const float PI = 3.14;
    float volume;
    
    
    printf("radius: ");
    scanf("%d", &radius);
    radiusCubed = radius * radius * radius;
    volume = (4 * PI * radiusCubed)/3;
    printf("volume: %0.1f\n", volume);
}