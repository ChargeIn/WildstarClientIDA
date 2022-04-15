#include "../winhttp.h"

//----- (0000000140732B20) ----------------------------------------------------
__int64 __fastcall sub_140732B20(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned int v7; // eax
	__int64 v8; // rcx
	_DWORD* v9; // r8
	unsigned int v10; // r10d
	__int64 v11; // rcx
	BOOL v12; // eax
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // ebx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-60h] BYREF
	__int64 v22; // [rsp+28h] [rbp-58h]
	_QWORD* v23; // [rsp+30h] [rbp-50h]
	int v24; // [rsp+38h] [rbp-48h]
	__int64 v25[3]; // [rsp+40h] [rbp-40h] BYREF
	__int64 v26; // [rsp+58h] [rbp-28h] BYREF
	__int64 v27; // [rsp+60h] [rbp-20h]
	__int64 v28; // [rsp+68h] [rbp-18h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = *(_QWORD*)(v6 + 400);
	v9 = dword_140A12138;
	v10 = v7;
	if ((unsigned __int64)(*(_QWORD*)(v8 + 24) + 16i64) < *(_QWORD*)(v8 + 16))
		v9 = (_DWORD*)(*(_QWORD*)(v8 + 24) + 16i64);
	v11 = (unsigned int)v9[2];
	v12 = (_DWORD)v11 && ((_DWORD)v11 != 1 || *v9);
	v25[1] = 1i64;
	v25[2] = 0i64;
	v22 = 1i64;
	v27 = 1i64;
	v28 = 0i64;
	v25[0] = 0i64;
	v26 = 0i64;
	v23 = 0i64;
	if ((int)sub_1404B8680(v11, v10, (__int64)v25, v12) < 0)
		sub_140056570(a1, 1u, "Not a valid color shift");
	v13 = a1[4];
	v23 = a1;
	v21 = off_140B569F0;
	v14 = *(_QWORD*)(v13 + 112);
	v24 = 1;
	if (*(_QWORD*)(v13 + 120) >= v14)
		sub_14005E2C0((__int64)a1);
	v15 = a1[2];
	v16 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v15 + 8) = 5;
	*(_QWORD*)v15 = v16;
	a1[2] += 16i64;
	v17 = sub_1400578C0((__int64)a1);
	LODWORD(v22) = v17;
	if ((unsigned int)sub_140501210(a1, v25))
	{
		sub_1400FB540((__int64)&v21);
		a1[2] -= 16i64;
	}
	if (v26 && ((int)v27 < 15 || (_DWORD)v27 == 15 && ((_DWORD)v28 || HIDWORD(v27) == 1 || HIDWORD(v28))))
	{
		if ((unsigned int)sub_140501210(a1, &v26))
		{
			sub_1400FB540((__int64)&v21);
			a1[2] -= 16i64;
		}
	}
	v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
	v19 = a1[2];
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v19, v17);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;

