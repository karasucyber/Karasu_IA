#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>

class Database {
public:
    Database(const std::string& dbPath);
    ~Database();
    bool executeQuery(const std::string& query);
    std::string getData(const std::string& query);
private:
    sqlite3* db;
};

#endif

