#include <iomanip>
#include <ostream>
#include <sstream>

#include "token.hpp"
#include "token_table.hpp"

using nlohmann::json;

using emcore::Token;
using emcore::TokenTable;

void
TokenTable::AddToken(Token* token)
{
    tokens_.push_back(std::unique_ptr<Token>(token));
}

nlohmann::json
TokenTable::ToJson() const
{
    json j;
    for (const auto& token : tokens_) {
        j.push_back(token->ToJson());
    }
    return j;
}