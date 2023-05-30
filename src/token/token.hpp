#pragma once

#include <string>

namespace fagy {
enum class TokenType { TOKEN_EOF };

class Token {
  TokenType type;
  std::string value;

public:
  Token(TokenType type);
  Token(TokenType type, std::string value);
};
} // namespace fagy