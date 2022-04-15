#include "../winhttp.h"

//----- (00000001406FB130) ----------------------------------------------------
__int64 __fastcall sub_1406FB130(_QWORD* a1)
{
	unsigned int v2; // eax
	_DWORD* v3; // rcx
	unsigned int v4; // r14d
	unsigned int v5; // ebx
	__int64 v6; // rbp
	unsigned int v7; // esi
	_DWORD* v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rdx
	int v16; // ebx
	_QWORD* v17; // rax
	__int128 v19; // [rsp+40h] [rbp-38h] BYREF
	_QWORD* v20; // [rsp+50h] [rbp-28h]
	int v21; // [rsp+58h] [rbp-20h]
	__int64 v22; // [rsp+80h] [rbp+8h] BYREF

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	v3 = *(_DWORD**)(qword_140C65898 + 25744);
	v4 = v2;
	if (v3)
		v5 = v3[1530];
	else
		v5 = 0;
	v6 = 0i64;
	v7 = 1;
	if (v3)
	{
		v8 = (_DWORD*)a1[3];
		v19 = *((_OWORD*)v3 + 286);
		if ((unsigned __int64)v8 >= a1[2] || (v3 = dword_140A12138, v8 == dword_140A12138) || (int)v8[2] <= 0)
			v9 = -1;
		else
			v9 = sub_140056D60(a1, 1u);
		if (qword_140C658F8)
		{
			v10 = sub_140448420((__int64)v3, v9);
			if (qword_140C658F8)
			{
				v22 = qword_140C77760;
				v6 = sub_140448BE0((__int64)&v22, v4, v5, (float*)&v19, v10, 1, &v22);
			}
		}
	}
	v11 = a1[4];
	v20 = a1;
	*(_QWORD*)&v19 = off_140B569F0;
	v12 = *(_QWORD*)(v11 + 112);
	v21 = 1;
	if (*(_QWORD*)(v11 + 120) >= v12)
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	DWORD2(v19) = v16;
	if (v6 && (int)sub_14052ED60(v6, (__int64)&v19) >= 0)
	{
		v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v15 = a1[2];
		*(_QWORD*)v15 = *v17;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v17 + 2);
		a1[2] += 16i64;
	}
	else
	{
		v7 = 0;
	}
	sub_1400579E0((__int64)a1, v15, v16);
	return v7;
}
// 1406FB1C6: variable 'v3' is possibly undefined
// 1406FB2B7: variable 'v15' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;

