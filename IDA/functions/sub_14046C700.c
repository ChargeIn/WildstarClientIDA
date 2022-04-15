#include "../winhttp.h"

//----- (000000014046C700) ----------------------------------------------------
__int64 __fastcall sub_14046C700(__int64 a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // edi
	int v7; // ebx
	__int64* v8; // rax
	int v9; // eax
	unsigned int v10; // ecx
	__int64 result; // rax
	int v12; // ecx
	int v13; // edi
	unsigned __int64 v14; // rbx
	__int64 i; // rbp
	__int64 v16; // rcx
	__int64 v17; // r8
	int v18; // eax
	unsigned int v19; // ecx

	v1 = *(_DWORD**)(a1 + 24);
	if (!v1)
		return 0i64;
	v3 = *(unsigned int*)(a1 + 128);
	if ((_DWORD)v3 == 4 || (_DWORD)v3 == 30)
		return 0i64;
	if (v1[82] && (v3 = qword_140C65970) != 0 && !*(_DWORD*)(qword_140C65970 + 8))
	{
		v4 = sub_1403D7BC0(qword_140C65970, v1[82]);
		v6 = 0;
		v7 = 0;
		if (v4)
		{
			v8 = *(__int64**)(v4 + 48);
			v5 = *v8;
			LOBYTE(v7) = *(_DWORD*)(*v8 + 12) == 0;
		}
		v9 = sub_140570810(v5, a1, 0i64);
		if (v7)
		{
			if (v9 == 2)
				return 1118;
			return v6;
		}
		else
		{
			v10 = 1120;
			if (v9 == 3)
				return 1122;
			return v10;
		}
	}
	else if (v1[31] || v1[32])
	{
		v18 = sub_1404A8180(v3, a1);
		v19 = 1120;
		if (v18)
			return 1118;
		return v19;
	}
	else
	{
		v12 = v1[27];
		v13 = 0;
		if (!v12)
		{
			v14 = 20i64;
			for (i = 0i64; ; ++i)
			{
				v16 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 208i64);
				v17 = *(unsigned int*)(v14 + v16);
				if ((_DWORD)v17)
				{
					if ((*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
						+ 24i64))(
							qword_140C659A0,
							*(_QWORD*)(qword_140C65898 + 120),
							v17,
							a1,
							0i64,
							0))
					{
						return *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 208i64) + 4 * i);
					}
				}
				else if (*(_DWORD*)(v14 + v16 - 20))
				{
					return *(unsigned int*)(v16 + 4 * i);
				}
				v14 += 4i64;
				if (v14 >= 0x28)
					return 0i64;
			}
		}
		result = 1118i64;
		LOBYTE(v13) = *(_DWORD*)(qword_140C65898 + 5780) == v12;
		if (v13)
			return 1120i64;
	}
	return result;
}
// 14046C77E: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C659A0: using guessed type __int64 qword_140C659A0;

