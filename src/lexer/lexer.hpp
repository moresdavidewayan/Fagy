#pragma once

#include <string>

namespace fagy {
class Lexer {
  std::string source;

public:
  Lexer(std::string source);
};
} // namespace fagy