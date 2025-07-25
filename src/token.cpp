#include "token.h"

//returns the string value of the TokenType
std::string TtoS(TokenType type){
    switch (type){
        case TokenType::ADD: return "+";
        case TokenType::SUB: return "-";
        case TokenType::MUL: return "*";
        case TokenType::DIV: return "/";
        case TokenType::SINGLE_QUOTE: return "'";
        case TokenType::DOUBLE_QUOTE: return "\"";
        case TokenType::AND: return "AND";
        case TokenType::OR: return "OR";
        case TokenType::NOT: return "NOT";
        case TokenType::XOR: return "XOR";
        case TokenType::GREATER_THAN: return ">";
        case TokenType::EQUAL: return "=";
        case TokenType::NOT_EQUAL: return "!=";
        case TokenType::LESS_THAN: return "<";
        case TokenType::LTE: return "<=";
        case TokenType::GTE: return ">=";
        case TokenType::END_OF_FILE: return "EOF";
        case TokenType::LPAREN: return "(";
        case TokenType::RPAREN: return ")";
        case TokenType::LBRACKET: return "{";
        case TokenType::RBRACKET: return "}";
        case TokenType::DOT: return ".";
        case TokenType::ID: return "ID";
        case TokenType::ASSIGN: return ":=";
        case TokenType::SEMI: return ";";
        case TokenType::COLON: return ":";
        case TokenType::COMMA: return ",";
        case TokenType::INTEGER_CONST: return "INTEGER_CONST";
        case TokenType::REAL_CONST: return "REAL_CONST";
        case TokenType::STRING_LITERAL: return "STRING_LITERAL";
        case TokenType::PROGRAM: return "PROGRAM";
        case TokenType::INTEGER: return "INTEGER";
        case TokenType::REAL: return "REAL";
        case TokenType::BOOLEAN : return "BOOLEAN";
        case TokenType::ARRAY: return "ARRAY";
        case TokenType::OF: return "OF";
        case TokenType::CHAR : return "CHAR";
        case TokenType::STRING : return "STRING";
        case TokenType::TRUE : return "TRUE";
        case TokenType::FALSE : return "FALSE";
        case TokenType::INT_DIV: return "INT_DIV";
        case TokenType::VAR: return "VAR";
        case TokenType::PROCEDURE: return "PROCEDURE";
        case TokenType::BEGIN: return "BEGIN";
        case TokenType::END: return "END";
        case TokenType::IF: return "IF";
        case TokenType::THEN: return "THEN";
        case TokenType::ELSE: return "ELSE";
        case TokenType::WHILE: return "WHILE";
        case TokenType::DO: return "DO";
        case TokenType::FOR: return "FOR";
        case TokenType::TO: return "TO";
        case TokenType::DOWNTO: return "DOWNTO";
        case TokenType::REPEAT: return "REPEAT";
        case TokenType::UNTIL: return "UNTIL";
        case TokenType::FUNCTION: return "FUNCTION";
        default: return "UNKNOWN";
    }
}

