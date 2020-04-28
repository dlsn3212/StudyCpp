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
			puts("[ERROR] 메모리 부족");
			break;
		case 2:
			puts("[ERROR]연산 범위 초과");
			break;
		case 3:
			puts("[ERROR]하드 디스크가 가득 참");
			break;
		case 4:
			puts("[ERROR] 스택 꽉 참");
			break;
		}

	}
};
void report() throw(E_Error)
{
	if (true/*예외 발생*/) throw HARDFULL;

}

int main()
{
	try {
		report();
		puts("작업을 완료했습니다.");
	}
	catch (Exception &e) {
		
	}
}