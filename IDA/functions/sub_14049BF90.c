#include "../winhttp.h"

//----- (000000014049BF90) ----------------------------------------------------
_BOOL8 __fastcall sub_14049BF90(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7[5]; // [rsp+20h] [rbp-48h] BYREF
	int v8; // [rsp+48h] [rbp-20h]
	int v9; // [rsp+4Ch] [rbp-1Ch]
	int v10; // [rsp+50h] [rbp-18h]

	if (!a2)
	{
		a2 = *(_QWORD*)(qword_140C65898 + 120);
		if (!a2)
			return 0i64;
	}
	v5 = *(_QWORD*)(a4 + 72);
	v6 = *(_QWORD*)(a4 + 64);
	v7[1] = 0i64;
	v7[4] = 8i64;
	v8 = 0;
	v10 = -1;
	v7[0] = a2;
	v7[2] = v6;
	if (!v5)
		v5 = v6 + 8;
	v7[3] = v5;
	v9 = 0;
	return sub_1404A1CA0(qword_140C659A0, v7, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

