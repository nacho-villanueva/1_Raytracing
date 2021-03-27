
#ifndef INC_1_RAYTRACING_MATHU_H
#define INC_1_RAYTRACING_MATHU_H

static float clamp(float x, float min, float max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

static unsigned char clamp(unsigned char x, unsigned char min, unsigned char max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

#endif //INC_1_RAYTRACING_MATHU_H
