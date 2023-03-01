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
//int query(sqlite3_stmt *stmt, char *title)								// ������ int ���������������� �������
//{
//	sqlite3_reset(stmt);
//	sqlite3_bind_text(stmt, 1, title, -1, SQLITE_STATIC);				// ��������� �������� � ��� ������
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
//	sqlite3 *db;														// ����������� � ��
//	int rc = sqlite3_open("movies.db", &db);							// ����������� ���������� rc � ��
//	error(rc, SQLITE_OK, db);
//	
//	char* sqlite_query = "SELECT act_fname, role FROM Actor A "			// ������� ������
//		"JOIN movie_cast MC on A.act_id = MC.act_id "
//		"JOIN movie M on MC.mov_id = M.mov_id "							// ? - ����������� ��������� � SQL �������
//		"WHERE M.mov_title = ? ;";
//
//	sqlite3_stmt *stmt;													// ������� ������ � ��������� stmt
//	rc = sqlite3_prepare_v2(db, sqlite_query,							// ����������� �������� ��� SQL ������, � ������� ���������� ��� ������
//							-1, &stmt, NULL);							/// ���������: ���� bd, ��� ������, ������, ������������� ��������, ����� NULL
//	
//	error(rc, SQLITE_OK, db);
//	char *title = "Titanic";
//	int res = query(stmt, title);
//	sqlite3_close(db);
//
//	return SQLITE_OK;
//}
