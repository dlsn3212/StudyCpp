#include <stdio.h>

class DBQuery
{
private:
	static int hCon;
	//int nResult;

public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
};

int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	hCon = 1234;
	printf("연결되었습니다.!\n");
}

void DBQuery::DBDisConnect()
{
	hCon = NULL;
	puts("연결이 끊어졌습니다.!");
}

bool DBQuery::RunQuery(const char* SQL)
{
	puts(SQL);
	return true;
}

int main()
{
	DBQuery::DBConnect("Secret", "Adult", "doemfdmsrkfk");
	DBQuery Q1, Q2, Q3;

	Q1.RunQuery("SELECT * FROM tblBuja WHERE 나랑 친한 사람");

	DBQuery::DBDisConnect();
}