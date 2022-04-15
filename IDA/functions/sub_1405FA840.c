#include "../winhttp.h"

//----- (00000001405FA840) ----------------------------------------------------
__int64 __fastcall sub_1405FA840(__int64 a1, int* a2)
{
	__int64 v2; // rsi
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rax
	int* v7; // rbx
	const void** v8; // rcx
	int v9; // edx
	int v10; // eax
	bool v11; // zf
	int v12; // eax
	_QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
	char v15[24]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v16; // [rsp+50h] [rbp+8h]

	v2 = a1 + 416;
	v4 = *(_QWORD*)(a1 + 424);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < (unsigned int)*a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v16 = v5, (unsigned int)*a2 < *(_DWORD*)(v5 + 32)))
		v16 = *(_QWORD*)(a1 + 424);
	if (v16 == *(_QWORD*)(a1 + 424))
	{
		v7 = sub_14018B280(32i64, 0);
		if (v7)
		{
			v9 = a2[3];
			v10 = a2[2];
			v11 = a2[1] == 0;
			*(_QWORD*)v7 = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
			v7[4] = v10;
			v7[6] = v9;
			v7[5] = !v11;
		}
		else
		{
			v7 = 0i64;
		}
		v12 = *a2;
		v14[1] = v7;
		LODWORD(v14[0]) = v12;
		sub_140055F80(v2, (__int64)v15, v14);
	}
	else
	{
		v7 = *(int**)(v16 + 40);
		if (*(_QWORD*)v7)
			**(_QWORD**)v7 = *((_QWORD*)v7 + 1);
		v8 = (const void**)*((_QWORD*)v7 + 1);
		if (v8)
			*v8 = *(const void**)v7;
		*(_QWORD*)v7 = 0i64;
		*((_QWORD*)v7 + 1) = 0i64;
	}
	sub_1403EAA20(v8, (const void****)v7);
	return 1i64;
}
// 1405FA937: variable 'v8' is possibly undefined
// 1405FA840: using guessed type char var_18[24];

