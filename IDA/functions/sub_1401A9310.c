#include "../winhttp.h"

//----- (00000001401A9310) ----------------------------------------------------
__int64* __fastcall sub_1401A9310(__int64 a1)
{
	int* v2; // rsi
	int v3; // ecx
	int* v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64* v7; // rdx
	__int64 v8; // rax
	int v9; // ecx

	if (!*(_QWORD*)(a1 + 104))
	{
		v2 = sub_14018B280(4056i64, 0);
		sub_1401A8D00(a1 + 8, *(_DWORD*)(a1 + 100) + 1);
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64 * (int)(*(_DWORD*)(a1 + 100))++) = v2;
		v3 = 1;
		v4 = v2;
		v5 = 38i64;
		do
		{
			v6 = v3++;
			v4 += 26;
			*((_QWORD*)v4 - 13) = &v2[26 * v6];
			--v5;
		} while (v5);
		*((_QWORD*)v2 + 494) = 0i64;
		*(_QWORD*)(a1 + 104) = v2;
	}
	v7 = *(__int64**)(a1 + 104);
	v8 = *v7;
	v9 = ++ * (_DWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 104) = v8;
	if (v9 > *(_DWORD*)(a1 + 120))
		*(_DWORD*)(a1 + 120) = v9;
	++* (_DWORD*)(a1 + 116);
	++* (_DWORD*)(a1 + 124);
	return v7;
}

