#ifndef ASSISTANT_H
#define ASSISTANT_H

#include <string>
#include "nlp/nlp.h"
#include "db/database.h"

class Assistant {
public:
    Assistant();
    std::string ask(const std::string& question);
private:
    Database db;
};

#endif
