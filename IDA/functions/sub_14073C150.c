#include "../winhttp.h"

//----- (000000014073C150) ----------------------------------------------------
__int64 __fastcall sub_14073C150(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	unsigned int v7; // edi
	int v8; // ebp
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // ebx
	__int64 v14; // r10
	__int64 v15; // r9
	_DWORD* v16; // rcx
	__int64 v17; // r9
	int v18; // r8d
	__int64 v19; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	int v22; // [rsp+28h] [rbp-20h]
	_QWORD* v23; // [rsp+30h] [rbp-18h]
	int v24; // [rsp+38h] [rbp-10h]
	__int64 v25; // [rsp+50h] [rbp+8h]
	double v26; // [rsp+50h] [rbp+8h]

	v2 = (int*)sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
		v3 = *v2;
	else
		v3 = 16;
	v4 = *(_QWORD*)(qword_140C65B98 + 72);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v25 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v25 = *(_QWORD*)(qword_140C65B98 + 72);
	v7 = 0;
	if (v25 == v4 || v25 == -40)
		v8 = 0;
	else
		v8 = *(_DWORD*)(v25 + 76);
	v9 = a1[4];
	v23 = a1;
	v21 = off_140B569F0;
	v10 = *(_QWORD*)(v9 + 112);
	v24 = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0((__int64)a1);
	v11 = a1[2];
	v12 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	a1[2] += 16i64;
	v22 = sub_1400578C0((__int64)a1);
	v13 = 1;
	do
	{
		if ((v13 & v8) != 0)
			sub_1400FA9E0((__int64)&v21);
		v13 = __ROL4__(v13, 1);
		++v7;
	} while (v7 < 3);
	v14 = (__int64)v23;
	v15 = *(_QWORD*)(v23[4] + 160i64);
	if ((unsigned int)(v22 - 1) >= *(_DWORD*)(v15 + 56))
	{
		if ((double)v22 == 0.0)
		{
			v16 = *(_DWORD**)(v15 + 32);
		}
		else
		{
			v26 = (double)v22;
			v16 = (_DWORD*)(*(_QWORD*)(v15 + 32)
				+ 40 * ((unsigned int)(LODWORD(v26) + HIDWORD(v26)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
		}
		while (v16[6] != 3 || (double)v22 != *((double*)v16 + 2))
		{
			v16 = (_DWORD*)*((_QWORD*)v16 + 4);
			if (!v16)
			{
				v16 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v16 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v22 - 1));
	}
	v17 = v23[2];
	v18 = v22;
	*(_QWORD*)v17 = *(_QWORD*)v16;
	v19 = (unsigned int)v16[2];
	*(_DWORD*)(v17 + 8) = v19;
	*(_QWORD*)(v14 + 16) += 16i64;
	sub_1400579E0(v14, v19, v18);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65B98: using guessed type __int64 qword_140C65B98;

