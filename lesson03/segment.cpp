#include <iostream>
#include <cmath>

struct Point {
  double x, y;
};

struct Segment {
  Point p1;
  Point p2;
  double length() {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
  }
};

int main() {
  Segment s = {{0.4, 1.4}, {1.2, 6.3}};
  std::cout << s.length() << std::endl;
  return 0;
}
