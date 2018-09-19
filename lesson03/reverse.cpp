#include <iostream>

int reverse(int n, int result) {
  if (n == 0)
    return result;
  return reverse(n / 10, 10 * result + (n % 10));
}

int reverse(int n) {
  return reverse(n, 0);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << reverse(n) << std::endl;
}
