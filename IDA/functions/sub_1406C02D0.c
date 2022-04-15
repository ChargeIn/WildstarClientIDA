#include "../winhttp.h"

//----- (00000001406C02D0) ----------------------------------------------------
__int64 __fastcall sub_1406C02D0(_QWORD* a1)
{
	double v1; // xmm0_8
	__int64 result; // rax
	__int64 v4; // rdi
	int* v5; // rax
	__int64 v6; // r15
	_DWORD* v7; // rbp
	__int64* v8; // rdx
	int v9; // esi
	int v10; // eax
	int v11; // r14d
	int v12; // r8d
	int v13; // ecx
	int* v14; // rax
	__int64 v15; // rdx
	__m128* v16; // rsi
	__int64 v17; // rax
	int v18; // ecx
	__int64 v19; // rcx
	__int64 v20; // rcx
	double v21; // xmm0_8
	__int64 v22; // [rsp+50h] [rbp-118h] BYREF
	int v23; // [rsp+58h] [rbp-110h]
	_QWORD v24[30]; // [rsp+60h] [rbp-108h] BYREF
	__int64 v25; // [rsp+178h] [rbp+10h] BYREF

	result = sub_1406C01C0(a1);
	v4 = result;
	if (!result)
		return result;
	v5 = (int*)sub_1406622C0((__int64)a1, 2);
	if (!v5)
		return 0i64;
	v6 = sub_1403D90D0(qword_140C65898, *v5);
	if (!v6)
		return 0i64;
	v7 = dword_140A12138;
	v8 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v8 = (__int64*)(a1[3] + 32i64);
	v9 = 0;
	v10 = *((_DWORD*)v8 + 2);
	if (v10 != 3)
	{
		if (v10 != 4 || !sub_14005AC80((char*)(*v8 + 32), (unsigned __int64*)&v25))
		{
			v11 = 0;
			goto LABEL_11;
		}
		v1 = *(double*)&v25;
		v23 = 3;
		v8 = &v22;
		v22 = v25;
	}
	v11 = (int)*(double*)v8;
LABEL_11:
	sub_140770490((__int64)v24);
	sub_140770630((__int64)v24, a1, 4);
	v12 = sub_140121AC0(a1, 5u, (__int64)off_140B38AC8, 7ui64);
	if ((unsigned __int64)(a1[3] + 80i64) < a1[2])
		v7 = (_DWORD*)(a1[3] + 80i64);
	v13 = v7[2];
	if (v13 && (v13 != 1 || *v7))
		v9 = 1;
	v14 = sub_1407740E0(
		v4 + 1024,
		v6,
		v11,
		word_1409F71EC,
		*(_QWORD*)(*(_QWORD*)(v4 + 696) + 96i64),
		(__int64)v24,
		v12,
		v9);
	v15 = qword_140C65898;
	v16 = (__m128*)v14;
	v17 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v17)
	{
		v18 = *(_DWORD*)(v4 + 2300);
		if (v18 == 2)
		{
			v19 = *(_QWORD*)(qword_140C65898 + 29096);
			if (!v19)
				v19 = *(_QWORD*)(qword_140C65898 + 29088);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
			v15 = qword_140C65898;
		}
		else if (v18 == 1)
		{
			*(_QWORD*)&v1 = *(unsigned int*)(v17 + 4800);
		}
		else
		{
			v1 = 0.0;
		}
		sub_140770FC0(v16, (__m128*)(*(_QWORD*)(v15 + 25744) + 4576i64), v1, *(float*)(v4 + 1872), v4 + 2280);
	}
	v20 = a1[2];
	v21 = (double)v16->m128_i32[2];
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = v21;
	a1[2] += 16i64;
	sub_140532D90(v24);
	return 1i64;
}
// 1406C04DE: variable 'v1' is possibly undefined
// 1409F71EC: using guessed type _WORD word_1409F71EC[8];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B38AC8: using guessed type wchar_t *off_140B38AC8[7];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406C02D0: using guessed type _QWORD var_108[30];

