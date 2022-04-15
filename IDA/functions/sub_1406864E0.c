#include "../winhttp.h"

//----- (00000001406864E0) ----------------------------------------------------
__int64 __fastcall sub_1406864E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r14
	unsigned int* v5; // r14
	int v6; // ebp
	_BOOL8 v7; // r15
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // esi
	__int64 v11; // r12
	int* v12; // r14
	int v13; // ebp
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64* v21; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = *(unsigned int**)(v4 + 8)) != 0i64)
	{
		v6 = (v5[3] >> 3) & 1;
		v7 = sub_14048F880(v3, *v5);
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		v10 = 0;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v11 = v6;
		v12 = (int*)(v5 + 11);
		do
		{
			v13 = *v12;
			if (*v12 == -1)
				break;
			v14 = a1[2];
			++v10;
			*(_DWORD*)(v14 + 8) = 3;
			*(double*)v14 = (double)v10;
			v15 = a1[4];
			a1[2] += 16i64;
			if (*(_QWORD*)(v15 + 120) >= *(_QWORD*)(v15 + 112))
				sub_14005E2C0((__int64)a1);
			v16 = a1[2];
			v17 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v16 + 8) = 5;
			*(_QWORD*)v16 = v17;
			a1[2] += 16i64;
			if (v11)
			{
				sub_140058710((__int64)a1, (unsigned __int64*)"nGoalCount", 0xAui64);
				v20 = a1[2];
				*(_DWORD*)(v20 + 8) = 3;
				*(double*)v20 = (double)(v13 / 0x3E8u);
			}
			else if (v7)
			{
				sub_140058710((__int64)a1, (unsigned __int64*)"nGoalCount", 0xAui64);
				v18 = a1[2];
				*(_QWORD*)v18 = 0x4059000000000000i64;
				*(_DWORD*)(v18 + 8) = 3;
			}
			else
			{
				sub_140058710((__int64)a1, (unsigned __int64*)"nGoalCount", 0xAui64);
				v19 = a1[2];
				*(_DWORD*)(v19 + 8) = 3;
				*(double*)v19 = (double)v13;
			}
			a1[2] += 16i64;
			v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			++v12;
		} while ((unsigned int)v10 < 3);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140686558: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

