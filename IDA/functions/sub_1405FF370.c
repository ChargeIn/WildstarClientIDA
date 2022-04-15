#include "../winhttp.h"

//----- (00000001405FF370) ----------------------------------------------------
__int64 __fastcall sub_1405FF370(__int64 a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rdx
	unsigned int v6; // r9d
	__int64 v7; // rax
	__int64 v8; // r8
	int v9; // r9d
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // r9d
	__int64 v15; // rcx
	int v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]
	void(__fastcall * v19)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v20; // [rsp+38h] [rbp-10h]
	__int64 v21; // [rsp+50h] [rbp+8h] BYREF

	v3 = a1 + 96;
	v5 = *(_QWORD*)(v3 + 8);
	v6 = 0;
	v7 = *(_QWORD*)(v5 + 8);
	v8 = v5;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v5 || (v21 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v21 = v5;
	if (v21 != *(_QWORD*)(a1 + 104))
	{
		sub_1405FFD90(v3, &v21);
		if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5432i64))
		{
			v9 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5408i64);
			v10 = *(_QWORD*)(qword_140C65898 + 29504) + 5416i64;
			v18 = *(_QWORD*)(qword_140C65898 + 29504) + 5352i64;
			v17 = 0;
			v19 = sub_1400A8020;
			v20 = 0i64;
			sub_140195960(v10, 0, (__int64)&v17, v9);
		}
		v6 = 1;
	}
	v11 = *(_QWORD*)(a1 + 72);
	v12 = v11;
	v13 = *(_QWORD*)(v11 + 8);
	while (v13)
	{
		if (*(_DWORD*)(v13 + 32) < a2)
		{
			v13 = *(_QWORD*)(v13 + 24);
		}
		else
		{
			v12 = v13;
			v13 = *(_QWORD*)(v13 + 16);
		}
	}
	if (v12 == v11 || (v21 = v12, a2 < *(_DWORD*)(v12 + 32)))
		v21 = v11;
	if (v21 == v11)
		return v6;
	sub_1400EFCD0(a1 + 64, &v21);
	if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5296i64))
	{
		v14 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5272i64);
		v15 = *(_QWORD*)(qword_140C65898 + 29504) + 5280i64;
		v18 = *(_QWORD*)(qword_140C65898 + 29504) + 5216i64;
		v17 = 0;
		v19 = sub_1400A8020;
		v20 = 0i64;
		sub_140195960(v15, 0, (__int64)&v17, v14);
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

