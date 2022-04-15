#include "../winhttp.h"

//----- (0000000140499320) ----------------------------------------------------
int* sub_140499320()
{
	int* result; // rax
	int* v1; // rbx
	int* v2; // rax

	result = sub_14018B280(112i64, 0);
	v1 = result;
	if (result)
	{
		sub_140499440(result);
		*(_QWORD*)v1 = off_140B676A0;
		v2 = sub_14018B280(48i64, 0);
		*((_QWORD*)v1 + 12) = 0i64;
		*((_QWORD*)v1 + 11) = v2;
		*(_BYTE*)v2 = 0;
		*(_QWORD*)(*((_QWORD*)v1 + 11) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v1 + 11) + 16i64) = *((_QWORD*)v1 + 11);
		*(_QWORD*)(*((_QWORD*)v1 + 11) + 24i64) = *((_QWORD*)v1 + 11);
		return v1;
	}
	return result;
}
// 140B676A0: using guessed type __int64 (__fastcall *off_140B676A0[23])();

