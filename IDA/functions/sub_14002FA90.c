#include "../winhttp.h"

//----- (000000014002FA90) ----------------------------------------------------
__int64 __fastcall sub_14002FA90(__int64 a1, __int64 a2, int a3, float a4)
{
	__int64 v4; // rsi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // r10
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v16; // [rsp+48h] [rbp+10h]

	v4 = a3;
	if (!a2)
		return 0i64;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) + 12) != *(_DWORD*)(a1 + 4852))
		return 0i64;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v8 = *(unsigned int*)(a1 + 4856);
	if (*(_DWORD*)(v7 + 16) != (_DWORD)v8
		|| (int)v4 < 0
		|| (int)v4 >= (int)((__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3))
	{
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 4800))
		sub_14002FE90(a1, a2);
	*(float*)(*(_QWORD*)(a1 + 4824) + 8 * v4 + 4) = a4;
	v9 = sub_1400323E0(v8, *(_DWORD*)(a1 + 4852), *(_DWORD*)(a1 + 4856));
	v11 = *(_QWORD*)(a1 + 4824);
	v12 = *(_QWORD*)(v9 + 24);
	v13 = *(_QWORD*)(v12 + 8);
	v14 = v12;
	if (v13)
	{
		v10 = *(unsigned int*)(v11 + 8 * v4);
		do
		{
			if (*(_DWORD*)(v13 + 32) < (unsigned int)v10)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v14 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		} while (v13);
	}
	if (v14 == v12 || (v16 = v14, *(_DWORD*)(v11 + 8 * v4) < *(_DWORD*)(v14 + 32)))
		v16 = *(_QWORD*)(v9 + 24);
	if (v16 == *(_QWORD*)(v9 + 24))
		return 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a2 + 328i64))(a2, a1 + 4784, v10, v16 + 40);
	return 1i64;
}
// 14002FB3C: variable 'v8' is possibly undefined
// 14002FBB2: variable 'v10' is possibly undefined

