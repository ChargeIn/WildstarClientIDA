#include "../winhttp.h"

//----- (00000001406532B0) ----------------------------------------------------
__int64 __fastcall sub_1406532B0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int16* v6; // rax
	__int64 v7; // r8
	unsigned __int16* v8; // rdi
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v13; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2)
		goto LABEL_17;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	v4 = v3;
	if (!v3)
		goto LABEL_17;
	v5 = (unsigned int)~(*(_DWORD*)(v3 + 40) >> 2);
	if ((v5 & 1) == 0)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	LABEL_18:
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v6 = sub_14034BDD0(v5, 16235);
	if (!v6)
	{
	LABEL_17:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		goto LABEL_18;
	}
	v7 = *(unsigned int*)(v4 + 60);
	if (!(_DWORD)v7)
		v7 = *(unsigned int*)(v4 + 56);
	sub_14018EFA0(&v12, (__int64)v6, v7);
	v8 = v13;
	v9 = (unsigned __int64*)sub_14018F0E0(&v12, v13)[1];
	if (v9)
	{
		v10 = -1i64;
		do
			++v10;
		while (*((_BYTE*)v9 + v10));
		sub_140058710(a1, v9, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (v8)
	{
		sub_14018B900((__int64)v8, 0);
		return 1i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

