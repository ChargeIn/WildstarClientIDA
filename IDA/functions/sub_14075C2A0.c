#include "../winhttp.h"

//----- (000000014075C2A0) ----------------------------------------------------
__int64 __fastcall sub_14075C2A0(_QWORD* a1)
{
	int v2; // esi
	unsigned int v3; // r9d
	int v4; // edi
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rax
	int v8; // eax
	int v9; // eax
	_DWORD* v10; // r11
	bool v11; // zf
	__int64 result; // rax
	__int64 v13; // [rsp+30h] [rbp+8h]

	v2 = 0;
	v3 = sub_140056D60(a1, 1u);
	v4 = 0;
	v5 = *(_QWORD*)(qword_140C65898 + 7168);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(int*)(v7 + 32) < 21)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v8 = *(_DWORD*)(v6 + 32), v8 > 21) || v8 >= 21 && *(_DWORD*)(v6 + 36))
		v13 = *(_QWORD*)(qword_140C65898 + 7168);
	else
		v13 = v6;
	if (v13 != v5 && *(_DWORD*)(v13 + 48) == 1)
		v4 = *(_DWORD*)(v13 + 52);
	v9 = sub_1403ABFE0(qword_140C65898 + 7160, 21, v3);
	v10[2] = 1;
	v11 = v4 + v9 == 0;
	result = 1i64;
	LOBYTE(v2) = !v11;
	*v10 = v2;
	a1[2] += 16i64;
	return result;
}
// 14075C343: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

