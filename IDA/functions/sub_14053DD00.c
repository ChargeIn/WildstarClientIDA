#include "../winhttp.h"

//----- (000000014053DD00) ----------------------------------------------------
__int64 __fastcall sub_14053DD00(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rcx
	unsigned int v4; // r8d
	int v5; // eax
	unsigned int v6; // ecx
	__int64 v7; // rcx
	int v8; // edx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rdx
	int v15; // r8d
	__int64* v16; // rcx
	__int64 v17; // rax
	int v18; // eax
	__int64 v19; // rcx
	unsigned __int64 v20; // [rsp+20h] [rbp-38h] BYREF
	__int128 v21; // [rsp+28h] [rbp-30h]
	void(__fastcall * v22)(int, __int64); // [rsp+38h] [rbp-20h]
	__int64 v23; // [rsp+40h] [rbp-18h]

	v1 = *(_QWORD*)(a1 + 312);
	if (*(_DWORD*)(*(_QWORD*)(v1 + 112) + 24i64) == 5)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 120);
		if (v3)
		{
			v4 = *(_DWORD*)(a1 + 340);
			if (v4 == *(_DWORD*)(v3 + 8))
			{
				v5 = *(_DWORD*)(a1 + 344);
				*(_QWORD*)((char*)&v21 + 4) = 0i64;
				LODWORD(v21) = v5;
				v6 = *(_DWORD*)(*(_QWORD*)(v1 + 8) + 48i64);
				v23 = a1;
				v20 = __PAIR64__(v4, v6);
				v7 = *(_QWORD*)(a1 + 528);
				v22 = sub_1405465A0;
				if (v7)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					*(_QWORD*)(a1 + 528) = 0i64;
				}
				if (a1 != -528)
					sub_14077BD10((__int64*)(a1 + 528), (unsigned int*)&v20);
			}
		}
	}
	v8 = *(_DWORD*)(a1 + 340);
	v9 = qword_140C65898;
	*(_DWORD*)(a1 + 336) = 2;
	result = sub_1403D90D0(v9, v8);
	v11 = result;
	if (result)
	{
		if ((unsigned int)sub_1407A1820(*(_QWORD*)(a1 + 312), (_DWORD*)(a1 + 104))
			|| *(_DWORD*)(a1 + 80) && *(_DWORD*)(a1 + 188))
		{
			sub_1404697A0(v11, *(_DWORD*)(a1 + 92));
		}
		v12 = sub_140561C30(qword_140C65B70, *(_DWORD*)(a1 + 92));
		v13 = v12;
		if (v12)
		{
			v14 = *(_QWORD*)(v12 + 312);
			if ((*(_BYTE*)(*(_QWORD*)(v14 + 112) + 264i64) & 1) != 0)
			{
				v15 = *(_DWORD*)(v12 + 80) + 1000;
				if (v11 == *(_QWORD*)(qword_140C65898 + 25744))
					sub_14039DD70(qword_140C65898, v14, v15, 0);
				else
					sub_14046BB00(v11, *(_DWORD*)(a1 + 344), v15, 0);
			}
			if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 312) + 112i64) + 264i64) & 0x4000000) != 0)
			{
				v16 = (__int64*)(v11 + 5624);
				if (!*(_QWORD*)(a1 + 24))
				{
					*(_QWORD*)(a1 + 24) = v16;
					*(_QWORD*)(a1 + 32) = *v16;
					*v16 = a1;
					v17 = *(_QWORD*)(a1 + 32);
					if (v17)
						*(_QWORD*)(v17 + 24) = a1 + 32;
				}
				sub_140466E60(v11);
			}
		}
		sub_140540C10(a1);
		v18 = sub_1403982A0(qword_140C65898, 1);
		v19 = qword_140C65898;
		if (*(_DWORD*)(a1 + 304) == v18)
			return Apollo_LUAEvent(*(_QWORD*)(v19 + 29504), "SprintStateUpdated", "b", 1i64, v20, v21, v22, v23);
		result = sub_1403982A0(qword_140C65898, 0);
		if (*(_DWORD*)(a1 + 304) == (_DWORD)result)
		{
			LODWORD(result) = dword_140C45DE0;
			if (*(_DWORD*)qword_140C63750 < dword_140C45DE0)
				LODWORD(result) = *(_DWORD*)qword_140C63750;
			result = (int)result;
			if (dword_140C45DF0[(int)result] == 1)
			{
				v19 = qword_140C65898;
				return Apollo_LUAEvent(*(_QWORD*)(v19 + 29504), "SprintStateUpdated", "b", 1i64, v20, v21, v22, v23);
			}
		}
	}
	return result;
}
// 140C45DE0: using guessed type int dword_140C45DE0;
// 140C45DF0: using guessed type int dword_140C45DF0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

