#include <ostream>
#include "Color.h"
#include "MathU.h"

Color::Color() : r(0), g(0), b(0) {}

Color::Color(unsigned char r, unsigned char g, unsigned char b) : r(r), g(g), b(b) {
    this->r = clamp(r, 0, 255);
    this->g = clamp(g, 0, 255);
    this->b = clamp(b, 0, 255);
}

void Color::operator+=(const Color &other) {
    r += other.r;
    g += other.g;
    b += other.b;
}

Color Color::operator+(const Color &other) const {
    Color col = (*this);
    col += other;
    return col;
}

void Color::operator*=(const float other) {
    r *= (unsigned char)other;
    g *= (unsigned char)other;
    b *= (unsigned char)other;
}

Color Color::operator*(const float other) const {
    Color color = (*this);
    color *= other;
    return color;
}

Color operator*(const float other, const Color &col) {
    Color color = col;
    color *= other;
    return color;
}

void Color::operator-=(const Color &other) {
    r -= other.r;
    g -= other.g;
    b -= other.b;
}

Color Color::operator-(const Color &other) const {
    Color col = (*this);
    col -= other;
    return col;
}

Color Color::operator/(float other) const {
    Color res = (*this);
    res /= other;
    return res;
}

void Color::operator/=(float other) {
    r /= (unsigned char)other;
    g /= (unsigned char)other;
    b /= (unsigned char)other;
}

std::ostream &operator<<(std::ostream &out, const Color &col) {
out << "( " << col.r << ", " << col.g << ", " << col.b << " )";
return out;
}

void Color::operator*=(const Color &other) {
    r *= other.r;
    g *= other.g;
    b *= other.b;
}

Color Color::operator*(const Color &other) const {
    Color col = (*this);
    col *= other;
    return col;
}