#include "../winhttp.h"

//----- (00000001404AF7D0) ----------------------------------------------------
__int64 __fastcall sub_1404AF7D0(_DWORD* a1, int a2)
{
	int v2; // r8d
	__int64 v4; // r9
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // rax
	int v8; // eax
	_QWORD v10[5]; // [rsp+20h] [rbp-48h] BYREF
	int v11; // [rsp+48h] [rbp-20h]
	int v12; // [rsp+4Ch] [rbp-1Ch]
	int v13; // [rsp+50h] [rbp-18h]

	v2 = a1[8];
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 120);
		if (!v4)
			return 0i64;
		memset(&v10[1], 0, 24);
		v10[4] = 8i64;
		v11 = 0;
		v13 = -1;
		v10[0] = v4;
		v12 = a2;
		if (!sub_1404A1CA0(qword_140C659A0, v10, v2))
			return 0i64;
	}
	if (((v5 = a1[9], v5 == 4) || *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 14080i64) == v5)
		&& ((v6 = a1[10], v6 == 23)
			|| ((v7 = *(_QWORD*)(qword_140C65898 + 120)) == 0 ? (v8 = 23) : (v8 = *(_DWORD*)(v7 + 220)), v8 == v6)))
	{
		return 1i64;
	}
	else
	{
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

