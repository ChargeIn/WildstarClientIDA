#include "../winhttp.h"

//----- (00000001400CA960) ----------------------------------------------------
void __fastcall sub_1400CA960(__int64 a1, float a2, float a3)
{
	__int64 v4; // rax
	__int64 v5; // rcx

	if (!*(_QWORD*)(a1 + 608) && (a2 != 1.0 || a3 != 0.0))
	{
		v4 = (__int64)sub_14018B280(112i64, 0);
		if (v4)
			v4 = sub_1400C5690(v4);
		*(_QWORD*)(a1 + 608) = v4;
	}
	v5 = *(_QWORD*)(a1 + 608);
	if (v5 && (a2 != *(float*)(v5 + 104) || fabs(a3) != *(float*)(v5 + 108)))
	{
		*(float*)(v5 + 104) = a2;
		if (a3 == 0.0)
		{
			*(float*)(v5 + 96) = a2;
		}
		else if (a2 != *(float*)(v5 + 96))
		{
			*(float*)(v5 + 108) = fabs(a3);
			goto LABEL_13;
		}
		*(_DWORD*)(v5 + 108) = 0;
	LABEL_13:
		*(_DWORD*)(v5 + 88) = dword_140C636A8;
	}
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C636A8: using guessed type int dword_140C636A8;

