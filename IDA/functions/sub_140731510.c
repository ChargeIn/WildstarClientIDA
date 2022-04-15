#include "../winhttp.h"

//----- (0000000140731510) ----------------------------------------------------
__int64 __fastcall sub_140731510(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r9d
	unsigned __int64 v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // r10
	_DWORD* v14; // rcx
	__int64 v15; // rdx
	unsigned __int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v20; // [rsp+20h] [rbp-30h] BYREF
	unsigned __int64 v21; // [rsp+28h] [rbp-28h]
	__int64(__fastcall * *v22)(); // [rsp+30h] [rbp-20h] BYREF
	int v23; // [rsp+38h] [rbp-18h]
	__int64 v24; // [rsp+40h] [rbp-10h]
	int v25; // [rsp+48h] [rbp-8h]
	double v26; // [rsp+70h] [rbp+20h]

	v3 = 0i64;
	v4 = *(_QWORD*)(qword_140C65898 + 29504);
	v21 = 0i64;
	v20 = 0i64;
	sub_1400EC9E0(v4, a2, &v20);
	sub_1400ECAB0(*(_QWORD*)(qword_140C65898 + 29504), v5, &v20);
	if (v21 > 1)
		sub_140731820(&v20);
	v6 = *(_QWORD*)(a1 + 32);
	v24 = a1;
	v22 = off_140B569F0;
	v7 = *(_QWORD*)(v6 + 112);
	v25 = 1;
	if (*(_QWORD*)(v6 + 120) >= v7)
		sub_14005E2C0(a1);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = sub_1400578C0(a1);
	v23 = v10;
	v11 = 0i64;
	if (v21)
	{
		v12 = 0i64;
		do
		{
			sub_1400FAD30((__int64)&v22);
			++v11;
			v12 += 32i64;
		} while (v11 < v21);
		a1 = v24;
		v10 = v23;
	}
	v13 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v13 + 56))
	{
		if ((double)v10 == 0.0)
		{
			v14 = *(_DWORD**)(v13 + 32);
		}
		else
		{
			v26 = (double)v10;
			v14 = (_DWORD*)(*(_QWORD*)(v13 + 32)
				+ 40 * ((unsigned int)(LODWORD(v26) + HIDWORD(v26)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
		}
		while (v14[6] != 3 || (double)v10 != *((double*)v14 + 2))
		{
			v14 = (_DWORD*)*((_QWORD*)v14 + 4);
			if (!v14)
			{
				v14 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v14 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v10 - 1));
	}
	v15 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v15 = *(_QWORD*)v14;
	*(_DWORD*)(v15 + 8) = v14[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v15, v10);
	v16 = v21;
	v17 = v20;
	if (v21)
	{
		v18 = 0i64;
		do
		{
			if (*(_QWORD*)(v18 + v17 + 8))
			{
				sub_14018B900(*(_QWORD*)(v18 + v17 + 8), 0);
				v16 = v21;
				v17 = v20;
			}
			++v3;
			v18 += 32i64;
		} while (v3 < v16);
	}
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	return 1i64;
}
// 14073155B: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

