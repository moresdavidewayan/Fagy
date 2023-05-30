#include "token.hpp"

namespace fagy {
Token::Token(TokenType type) : type(type) {}

Token::Token(TokenType type, std::string value) : type(type), value(value) {}
} // namespace fagy