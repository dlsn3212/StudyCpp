#include <stdio.h>

#include <stdio.h>

enum E_Error { OUTOFMEMORY, OVERRANGE, HARDFULL, STACKFULL};

class Exception {
private:
	int ErrorCode;
public:
	Exception(int ae) : ErrorCode(ae) {  }
	int GetErrorCode() { return ErrorCode; }
	void Report() {
		switch (ErrorCode)
		{
		case 1:
			puts("[ERROR] �޸� ����");
			break;
		case 2:
			puts("[ERROR]���� ���� �ʰ�");
			break;
		case 3:
			puts("[ERROR]�ϵ� ��ũ�� ���� ��");
			break;
		case 4:
			puts("[ERROR] ���� �� ��");
			break;
		}

	}
};
void report() throw(E_Error)
{
	if (true/*���� �߻�*/) throw HARDFULL;

}

int main()
{
	try {
		report();
		puts("�۾��� �Ϸ��߽��ϴ�.");
	}
	catch (Exception &e) {
		
	}
}