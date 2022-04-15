#include "../winhttp.h"

//----- (00000001407F8018) ----------------------------------------------------
HANDLE sub_1407F8018()
{
	HANDLE result; // rax

	result = CreateFileW(L"CONOUT$", 0x40000000u, 3u, 0i64, 3u, 0, 0i64);
	qword_140C10A80 = result;
	return result;
}

