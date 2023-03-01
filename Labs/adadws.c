#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./lib/sqlite3.h"

int query(sqlite3_stmt* stmt, double rs) {
    sqlite3_reset(stmt); // обновл€ем stmt чтобы еще праз вызвать
    sqlite3_bind_double(stmt, 1, rs); // прмв€зка rs вместо ?
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        printf("%s: ", sqlite3_column_text(stmt, 0)); // // mov_title
        printf("%s\n", sqlite3_column_text(stmt, 1));// rev_stars
    }
    return sqlite3_step(stmt) == SQLITE_DONE ? SQLITE_OK : sqlite3_errcode(stmt);
}
int main(void) {
    sqlite3* db;
    int rc = sqlite3_open("./movies.db", &db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }
    double rs = 8;
    char* sql = "SELECT mov_title, rev_stars FROM movie NATURAL JOIN rating WHERE rev_stars > ?;";
    sqlite3_stmt* stmt;
    rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0); // подготовка шаблона запроса
    int res = query(stmt, rs);
    sqlite3_finalize(stmt); // освбожадет памт€ь от stmt
    sqlite3_close(db); // закрытие
    printf("%d", res);
    return 1;