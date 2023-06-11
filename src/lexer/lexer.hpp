#pragma once

#include <string>
#include <vector>

#include "../token/token.hpp"

namespace fagy {
class Lexer {
  std::string source;
  std::vector<Token> tokens;

public:
  Lexer(std::string source);

  std::vector<Token> getTokens();
};
} // namespace fagy