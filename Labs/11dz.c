//#include <stdio.h>
//#include "./lib/sqlite3.h"
//
//
//int my_callback(void* not_used, int argc, char** argv, char** azColName) {
//    printf("employees {\n");
//    for (int i = 0; i < argc; ++i)
//        printf_s("%s = %s\n", azColName[i], argv[i]);
//    printf("}\n");
//    return 0;
//}
//
//
//void query() {
//    sqlite3* db;
//    char* err_msg = NULL;
//    char* sql_query = "SELECT country_name, city, department_name "
//        "FROM countries "
//        "JOIN locations USING(country_id) "
//        "JOIN departments USING(location_id); ";
//
//    int rc = sqlite3_open("hr.db", &db);
//    if (rc != SQLITE_OK) {
//        fprintf(stderr, "SQL error: %s\n", err_msg);
//        sqlite3_free(err_msg);
//        sqlite3_close(db);
//        return 1;
//    }
//
//    rc = sqlite3_exec(db, sql_query, &my_callback, 0, err_msg);
//
//    if (rc != SQLITE_OK) {
//        fprintf(stderr, "SQL error: %s\n", err_msg);
//        sqlite3_free(err_msg);
//        sqlite3_close(db);
//        return 1;
//    }
//    sqlite3_close(db);
//}
//
//
//int main(int argc, char* argv[]) {
//    query();
//    return 0;
//}
