#pragma once
#include <bitset>
#include <cstddef>
#include <cstdint>
#include <iostream>

namespace Chess {
constexpr void setBit(std::uint64_t &num, const std::size_t &index);
void printUnsignedBitwise(const std::uint64_t &num);
} // namespace Chess

inline constexpr void Chess::setBit(std::uint64_t &num,
                                    const std::size_t &index) {
  num = num | (1ULL << index);
}

inline void Chess::printUnsignedBitwise(const std::uint64_t &num) {
  const std::bitset<64> vector_of_bits(num);
  std::cout << vector_of_bits << '\n';
}
