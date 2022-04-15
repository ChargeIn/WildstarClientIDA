#include "../winhttp.h"

//----- (00000001400430B0) ----------------------------------------------------
__int64 __fastcall sub_1400430B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	bool v7; // zf
	__int64 v8; // rax
	int i; // r12d
	__int64 v10; // rax
	int* v11; // r14
	int* v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // rbx
	_WORD* v16; // r15
	__int64 v17; // r13
	__int64 v18; // rbp
	_QWORD* v19; // rbx
	__int64* v20; // rbx
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 result; // rax
	char v24[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v25; // [rsp+28h] [rbp-50h]
	__int64 v26; // [rsp+80h] [rbp+8h] BYREF
	__int64 v27; // [rsp+88h] [rbp+10h]
	__int64 v28; // [rsp+90h] [rbp+18h] BYREF

	v27 = a2;
	v2 = a2;
	sub_14013BD30(a1, a2);
	sub_140058710(a1, (unsigned __int64*)"arLoadConditions", 0x10ui64);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = sub_140136B00(v2, 0) == 0;
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)!v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	for (i = 2; i <= 4; ++i)
	{
		v10 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)i;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1404326C0((__int64)v24, i);
		v11 = v25;
		v12 = 0i64;
		v13 = 0i64;
		if (*(_WORD*)v25)
		{
			do
				++v13;
			while (*((_WORD*)v25 + v13));
		}
		v14 = (2 * v13) >> 1;
		if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v12 = sub_14018B280(2 * (v14 + 1), 0);
		v15 = 2 * v14;
		sub_1407DB590(v12, v11, v15);
		v16 = (_WORD*)((char*)v12 + v15);
		if ((int*)((char*)v12 + v15))
			*v16 = 0;
		v17 = *(_QWORD*)(v2 + 288);
		v18 = v17;
		v19 = *(_QWORD**)(v17 + 8);
		while (v19)
		{
			if ((int)sub_1400454D0(v19[5], v19[6], (unsigned __int16*)v12, (__int64)v16) < 0)
			{
				v19 = (_QWORD*)v19[3];
			}
			else
			{
				v18 = (__int64)v19;
				v19 = (_QWORD*)v19[2];
			}
		}
		if (v18 == v17
			|| (int)sub_1400454D0((__int64)v12, (__int64)v16, *(unsigned __int16**)(v18 + 40), *(_QWORD*)(v18 + 48)) < 0)
		{
			v28 = v17;
			v20 = &v28;
		}
		else
		{
			v26 = v18;
			v20 = &v26;
		}
		v21 = *v20;
		if (v12)
			sub_14018B900((__int64)v12, 0);
		v2 = v27;
		v22 = *(_QWORD*)(a1 + 16);
		if (v21 == *(_QWORD*)(v27 + 288))
			*(_QWORD*)v22 = 0x4000000000000000i64;
		else
			*(double*)v22 = (double)*(int*)(v21 + 64);
		*(_DWORD*)(v22 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_14018B900((__int64)v11, 0);
	}
	result = sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}
// 1400430B0: using guessed type char var_58[8];

