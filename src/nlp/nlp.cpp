#include "nlp.h"
#include <algorithm>
#include <string>

    std::string NLP::processInput(const std::string& input) {
    std::string processedInput = input;
    std::transform(processedInput.begin(), processedInput.end(), processedInput.begin(), ::tolower);
    return processedInput;
}