#include <stdio.h>

int main(){
    struct vertex { float x,y,z,w,r,g,b,a;};
    static const struct vertex vertices[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,
                                    1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,
                                    1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
    printf("%f %f\n", vertices[2].x, vertices[0].a);

    return 0;
}