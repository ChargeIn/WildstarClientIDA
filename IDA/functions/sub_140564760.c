#include "../winhttp.h"

//----- (0000000140564760) ----------------------------------------------------
__int64 __fastcall sub_140564760(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned int v3; // ebx
	__int64 v4; // rcx
	__int64 v5; // rdi
	__int64 v6; // r10
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned int v11; // r11d
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	unsigned int v15; // edx
	__int64 v16; // rax
	unsigned int v17; // eax
	__int64 v19; // [rsp+30h] [rbp+8h]

	v2 = qword_140C65B70;
	v3 = a2;
	if (!a2)
		return 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 25744) || !qword_140C65898 || (v5 = sub_1405A5B90(qword_140C65898, a2)) == 0)
	{
		v7 = sub_1407A0FD0(v2, a2);
		v6 = qword_140C65898;
		v5 = v7;
	}
	if (!v5)
		return 0i64;
	if (*(_DWORD*)(*(_QWORD*)(v5 + 112) + 404i64))
	{
		if ((unsigned int)sub_1403A8000(v4, v3))
		{
			v9 = sub_140565020(v8, v5, *(_QWORD*)(v6 + 120));
			v6 = qword_140C65898;
			if (v9)
			{
				v5 = v9;
				v3 = **(_DWORD**)(v9 + 112);
			}
		}
	}
	v10 = *(_QWORD*)(v6 + 5512);
	v11 = *(_DWORD*)(*(_QWORD*)(v5 + 8) + 32i64);
	v12 = *(_QWORD*)(v10 + 8);
	v13 = v10;
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < v3)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v13 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v13 == v10 || (v19 = v13, v3 < *(_DWORD*)(v13 + 32)))
		v19 = *(_QWORD*)(v6 + 5512);
	if (v19 != v10)
	{
		v14 = sub_1403BFB00(v6, v3);
		v16 = sub_140564F40(v2, v15, v14);
		if (v16)
		{
			v17 = *(_DWORD*)(v16 + 36);
			if (v17)
				return v17;
		}
	}
	return v11;
}
// 1405647AE: variable 'a2' is possibly undefined
// 1405647D5: variable 'v4' is possibly undefined
// 1405647E5: variable 'v8' is possibly undefined
// 1405647DE: variable 'v6' is possibly undefined
// 140564865: variable 'v15' is possibly undefined
// 140564878: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

