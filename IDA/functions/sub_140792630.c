#include "../winhttp.h"

//----- (0000000140792630) ----------------------------------------------------
__int64 __fastcall sub_140792630(_QWORD* a1)
{
	unsigned __int8** v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // esi
	unsigned __int8* v5; // rax
	unsigned __int8* v6; // rdi
	int v7; // esi
	__int64 v8; // rdx
	_DWORD* v9; // rax
	_DWORD* v10; // rcx
	int v11; // eax
	int v12; // eax
	unsigned __int8* v13; // xmm0_8
	__int64 v14; // rax
	unsigned __int8* v16; // [rsp+20h] [rbp-18h] BYREF
	int v17; // [rsp+28h] [rbp-10h]
	unsigned __int8* v18; // [rsp+48h] [rbp+10h] BYREF

	v2 = (unsigned __int8**)dword_140A12138;
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2]
		|| v3 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v4 = sub_140056D60(a1, 2u), v4 == 10))
	{
		v9 = (_DWORD*)a1[3];
		if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || v9[2] == -1)
			sub_140056570(a1, 1u, aValueExpected);
		v10 = dword_140A12138;
		if (a1[3] < a1[2])
			v10 = (_DWORD*)a1[3];
		v11 = v10[2];
		if (v11 != 3 && (v11 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v10 + 32i64), (unsigned __int64*)&v18)))
			goto LABEL_21;
		if (a1[3] < a1[2])
			v2 = (unsigned __int8**)a1[3];
		v12 = *((_DWORD*)v2 + 2);
		if (v12 != 3)
		{
			if (v12 != 4 || !sub_14005AC80((char*)*v2 + 32, (unsigned __int64*)&v18))
			{
				v13 = 0i64;
				goto LABEL_29;
			}
			v17 = 3;
			v2 = &v16;
			v16 = v18;
		}
		v13 = *v2;
	LABEL_29:
		v14 = a1[2];
		*(_QWORD*)v14 = v13;
		*(_DWORD*)(v14 + 8) = 3;
		goto LABEL_30;
	}
	v5 = (unsigned __int8*)sub_140056BB0(a1, 1u, 0i64);
	v6 = v5;
	if (v4 - 2 > 0x22)
		sub_140056570(a1, 2u, aBaseOutOfRange);
	v7 = sub_1407DF1B0(v5, &v18, v4);
	if (v6 == v18)
		goto LABEL_21;
	for (; (unsigned int)sub_1407DE9E8(*v18); ++v18)
		;
	if (*v18)
	{
	LABEL_21:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_30;
	}
	v8 = a1[2];
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)v7;
LABEL_30:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

