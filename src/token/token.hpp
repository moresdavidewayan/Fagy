#pragma once

#include <string>

namespace fagy {
enum class TokenType {
  TOKEN_EOF,

  // \n \t
  TOKEN_NEW_LINE,
  TOKEN_INDENTATION,

  // ()[]
  TOKEN_LEFT_PARENTHESIS,
  TOKEN_RIGHT_PARENTHESIS,
  TOKEN_LEFT_BRACKET,
  TOKEN_RIGHT_BRACKET
};

class Token {
  TokenType type;
  std::string value;

public:
  Token(TokenType type);
  Token(TokenType type, std::string value);
};
} // namespace fagy