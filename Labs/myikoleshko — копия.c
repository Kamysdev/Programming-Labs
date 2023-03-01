//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "./lib/sqlite3.h"
//
//int query(sqlite3_stmt *stmt, double rs)								// Создаём int параметрического запроса
//{
//	sqlite3_bind_double(stmt, 1, rs);									// Заносится параметр в наш запрос
//	int count = 0;
//	while (sqlite3_step(stmt) == SQLITE_ROW) {
//		count++;
//	}
//
//	for (int i = 0; i < count; ++i)
//	{
//		sqlite3_step(stmt);
//		char *tmp_c = (char*)sqlite3_column_text(stmt, 0);
//		printf("%s\n", tmp_c);
//	}
//	return count;
//}
//
//
//int main(int argc, char* argv[])
//{
//	sqlite3 *db;														// Подключение к бд
//	int rc = sqlite3_open("test.db", &db);								// Присваиваем переменную rc к бд
//	if (rc != SQLITE_OK)
//	{
//		printf("Can't connect to the DB: %s/n", sqlite3_errmsg(db));	// Выводим ошибку подключения, если такая существует
//		sqlite3_close(db);												// Закрываем db
//		return -1;														// Возвращаем ошибку
//	}
//	
//	char* sqlite_query = "SELECT name, price from "						// Создаем запрос
//						"Cars "
//						"WHERE price > ?; ";							// ? - обозначение параметра в SQL запросе
//
//	sqlite3_stmt *stmt;													// Передаём запрос в указатель stmt
//	rc = sqlite3_prepare_v2(db, sqlite_query,							// Компилируем понятный для SQL запрос, в котором содержится сам запрос
//							-1, &stmt, NULL);							/// Параметры: сама bd, наш запрос, память, присваевоемое значение, метод NULL
//	
//	// В случае, если запрос сформирован некорректно, выводим ошибку и возвращаем другой код ошибки:
//	if (rc != SQLITE_OK)
//	{
//		printf("Can't connect to the DB: %s/n", sqlite3_errmsg(db));	// Выводим ошибку подключения, если такая существует
//		sqlite3_close(db);												// Закрываем db
//		return -2;														// Возвращаем ошибку
//	}
//
//	double rs; int flag = 0;
//	while (flag == 0)
//	{
//		scanf_s("%lf", &rs);											// Ввод параметра с клавиатуры
//		if (rs < 100000000)												// проверка корректности воода параметра
//		{
//			flag = 1;
//		}
//		else
//		{
//			printf("Error of input RS\n");
//		}
//	}
//	query(stmt, rs);
//
//	return SQLITE_OK;
//}
