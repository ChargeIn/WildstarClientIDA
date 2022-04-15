#include "../winhttp.h"

//----- (00000001405D9A20) ----------------------------------------------------
__int64 __fastcall sub_1405D9A20(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64 i; // rsi
	__int64 j; // rbx
	__int64 v6; // rcx
	unsigned int v7; // edx
	__int64 v8; // rcx

	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v3 = result;
	if (result == *(_QWORD*)(qword_140C65898 + 120))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
		for (i = *(_QWORD*)(v3 + 5576); i; i = *(_QWORD*)(i + 24))
		{
			for (j = *(_QWORD*)(i + 8); j; j = *(_QWORD*)(j + 16))
			{
				if (j != a1
					&& *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(j + 80) + 312i64) + 112i64) + 4i64) == *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 312i64) + 112i64) + 4i64)
					&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)j + 56i64))(j) == *(_DWORD*)(*(_QWORD*)(a1 + 176)
						+ 16i64))
				{
					*(_DWORD*)(j + 336) = 0;
				}
			}
		}
		v6 = *(_QWORD*)(a1 + 176);
		result = *(unsigned int*)(v6 + 64);
		*(_DWORD*)(a1 + 336) = result;
		v7 = *(_DWORD*)(v6 + 68);
		if (v7
			&& (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (result = sub_1405A5B90(qword_140C65898, v7)) != 0
				|| (result = sub_1407A0FD0(qword_140C65B70, v7)) != 0))
		{
			return sub_140564410(v8, *(_DWORD*)(a1 + 336), *(int**)(*(_QWORD*)(result + 8) + 8i64));
		}
		else
		{
			*(_DWORD*)(a1 + 336) = 0;
		}
	}
	return result;
}
// 1405D9B17: variable 'v7' is possibly undefined
// 1405D9B3E: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

