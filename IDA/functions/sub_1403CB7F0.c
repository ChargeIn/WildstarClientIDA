#include "../winhttp.h"

//----- (00000001403CB7F0) ----------------------------------------------------
__int64 __fastcall sub_1403CB7F0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rcx
	_DWORD* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // rax
	char v10[24]; // [rsp+30h] [rbp-18h] BYREF
	int v11; // [rsp+50h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 120) || *(_DWORD*)(a1 + 26180) != 33 || !sub_1403D90D0(qword_140C65898, *a2))
		return 0i64;
	v4 = (_DWORD*)sub_140617410(v3, a2[1]);
	if (v4 && *v4 == 1)
	{
		v6 = 0i64;
		if (a2[2])
		{
			v7 = (__int64)(v4 + 18);
			do
			{
				v11 = *(_DWORD*)(*((_QWORD*)a2 + 2) + 4 * v6);
				sub_1400293C0(v7, (__int64)v10, &v11);
				v6 = (unsigned int)(v6 + 1);
			} while ((unsigned int)v6 < a2[2]);
		}
		v8 = sub_140617410(v5, a2[1]);
		if (v8)
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "InvokeSoldierBuild", "U#", *a2, *(_QWORD*)(v8 + 152));
		return 0i64;
	}
	return 1i64;
}
// 1403CB82B: variable 'v3' is possibly undefined
// 1403CB88C: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403CB7F0: using guessed type char var_18[24];

