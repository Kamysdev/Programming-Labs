//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "./lib/sqlite3.h"
//
//int query(sqlite3_stmt *stmt, double rs)								// ������ int ���������������� �������
//{
//	sqlite3_bind_double(stmt, 1, rs);									// ��������� �������� � ��� ������
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
//	sqlite3 *db;														// ����������� � ��
//	int rc = sqlite3_open("test.db", &db);								// ����������� ���������� rc � ��
//	if (rc != SQLITE_OK)
//	{
//		printf("Can't connect to the DB: %s/n", sqlite3_errmsg(db));	// ������� ������ �����������, ���� ����� ����������
//		sqlite3_close(db);												// ��������� db
//		return -1;														// ���������� ������
//	}
//	
//	char* sqlite_query = "SELECT name, price from "						// ������� ������
//						"Cars "
//						"WHERE price > ?; ";							// ? - ����������� ��������� � SQL �������
//
//	sqlite3_stmt *stmt;													// ������� ������ � ��������� stmt
//	rc = sqlite3_prepare_v2(db, sqlite_query,							// ����������� �������� ��� SQL ������, � ������� ���������� ��� ������
//							-1, &stmt, NULL);							/// ���������: ���� bd, ��� ������, ������, ������������� ��������, ����� NULL
//	
//	// � ������, ���� ������ ����������� �����������, ������� ������ � ���������� ������ ��� ������:
//	if (rc != SQLITE_OK)
//	{
//		printf("Can't connect to the DB: %s/n", sqlite3_errmsg(db));	// ������� ������ �����������, ���� ����� ����������
//		sqlite3_close(db);												// ��������� db
//		return -2;														// ���������� ������
//	}
//
//	double rs; int flag = 0;
//	while (flag == 0)
//	{
//		scanf_s("%lf", &rs);											// ���� ��������� � ����������
//		if (rs < 100000000)												// �������� ������������ ����� ���������
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
