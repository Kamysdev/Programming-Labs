//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "./lib/sqlite3.h"
//
//int error(int rc, int OK, int *db)
//{
//	if (rc != SQLITE_OK)
//	{
//		printf("Can't connect to the DB: %s\n", sqlite3_errmsg(db));
//		sqlite3_close(db);
//		return -1;
//	}
//
//	return 0;
//}
//
//int query(sqlite3_stmt *stmt, char *title)								// Создаём int параметрического запроса
//{
//	sqlite3_reset(stmt);
//	sqlite3_bind_text(stmt, 1, title, -1, SQLITE_STATIC);				// Заносится параметр в наш запрос
//	int count = 0;
//	while (sqlite3_step(stmt) == SQLITE_ROW) {
//		count++;
//	}
//	for (int i = 0; i < count; ++i)
//	{
//		sqlite3_step(stmt);
//		printf("%.*s : ", 1, sqlite3_column_text(stmt, 0));
//		printf("%.*s\n", 1, sqlite3_column_text(stmt, 1));
//	}
//	sqlite3_reset(stmt);
//	return count;
//}
//
//int main(int argc, char* argv[])
//{
//	sqlite3 *db;														// Подключение к бд
//	int rc = sqlite3_open("movies.db", &db);							// Присваиваем переменную rc к бд
//	error(rc, SQLITE_OK, db);
//	
//	char* sqlite_query = "SELECT act_fname, role FROM Actor A "			// Создаем запрос
//		"JOIN movie_cast MC on A.act_id = MC.act_id "
//		"JOIN movie M on MC.mov_id = M.mov_id "							// ? - обозначение параметра в SQL запросе
//		"WHERE M.mov_title = ? ;";
//
//	sqlite3_stmt *stmt;													// Передаём запрос в указатель stmt
//	rc = sqlite3_prepare_v2(db, sqlite_query,							// Компилируем понятный для SQL запрос, в котором содержится сам запрос
//							-1, &stmt, NULL);							/// Параметры: сама bd, наш запрос, память, присваевоемое значение, метод NULL
//	
//	error(rc, SQLITE_OK, db);
//	char *title = "Titanic";
//	int res = query(stmt, title);
//	sqlite3_close(db);
//
//	return SQLITE_OK;
//}
