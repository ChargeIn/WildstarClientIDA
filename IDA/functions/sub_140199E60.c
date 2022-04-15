#include "../winhttp.h"

//----- (0000000140199E60) ----------------------------------------------------
__int64 sub_140199E60()
{
	int* v0; // rax
	int* v1; // rbx
	int* v2; // rax
	__int64 result; // rax

	v0 = sub_14018B280(80i64, 0);
	v1 = v0;
	if (v0)
	{
		*(_QWORD*)v0 = off_140B55048;
		v0[2] = 1;
		*(_QWORD*)v0 = off_140B5E6B0;
		v2 = sub_14018B280(80i64, 0);
		*((_QWORD*)v1 + 3) = v2;
		*((_QWORD*)v1 + 4) = 0i64;
		*(_BYTE*)v2 = 0;
		*(_QWORD*)(*((_QWORD*)v1 + 3) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v1 + 3) + 16i64) = *((_QWORD*)v1 + 3);
		*(_QWORD*)(*((_QWORD*)v1 + 3) + 24i64) = *((_QWORD*)v1 + 3);
		*((_QWORD*)v1 + 7) = 0i64;
		*((_QWORD*)v1 + 8) = 0i64;
		*((_QWORD*)v1 + 9) = 0i64;
		result = 0i64;
		qword_140C63748 = (__int64)v1;
	}
	else
	{
		result = 0i64;
		qword_140C63748 = 0i64;
	}
	return result;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5E6B0: using guessed type __int64 (__fastcall *off_140B5E6B0[8])();
// 140C63748: using guessed type __int64 qword_140C63748;

