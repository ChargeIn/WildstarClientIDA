#include "../winhttp.h"

//----- (00000001406EF590) ----------------------------------------------------
__int64 __fastcall sub_1406EF590(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	unsigned int v8; // edx
	int v9; // eax
	unsigned int* v10; // r10
	__int64 v11; // rax
	_QWORD** v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rcx
	BOOL v15; // eax
	BOOL* v16; // rcx
	_DWORD* v17; // rax

	if (qword_140C65970 && qword_140C65898 && (v2 = *(_QWORD*)(qword_140C65898 + 120)) != 0 && !*(_DWORD*)(v2 + 592))
	{
		if (*(_DWORD*)(qword_140C65970 + 8) == 3)
		{
			v5 = sub_140056AB0(a1, 1u);
			if (v5
				&& (v6 = *(_QWORD*)(v5 + 8)) != 0
				&& (v7 = *(_QWORD*)(v6 + 8)) != 0
				&& (v8 = *(_DWORD*)(*(_QWORD*)v7 + 12i64), v8 <= 0x1B)
				&& (v9 = 134250504, _bittest(&v9, v8))
				&& sub_140721EF0(v7, *(_DWORD*)(*(_QWORD*)v7 + 20i64)))
			{
				v11 = sub_1403D7BC0(qword_140C65970, *v10);
				v12 = (_QWORD**)v11;
				if (v11
					&& !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 56i64))(v11)
					&& (v13 = sub_14077CCE0(v12, 0i64)) != 0)
				{
					v15 = sub_14077D110(v14, v13);
					v16 = (BOOL*)a1[2];
					v16[2] = 1;
					*v16 = v15;
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
				}
				a1[2] += 16i64;
				return 1i64;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
		else
		{
			v3 = (_DWORD*)a1[2];
			*v3 = 0;
			v3[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		v17 = (_DWORD*)a1[2];
		*v17 = 0;
		v17[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406EF65B: variable 'v10' is possibly undefined
// 1406EF696: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

