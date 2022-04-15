#include "../winhttp.h"

//----- (00000001405EA360) ----------------------------------------------------
__int64 __fastcall sub_1405EA360(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int* v7; // rax
	int v8; // r11d
	int v9; // eax
	unsigned int v10; // edx
	int v11; // edi
	int v12; // r8d
	__int64 v13; // rsi
	__int64 v14; // rax
	int v15; // r8d
	__int64 v16; // rdx
	__int64 result; // rax
	__int64 v18; // rax

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v7 = *(unsigned int**)(v5 + 112);
		v8 = v7[97];
		if (v7[6] == 7)
		{
			v9 = sub_140564FB0(v6, *v7);
			v8 = 0;
			v11 = v9;
			v12 = 0;
			if (v9 > 0)
			{
				v13 = qword_140C65B70;
				do
				{
					v14 = sub_140564F40(v13, v10, v12);
					if (v14)
						v8 += *(_DWORD*)(v14 + 16);
					v12 = v15 + 1;
				} while (v12 < v11);
			}
		}
		v16 = a1[2];
		*(_DWORD*)(v16 + 8) = 3;
		result = 1i64;
		*(double*)v16 = (float)((float)v8 * 0.001);
		a1[2] += 16i64;
	}
	else
	{
		v18 = a1[2];
		*(_QWORD*)v18 = 0i64;
		*(_DWORD*)(v18 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 1405EA3EE: variable 'v6' is possibly undefined
// 1405EA413: variable 'v10' is possibly undefined
// 1405EA41D: variable 'v8' is possibly undefined
// 1405EA421: variable 'v15' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

