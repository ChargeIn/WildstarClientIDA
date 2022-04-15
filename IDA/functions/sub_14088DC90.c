#include "../winhttp.h"

//----- (000000014088DC90) ----------------------------------------------------
__int64 __fastcall sub_14088DC90(__int64 a1, int a2, _DWORD* a3, __int64* a4)
{
	__int64 v5; // rdx
	__int64 v6; // r14
	__int64 v10; // rbx
	__int64 v11; // rbp
	int v12; // edi
	int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rbx
	int v16; // eax
	char v18[264]; // [rsp+20h] [rbp-158h] BYREF
	__int64 v19; // [rsp+128h] [rbp-50h]
	char v20; // [rsp+148h] [rbp-30h]

	v5 = *(_QWORD*)(a1 + 16);
	v6 = *(_QWORD*)(a1 + 8) - *(_QWORD*)(v5 + 112);
	sub_140890370((__int64)v18, v5, 0);
	v10 = 0i64;
	if (!v19)
		goto LABEL_21;
	v11 = *(_QWORD*)(v19 + 24);
	v12 = 3;
	*a3 = 0;
	if (v11 && (*(_BYTE*)(v11 + 98) & 1) != 0)
	{
		v13 = sub_14088CCE0(a1, (__int64)v18, a2, a4);
		v12 = v13;
		if (v13 == 2)
			goto LABEL_21;
		if (!v13)
			goto LABEL_19;
	}
	if (v20)
		goto LABEL_21;
	(*(void(__fastcall**)(_QWORD, char*, _QWORD))(**(_QWORD**)(a1 + 16) + 96i64))(*(_QWORD*)(a1 + 16), v18, 0i64);
	v14 = *(_QWORD*)(v19 + 24);
	if (v14)
	{
		if (v12 == 3 && (*(_BYTE*)(v14 + 98) & 1) == 0)
			goto LABEL_21;
		*a3 = 1;
		v16 = sub_14088CCE0(a1, (__int64)v18, a2, a4);
		if (v16)
		{
			if (v16 != 1 && (unsigned int)(v16 - 2) <= 1 && v12 != 3)
				goto LABEL_11;
			goto LABEL_21;
		}
	LABEL_19:
		v15 = *a4;
		goto LABEL_20;
	}
	if (v12 == 1 && v11 && (*(_BYTE*)(v11 + 98) & 1) != 0)
	{
	LABEL_11:
		v15 = sub_140890920((__int64)v18);
		*a4 = v15;
	LABEL_20:
		v10 = v15 - v6;
	}
LABEL_21:
	nullsub_1(v18);
	return v10;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);

