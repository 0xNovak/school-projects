#include <cstdint>
#include <iostream>

#include <bitset>
#include <string>

int bitLoop(uint8_t range);

int main(int argc, char *argv[]) {
  uint8_t range;
  int16_t Input;
  std::cout << "enter range\n>";
  std::cin >> Input;
  if (Input > 65) {
    Input = 65;
    std::cout << "range reduced to 65 (max range)\n";
  }
  range = static_cast<uint8_t>(Input);
  return bitLoop(range);
}

template <typename T> void print(const T &value) {
  const unsigned char *bytes = reinterpret_cast<const unsigned char *>(&value);
  std::string bits;
  for (std::size_t i = 0; i < sizeof(T); i++) {
    std::bitset<8> b(bytes[sizeof(T) - 1 - i]);
    bits += b.to_string();
  }

  std::size_t pos = bits.find('1');
  if (pos != std::string::npos)
    std::cout << bits.substr(pos);
  else
    return;
}

int bitLoop(uint8_t range) {
  range -= 1;
  for (uint8_t i = 0; i < range; i++)
    std::cout << ' ';
  std::cout << '1' << '\n';
  for (uint8_t i = 0; i < range; i++) {

    uint64_t v = 0b1;
    v = (v << i);
    for (uint8_t j = 1; j < range - i; j++)
      std::cout << ' ';
    print(v);
    std::cout << '1' << '\n';
  }
  return 0;
}
