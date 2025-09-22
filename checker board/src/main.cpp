#include <cstdint>
#include <iostream>

int main(int argc, char *argv[]) {
  for (uint8_t i = 0; i < 8; i++) {
    for (uint8_t j = 0; j < 8; j++) {
      if ((i + j) % 2 == 0)
        std::cout << "[#]";
      else
        std::cout << "[ ]";
    }
    std::cout << '\n';
  }
  std::cout << std::flush;
  return 0;
}
