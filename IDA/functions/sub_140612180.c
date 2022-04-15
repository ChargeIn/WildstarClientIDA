#include "../winhttp.h"

//----- (0000000140612180) ----------------------------------------------------
__int64 __fastcall sub_140612180(__int64 a1, unsigned int* a2)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // [rsp+40h] [rbp+18h]

	if (!qword_140C65970)
		return 0i64;
	v5 = sub_140617410(a1, *a2);
	v7 = v5;
	if (!v5 || !*(_QWORD*)(v5 + 152))
		return 2147500037i64;
	*(_DWORD*)(a1 + 28568) = 1;
	sub_140570B90(v6, a2);
	v8 = *(_QWORD*)(v7 + 120);
	v9 = *(_QWORD*)(v8 + 8);
	v10 = v8;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2[8])
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == v8 || (v12 = v10, a2[8] < *(_DWORD*)(v10 + 32)))
		v12 = *(_QWORD*)(v7 + 120);
	if (v12 != v8)
	{
		v11 = *(_DWORD*)(*(_QWORD*)(v12 + 40) + 12i64);
		if (!v11)
			v11 = sub_1400518A0(qword_140C63628, 131, 6, 0);
		*(_DWORD*)(a1 + 31216) = v11;
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SoldierHoldoutStatus", L"#", *(_QWORD*)(v7 + 152));
	return 0i64;
}
// 1406121DA: variable 'v6' is possibly undefined
// 1409ED854: using guessed type wchar_t asc_1409ED854[2];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