std::string get_TokenType(TokenType type){
    switch (type){
        case TokenType::ADD: return "ADD";
        case TokenType::SUB: return "SUB";
        case TokenType::MUL: return "MUL";
        case TokenType::DIV: return "DIV";
        case TokenType::SINGLE_QUOTE: return "SINGLE_QUOTE";
        case TokenType::DOUBLE_QUOTE: return "DOUBLE_QUOTE";
        case TokenType::AND: return "AND";
        case TokenType::OR: return "OR";
        case TokenType::NOT: return "NOT";
        case TokenType::XOR: return "XOR";
        case TokenType::GREATER_THAN: return ">";
        case TokenType::EQUAL: return "=";
        case TokenType::NOT_EQUAL: return "!=";
        case TokenType::LESS_THAN: return "<";
        case TokenType::LTE: return "<=";
        case TokenType::GTE: return ">=";
        case TokenType::END_OF_FILE: return "END_OF_FILE";
        case TokenType::LPAREN: return "LPAREN";
        case TokenType::RPAREN: return "RPAREN";
        case TokenType::LBRACKET: return "LBRACKET";
        case TokenType::RBRACKET: return "RBRACKET";
        case TokenType::DOT: return "DOT";
        case TokenType::ID: return "ID";
        case TokenType::ASSIGN: return "ASSIGN";
        case TokenType::SEMI: return "SEMI";
        case TokenType::COLON: return "COLON";
        case TokenType::COMMA: return "COMMA";
        case TokenType::INTEGER_CONST: return "INTEGER_CONST";
        case TokenType::REAL_CONST: return "REAL_CONST";
        case TokenType::STRING_LITERAL: return "STRING_LITERAL";
        case TokenType::PROGRAM: return "PROGRAM";
        case TokenType::INTEGER: return "INTEGER";
        case TokenType::REAL: return "REAL";
        case TokenType::BOOLEAN: return "BOOLEAN";
        case TokenType::CHAR: return "CHAR";
        case TokenType::STRING: return "STRING";
        case TokenType::ARRAY: return "ARRAY";
        case TokenType::OF: return "OF";
        case TokenType::TRUE: return "TRUE";
        case TokenType::FALSE: return "FALSE";
        case TokenType::INT_DIV: return "INT_DIV";
        case TokenType::VAR: return "VAR";
        case TokenType::PROCEDURE: return "PROCEDURE";
        case TokenType::BEGIN: return "BEGIN";
        case TokenType::END: return "END";
        case TokenType::IF: return "IF";
        case TokenType::THEN: return "THEN";
        case TokenType::ELSE: return "ELSE";
        case TokenType::WHILE: return "WHILE";
        case TokenType::DO: return "DO";
        case TokenType::FOR: return "FOR";
        case TokenType::TO: return "TO";
        case TokenType::DOWNTO: return "DOWNTO";
        case TokenType::REPEAT: return "REPEAT";
        case TokenType::UNTIL: return "UNTIL";
        case TokenType::FUNCTION: return "FUNCTION";
        default: return "UNKNOWN";
    }
}

TokenType StoR(std::string str){
    if (str == "PROGRAM"){
        return TokenType::PROGRAM;
    } else if (str == "INTEGER"){
        return TokenType::INTEGER;
    } else if (str == "REAL"){
        return TokenType::REAL;
    } else if (str == "BOOLEAN"){
        return TokenType::BOOLEAN;
    } else if (str == "CHAR"){
        return TokenType::CHAR;
    } else if (str == "STRING"){
        return TokenType::STRING;
    } else if (str == "ARRAY"){
        return TokenType::ARRAY;
    } else if (str == "OF"){
        return TokenType::OF;
    } else if (str == "AND"){
        return TokenType::AND;
    } else if (str == "NOT"){
        return TokenType::NOT;
    } else if (str == "OR"){
        return TokenType::OR;
    } else if (str == "XOR"){
        return TokenType::XOR;
    } else if (str == "TRUE"){
        return TokenType::TRUE;
    } else if (str == "FALSE"){
        return TokenType::FALSE;   
    } else if (str == "DIV"){
        return TokenType::DIV;
    } else if (str == "VAR"){
        return TokenType::VAR;
    } else if (str == "PROCEDURE"){
        return TokenType::PROCEDURE;
    } else if (str == "BEGIN"){
        return TokenType::BEGIN;
    } else if (str == "END"){
        return TokenType::END;
    } else if (str == "IF"){
        return TokenType::IF;
    } else if (str == "THEN"){
        return TokenType::THEN;
    } else if (str == "ELSE"){
        return TokenType::ELSE;
    } else if (str == "WHILE"){
        return TokenType::WHILE;
    } else if (str == "DO"){
        return TokenType::DO;
    } else if (str == "FOR"){
        return TokenType::FOR;
    } else if (str == "TO"){
        return TokenType::TO;
    } else if (str == "DOWNTO"){
        return TokenType::DOWNTO;
    } else if (str == "REPEAT"){
        return TokenType::REPEAT;
    } else if (str == "UNTIL"){
        return TokenType::UNTIL;
    } else if (str == "FUNCTION"){
        return TokenType::FUNCTION;
    } else {
        throw std::invalid_argument("Invalid string passed to 'StoR'");
    }
}

Token::Token(): type(UNKNOWN), value("UNKNOWN"), lineno(0), column(0){};
Token::Token(TokenType t, std::string val, int l, int c): type(t), value(val), lineno(l), column(c){};

std::string Token::toString(){
    std::string s = "<TokenType." + get_TokenType(type) + ", " + value + ", " + std::to_string(lineno) + ":" + std::to_string(column) + ">";
    return s;
}