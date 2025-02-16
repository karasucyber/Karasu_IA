#include "database.h"
#include <iostream>

Database::Database(const std::string& dbPath) {
    if (sqlite3_open(dbPath.c_str(), &db) != SQLITE_OK) {
        std::cerr << "Erro ao abrir banco de dados\n";
    }
}

Database::~Database() {
    sqlite3_close(db);
}

bool Database::executeQuery(const std::string& query) {
    char* errMsg;
    if (sqlite3_exec(db, query.c_str(), 0, 0, &errMsg) != SQLITE_OK) {
        std::cerr << "Erro: " << errMsg << std::endl;
        sqlite3_free(errMsg);
        return false;
    }
    return true;
}

std::string Database::getData(const std::string& query) {
    sqlite3_stmt* stmt;
    std::string result = "";

    if (sqlite3_prepare_v2(db, query.c_str(), -1, &stmt, 0) == SQLITE_OK) {
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            result = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        }
        sqlite3_finalize(stmt);
    }
    return result;
}
