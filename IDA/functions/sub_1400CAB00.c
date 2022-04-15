#include "../winhttp.h"

//----- (00000001400CAB00) ----------------------------------------------------
void __fastcall sub_1400CAB00(__int64 a1, float a2, float a3)
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
	if (v5 && (a2 != *(float*)(v5 + 72) || fabs(a3) != *(float*)(v5 + 76)))
	{
		*(float*)(v5 + 72) = a2;
		if (a3 == 0.0)
		{
			*(float*)(v5 + 64) = a2;
		}
		else if (a2 != *(float*)(v5 + 64))
		{
			*(float*)(v5 + 76) = fabs(a3);
			goto LABEL_13;
		}
		*(_DWORD*)(v5 + 76) = 0;
	LABEL_13:
		*(_DWORD*)(v5 + 56) = dword_140C636A8;
	}
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C636A8: using guessed type int dword_140C636A8;

