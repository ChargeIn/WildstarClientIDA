#include "../winhttp.h"

//----- (0000000140896C70) ----------------------------------------------------
__int64 __fastcall sub_140896C70(__int64 a1)
{
	int v2; // ecx
	__int64 v3; // rax
	int v4; // edi
	__int64 v5; // rax
	__int64 v6; // r8
	__int64* v7; // rax
	__int64* i; // rdx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rax

	if (*(_QWORD*)(a1 + 64) || !(unsigned int)((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 3))
		return *(_QWORD*)(a1 + 64);
	v2 = *(_DWORD*)(a1 + 56) - 1;
	if (v2)
	{
		if (v2 != 2)
			return *(_QWORD*)(a1 + 64);
		v3 = sub_1408819F0(dword_140C10F20, 80i64);
		v4 = 0;
		if (v3)
			v5 = sub_14087BDE0(v3, (__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 3);
		else
			v5 = 0i64;
		*(_QWORD*)(a1 + 64) = v5;
		if (v5 && (unsigned int)sub_14087C1E0(v5, *(_WORD*)(a1 + 76)) != 1)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 64) + 8i64))(*(_QWORD*)(a1 + 64));
			*(_QWORD*)(a1 + 64) = 0i64;
		}
		v6 = *(_QWORD*)(a1 + 64);
		if (v6 && *(_BYTE*)(a1 + 72))
		{
			v7 = *(__int64**)(a1 + 32);
			for (i = *(__int64**)(a1 + 40); v7 != i; v4 += *(_DWORD*)(v9 + 24))
				v9 = *v7++;
			*(_DWORD*)(v6 + 28) = v4;
			*(_DWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = v4;
			return *(_QWORD*)(a1 + 64);
		}
		return *(_QWORD*)(a1 + 64);
	}
	else
	{
		v11 = sub_1408819F0(dword_140C10F20, 32i64);
		if (v11)
		{
			result = sub_14087BE20(v11);
			*(_QWORD*)(a1 + 64) = result;
		}
		else
		{
			*(_QWORD*)(a1 + 64) = 0i64;
			return 0i64;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

