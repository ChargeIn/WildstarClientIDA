#include "../winhttp.h"

//----- (00000001406A5520) ----------------------------------------------------
__int64 __fastcall sub_1406A5520(_QWORD* a1)
{
	int v1; // esi
	__int64 v3; // rbp
	unsigned int v4; // edi
	unsigned __int64 v5; // rdx
	unsigned int v6; // ecx
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned int v10; // eax
	__int64 v11; // rcx
	_DWORD* v12; // r8
	__int64 v13; // rcx

	v1 = 1;
	v3 = sub_140056AB0(a1, 1u);
	if (v3)
	{
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C63650 + 768);
		v6 = 0;
		if (v5)
		{
			v7 = *(_QWORD*)(qword_140C63650 + 760);
			v8 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
			{
				v8 = ++v6;
				if (v6 >= v5)
					goto LABEL_6;
			}
			v9 = *(_QWORD*)(v7 + 8i64 * v6);
		}
		else
		{
		LABEL_6:
			v9 = 0i64;
		}
		v10 = sub_1400F26A0(v9 + 384, 2);
		v11 = *(_QWORD*)(v9 + 400);
		v12 = dword_140A12138;
		if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 32i64) < *(_QWORD*)(v11 + 16))
			v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 32i64);
		v13 = (unsigned int)v12[2];
		if (!(_DWORD)v13 || (_DWORD)v13 == 1 && !*v12)
			v1 = 0;
		LOBYTE(v4) = v1 != 0;
		sub_1404B73E0(v13, **(_DWORD**)(v3 + 8), v10, 4, v4);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

