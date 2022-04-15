#include "../winhttp.h"

//----- (000000014072EA40) ----------------------------------------------------
__int64 __fastcall sub_14072EA40(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // r14
	__int64* v4; // rcx
	int v5; // eax
	unsigned int v6; // esi
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // ebp
	int* v10; // rax
	int* i; // rbx
	__int64 v12; // rsi
	__int64 v13; // rax
	__m128i v14; // xmm0
	int* v15; // rbx
	__int64 v16; // rcx
	char v17[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+30h] [rbp-28h] BYREF
	int v20; // [rsp+38h] [rbp-20h]
	__int64 v21; // [rsp+68h] [rbp+10h] BYREF

	result = sub_140056AB0(a1, 1u);
	v3 = (_QWORD*)result;
	if (!result)
		return result;
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = *((_DWORD*)v4 + 2);
	if (v5 != 3)
	{
		if (v5 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v21))
		{
			v6 = 0;
			goto LABEL_9;
		}
		v20 = 3;
		v4 = &v19;
		v19 = v21;
	}
	v6 = (int)*(double*)v4;
LABEL_9:
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	v9 = 1;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v18 = sub_14018B280(40i64, 0);
	*(_QWORD*)v18 = v18;
	*((_QWORD*)v18 + 1) = v18;
	(*(void(__fastcall**)(_QWORD, _QWORD, char*, _QWORD))(*(_QWORD*)*v3 + 160i64))(*v3, v6, v17, 0i64);
	v10 = v18;
	for (i = *(int**)v18; i != v10; i = *(int**)i)
	{
		v12 = *((_QWORD*)i + 3);
		if (v12)
		{
			if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v12 + 8)) != 6
				|| (*(_BYTE*)(*(_QWORD*)(v12 + 8) + 12i64) & 4) != 0)
			{
				v13 = a1[2];
				v14 = _mm_cvtsi32_si128(v9);
				*(_DWORD*)(v13 + 8) = 3;
				++v9;
				*(_QWORD*)v13 = *(_OWORD*)&_mm_cvtepi32_pd(v14);
				a1[2] += 16i64;
				sub_140663030(a1, v12);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
			}
			v10 = v18;
		}
	}
	v15 = *(int**)v10;
	if (*(int**)v10 != v10)
	{
		do
		{
			v16 = (__int64)v15;
			v15 = *(int**)v15;
			sub_14018B900(v16, 0);
			v10 = v18;
		} while (v15 != v18);
	}
	*(_QWORD*)v10 = v10;
	*((_QWORD*)v18 + 1) = v18;
	sub_14018B900((__int64)v18, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 14072EA40: using guessed type char var_38[8];

