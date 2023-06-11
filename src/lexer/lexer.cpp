#include "lexer.hpp"

namespace fagy {
Lexer::Lexer(std::string source) : source(source) {}

std::vector<Token> Lexer::getTokens() { return tokens; }
} // namespace fagy