#include "../winhttp.h"

//----- (00000001406CD460) ----------------------------------------------------
__int64 __fastcall sub_1406CD460(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rbp
	unsigned __int64 v4; // rdx
	_DWORD* v5; // rcx
	__int64 v6; // rsi
	unsigned __int64 v7; // r8
	__int64* v8; // rdx
	__int64 v9; // rax
	int v10; // ecx
	__int64* v11; // rax
	double v12; // xmm0_8
	__int64 v13; // rcx
	int v14; // edi
	__int64* v15; // rcx
	int v16; // eax
	int v17; // eax
	int v18; // eax
	_QWORD* v19; // rax
	__int64 v21; // [rsp+20h] [rbp-38h] BYREF
	int v22; // [rsp+28h] [rbp-30h]
	__int64 v23; // [rsp+68h] [rbp+10h] BYREF
	__int64 v24; // [rsp+70h] [rbp+18h] BYREF
	unsigned __int64 v25; // [rsp+78h] [rbp+20h] BYREF

	v2 = sub_1406CD790(a1);
	v3 = dword_140A12138;
	*(_QWORD*)(v2 + 1600) = 0i64;
	v4 = a1[2];
	v5 = (_DWORD*)(a1[3] + 16i64);
	v6 = v2;
	if ((unsigned __int64)v5 < v4 && v5 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
	{
		*(_DWORD*)(v4 + 8) = 0;
		for (a1[2] += 16i64; ; a1[2] -= 16i64)
		{
			v7 = a1[2];
			v8 = (__int64*)dword_140A12138;
			if (a1[3] + 16i64 < v7)
				v8 = (__int64*)(a1[3] + 16i64);
			if (!(unsigned int)sub_14005BA70((__int64)a1, *v8, v7 - 16))
			{
				a1[2] -= 16i64;
				goto LABEL_23;
			}
			a1[2] += 16i64;
			v9 = a1[2];
			v10 = *(_DWORD*)(v9 - 8);
			v11 = (__int64*)(v9 - 16);
			if (v10 == 3)
				goto LABEL_12;
			if (v10 == 4 && sub_14005AC80((char*)(*v11 + 32), (unsigned __int64*)&v24))
				break;
			v12 = 0.0;
		LABEL_13:
			v13 = a1[2];
			v14 = (int)v12;
			if (*(_DWORD*)(v13 - 24) == 4)
				sub_14005AC80((char*)(*(_QWORD*)(v13 - 32) + 32i64), &v25);
			HIDWORD(v23) = (unsigned __int8)v14;
			LODWORD(v23) = BYTE1(v14);
			if ((BYTE1(v14) || (unsigned __int8)v14 < 0x1Fu) && *(_QWORD*)(v6 + 1600) < 0xAui64)
				sub_140527690((__int64*)(v6 + 1592), (int*)&v23);
		}
		v22 = 3;
		v11 = &v21;
		v21 = v24;
	LABEL_12:
		v12 = *(double*)v11;
		goto LABEL_13;
	}
LABEL_23:
	v15 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v15 = (__int64*)(a1[3] + 32i64);
	v16 = *((_DWORD*)v15 + 2);
	if (v16 == 3)
		goto LABEL_29;
	if (v16 == 4 && sub_14005AC80((char*)(*v15 + 32), (unsigned __int64*)&v23))
	{
		v22 = 3;
		v15 = &v21;
		v21 = v23;
	LABEL_29:
		v17 = (int)*(double*)v15;
		goto LABEL_30;
	}
	v17 = 0;
LABEL_30:
	*(_DWORD*)(v6 + 1608) = v17;
	*(_QWORD*)(v6 + 1624) = 0i64;
	if ((unsigned __int64)(a1[3] + 48i64) < a1[2])
		v3 = (_DWORD*)(a1[3] + 48i64);
	v18 = v3[2];
	if (v18 == 7 || v18 == 2)
	{
		v19 = (_QWORD*)sub_140056AB0(a1, 4u);
		if (v19)
			*(_QWORD*)(v6 + 1624) = *v19;
	}
	return 0i64;
}
// 1406CD597: conditional instruction was optimized away because edx.4<100u
// 140A12138: using guessed type _DWORD dword_140A12138[4];

