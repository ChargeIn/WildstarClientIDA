#include "../winhttp.h"

//----- (000000014026BF80) ----------------------------------------------------
__int64 __fastcall sub_14026BF80(__int64 a1, int a2)
{
	__int64 v2; // rbp
	unsigned int* v4; // r14
	unsigned int i; // edi
	__int64 v6; // rdx
	unsigned int j; // edi
	__int64 v8; // rdx
	unsigned int k; // esi
	__int64 result; // rax

	v2 = a2;
	if (a2 != *(_DWORD*)(a1 + 7088))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 696i64))(
			*(_QWORD*)(a1 + 6608),
			*(_QWORD*)(a1 + 8i64 * a2 + 6840));
		v4 = (unsigned int*)(216 * v2 + a1 + 1184);
		for (i = 0; i < v4[19]; ++i)
		{
			v6 = v4[i + 20];
			if (*(_DWORD*)(a1 + 4 * v6 + 9968) != 1)
			{
				*(_DWORD*)(a1 + 4 * v6 + 9968) = 1;
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 816i64))(
					*(_QWORD*)(a1 + 6608),
					v6,
					1i64);
			}
		}
		for (j = 0; j < v4[37]; ++j)
		{
			v8 = v4[j + 38];
			if (*(_DWORD*)(a1 + 4 * v8 + 9968) != -2147483647)
			{
				*(_DWORD*)(a1 + 4 * v8 + 9968) = -2147483647;
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 816i64))(
					*(_QWORD*)(a1 + 6608),
					v8,
					2147483649i64);
			}
		}
		for (k = *v4; k < *(_DWORD*)(a1 + 9708); ++k)
		{
			*(_QWORD*)(a1 + 16 * (k + 607i64)) = 0i64;
			*(_QWORD*)(a1 + 16i64 * k + 9720) = 0i64;
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD**)(a1 + 6608) + 800i64))(
				*(_QWORD*)(a1 + 6608),
				k,
				0i64,
				0i64,
				0);
			if (*(_DWORD*)(a1 + 4i64 * k + 9968) != 1)
			{
				*(_DWORD*)(a1 + 4i64 * k + 9968) = 1;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 816i64))(
					*(_QWORD*)(a1 + 6608),
					k,
					1i64);
			}
		}
		*(_DWORD*)(a1 + 7088) = v2;
		result = *v4;
		*(_DWORD*)(a1 + 9708) = result;
	}
	return result;
}

