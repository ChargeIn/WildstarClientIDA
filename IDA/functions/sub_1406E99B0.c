#include "../winhttp.h"

//----- (00000001406E99B0) ----------------------------------------------------
__int64 __fastcall sub_1406E99B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	unsigned __int64 v4; // r8
	__int64 v5; // rsi
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // rbp
	_QWORD* v10; // rbx
	unsigned __int8** v12; // rbx
	__int64 v13; // rcx
	unsigned __int8* v14; // rbp
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	_QWORD* v18; // rax
	__int64 v19; // rdx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-28h] BYREF
	int v21; // [rsp+28h] [rbp-20h]
	_QWORD* v22; // [rsp+30h] [rbp-18h]
	int v23; // [rsp+38h] [rbp-10h]
	int v24; // [rsp+58h] [rbp+10h] BYREF
	int v25; // [rsp+5Ch] [rbp+14h]

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = v2;
	if (v4)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
		{
			v3 = (unsigned int)(v3 + 1);
			v7 = (unsigned int)v3;
			if ((unsigned int)v3 >= v4)
				goto LABEL_5;
		}
		v8 = *(_QWORD*)(v6 + 8 * v3);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v24 = sub_1400F26A0(v8 + 384, 2);
	v25 = sub_1400F26A0(v8 + 384, 3);
	v9 = (*(__int64(__fastcall**)(int*))(v5 + 2400))(&v24);
	v10 = *(_QWORD**)(*(_QWORD*)(v5 + 2392) + 8 * (v9 % *(_QWORD*)(v5 + 2384)));
	if (!v10)
		goto LABEL_10;
	while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 2408))(&v24, v10 + 2))
	{
		v10 = (_QWORD*)v10[1];
		if (!v10)
			goto LABEL_10;
	}
	v12 = (unsigned __int8**)(v10 + 3);
	if (v12)
	{
		v13 = a1[4];
		v14 = *v12;
		v20 = off_140B569F0;
		v15 = *(_QWORD*)(v13 + 112);
		v22 = a1;
		v23 = 1;
		if (*(_QWORD*)(v13 + 120) >= v15)
			sub_14005E2C0((__int64)a1);
		v16 = a1[2];
		v17 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v16 + 8) = 5;
		*(_QWORD*)v16 = v17;
		a1[2] += 16i64;
		LODWORD(v16) = sub_1400578C0((__int64)a1);
		v21 = v16;
		sub_1406E9330(v5, (__int64)&v20, v14);
		v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v19 = a1[2];
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v19, v16);
	}
	else
	{
	LABEL_10:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;

