#include "../winhttp.h"

//----- (00000001401E5380) ----------------------------------------------------
void __fastcall sub_1401E5380(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rcx
	unsigned int v4; // edx
	BOOL v5; // edi
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	while (*(_QWORD*)(a1 + 1256))
	{
		v2 = *(_QWORD*)(a1 + 1256);
		if (v2)
		{
			sub_1401E50B0(*(_QWORD**)(a1 + 1256));
			sub_14018B900(v2, 0);
		}
	}
	v3 = *(_QWORD*)(a1 + 1264);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 1264) = 0i64;
	}
	v4 = *(_DWORD*)(a1 + 1216);
	if (v4 == 7)
	{
		if (!*(_DWORD*)(a1 + 1204) || !*(_DWORD*)(a1 + 1208) || *(_DWORD*)(a1 + 1220) != 7)
		{
			++* (_DWORD*)(a1 + 1212);
			*(_DWORD*)(a1 + 1204) = 1;
			*(_DWORD*)(a1 + 1208) = 1;
			*(_DWORD*)(a1 + 1220) = 7;
		}
	}
	else
	{
		v5 = *(_DWORD*)(a1 + 1220) < 7u;
		sub_1401E57F0(a1, v4);
		*(_QWORD*)(a1 + 1204) = 0i64;
		*(_DWORD*)(a1 + 1220) = 7;
		if (v5)
		{
			v6[0] = -1;
			sub_1401E55D0(a1, (__int64)v6);
		}
	}
}
// 1401E5380: using guessed type int var_18[6];

