
#ifndef INC_1_RAYTRACING_COLOR_H
#define INC_1_RAYTRACING_COLOR_H

#include <ostream>


class Color {
public:
    unsigned char r, g, b;

    Color(unsigned char r, unsigned char g, unsigned char b);
    Color();

    /* OPERATORS */
    Color operator+(const Color &other) const;
    void operator+=(const Color &other);

    Color operator-(const Color &other) const;
    void operator-=(const Color &other);

    Color operator*(float other) const;
    Color operator*(const Color &other) const;
    void operator*=(float other);
    void operator*=(const Color &other);
    friend Color operator*(float other, const Color &vec);

    Color operator/(float other) const;
    void operator/=(float other);

    friend std::ostream & operator << (std::ostream &out, const Color &vector3);

};


#endif //INC_1_RAYTRACING_COLOR_H
