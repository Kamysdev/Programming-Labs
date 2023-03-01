//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "./lib/sqlite3.h"
//
//
//#define str 100
//
///*
//Структура должна описывать результат запроса.
//В ней должны находиться поля, которые возвращает запрос.
//*/
//struct Result {
//    char first_name[str];
//    char last_name[str];
//    char job_id[str];
//    char hire_date[str];
//    char department_name[str];
//};
//
///*
//Функция выводит массив с результатами запроса в виде:
//{имя, фамилия, id должности, дата приёма на работу, название отдела}
//{имя, фамилия, id должности, дата приёма на работу, название отдела}
//{имя, фамилия, id должности, дата приёма на работу, название отдела}
//...
//*/
//void show_result(struct Result *result, int size){
//    for (int i = 0; i < size; ++i){
//        printf("{%s, %s, %s, %s, %s}\n", result[i].first_name, result[i].last_name,
//            result[i].job_id, result[i].hire_date, result[i].department_name);
//    }
//}
//
//
///*
//Реализовать функцию, выполняющую параметрический запрос, описанный в функции main.
//Функция должна выполнять подготовленный запрос, переданный во втором параметре;
//в третьем и четвёртом параметре передаётся диапазон дат, который задаёт интересующий период найма сотрудника.
//Функция не должна выводить что-то на терминал, результат должен записываться в массив dest,
//память для которого выделяется в этой же функции. Функция возвращает размер массива dest (количество элементов)
//или 0 в случае ошибки.
//*/
//int get_result(struct Result **dest, sqlite3_stmt *stmt, char *lo_hire_date, char *hi_hire_date){
//    *dest = NULL;
//    *dest = malloc(sizeof(struct Result));
//    int res_length = 0;
//    sqlite3_bind_text(stmt, 1, lo_hire_date, -1, SQLITE_TRANSIENT);
//    sqlite3_bind_text(stmt, 2, hi_hire_date, -1, SQLITE_TRANSIENT);
//    while (sqlite3_step(stmt) == SQLITE_ROW) {
//        *dest = realloc(*dest, (res_length + 1) * sizeof(struct Result));
//        strcpy_s((*dest)[res_length].first_name, str, sqlite3_column_text(stmt, 0));
//        strcpy_s((*dest)[res_length].last_name, str, sqlite3_column_text(stmt, 1));
//        strcpy_s((*dest)[res_length].job_id, str, sqlite3_column_text(stmt, 2));
//        strcpy_s((*dest)[res_length].hire_date, str, sqlite3_column_text(stmt, 3));
//        strcpy_s((*dest)[res_length].department_name, str, sqlite3_column_text(stmt, 4));
//        res_length++;
//    }
//
//    sqlite3_reset(stmt);
//    return res_length;
//}
//
//int main(int argc, char *argv[]){
//    sqlite3 *db;
//    int rc = sqlite3_open("hr.db", &db);
//    
//    if(rc != SQLITE_OK){
//        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
//        sqlite3_close(db);
//        return 1;
//    }
//
//    /*
//    Строка sql_query должна содержать запрос, который возвращает информацию о сотрудниках,
//    которые были наняты в определённый период. Диапазон дат должен задаваться параметрами.
//    Запрос должен возвращать имя, фамилию сотрудника, id должности, дату приёма на работу,
//    название отдела, где работает сотрудник.
//    */
//    char* sql_query = "SELECT first_name, last_name, job_id, hire_date, department_name "
//        "FROM employees INNER JOIN departments ON departments.department_id = employees.department_id "
//        "WHERE hire_date BETWEEN ? AND ?";
//    sqlite3_stmt *stmt;
//    rc = sqlite3_prepare_v2(db, sql_query, -1, &stmt, NULL);
//
//    if(rc != SQLITE_OK){
//        fprintf(stderr, "Cannot open prepare statement: %s\n", sqlite3_errmsg(db));
//        sqlite3_close(db);
//        return 2;
//    }
//
//    //Код для проверки
//    struct Result *result;
//    int result_size = get_result(&result, stmt, "2007-11-05", "2009-07-05");
//    printf("first query:\n");
//    show_result(result, result_size);
//    if(result_size > 0){
//        free(result);
//    }
//
//    result_size = get_result(&result, stmt, "2002-01-10", "2005-10-15");
//    printf("\nsecond query:\n");
//    show_result(result, result_size);
//    if(result_size > 0){
//        free(result);
//    }
//
//    result_size = get_result(&result, stmt, "2006-11-05", "2008-07-30");
//    printf("\nthird query:\n");
//    show_result(result, result_size);
//    if(result_size > 0){
//        free(result);
//    }
//
//    sqlite3_finalize(stmt);
//    sqlite3_close(db);
//
//    return 0;
//}