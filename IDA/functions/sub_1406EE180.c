#include "../winhttp.h"

//----- (00000001406EE180) ----------------------------------------------------
__int64 __fastcall sub_1406EE180(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rcx
	int v4; // edi
	unsigned int v5; // r8d
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // rax
	__int64 v12; // rdx
	int v13; // ecx
	__int64 v14; // rax

	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && (v2 = qword_140C65970) != 0)
	{
		v3 = (_DWORD*)a1[3];
		v4 = *(_DWORD*)(qword_140C65970 + 8);
		if ((unsigned __int64)v3 < a1[2] && v3 != dword_140A12138 && (int)v3[2] > 0)
		{
			v4 = sub_140056D60(a1, 1u);
			v2 = qword_140C65970;
		}
		if ((unsigned __int64)v4 >= 4)
			v5 = 0;
		else
			v5 = *(_DWORD*)(v2 + 4i64 * v4 + 16);
		v6 = sub_140491D60(v4, v4, v5);
		if (v6)
		{
			v9 = sub_140491CF0(qword_140C65968, v4, *(_DWORD*)(*(_QWORD*)v6 + 8i64) + 1);
			if (v9)
			{
				v12 = a1[2];
				v13 = *(_DWORD*)(*(_QWORD*)v9 + 12i64) - *(_DWORD*)(v10 + 12);
				*(_DWORD*)(v12 + 8) = 3;
				*(double*)v12 = (double)v13;
			}
			else
			{
				v11 = a1[2];
				*(_QWORD*)v11 = 0i64;
				*(_DWORD*)(v11 + 8) = 3;
			}
		}
		else
		{
			v7 = a1[2];
			*(_QWORD*)v7 = 0x3FF0000000000000i64;
			*(_DWORD*)(v7 + 8) = 3;
		}
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v14 = a1[2];
		*(_QWORD*)v14 = 0x3FF0000000000000i64;
		*(_DWORD*)(v14 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406EE275: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

