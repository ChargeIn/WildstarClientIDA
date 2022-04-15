#include "../winhttp.h"

//----- (000000014064A6D0) ----------------------------------------------------
__int64 __fastcall sub_14064A6D0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rdi
	int v5; // eax
	int v7; // eax
	__int64 v8; // rcx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_6;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	v4 = (_DWORD*)v3;
	if (!v3 || (*(_BYTE*)(v3 + 40) & 1) != 0)
		goto LABEL_6;
	v5 = *(_DWORD*)(v3 + 128);
	if (v5 == 30)
	{
		if (v4[110] != 3)
		{
		LABEL_6:
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			goto LABEL_7;
		}
	}
	else if (v5 == 23)
	{
		goto LABEL_6;
	}
	v7 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v4 + 72i64))(v4);
	if (v4[32] == 10)
		v7 = 0;
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)v7;
LABEL_7:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

