#include "../winhttp.h"

//----- (00000001403746B0) ----------------------------------------------------
__int64 __fastcall sub_1403746B0(__int64 a1)
{
	__int64 result; // rax

	result = sub_140374420();
	if ((int)result >= 0)
		return sub_140367440(*(_QWORD*)(a1 + 16), a1);
	return result;
}
// 140374420: using guessed type __int64 sub_140374420(void);

