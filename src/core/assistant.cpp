#include "assistant.h"
#include <iostream>

Assistant::Assistant() : db("data/assistente.db") {}

std::string Assistant::ask(const std::string& question) {
    return NLP::processInput(question);
}
