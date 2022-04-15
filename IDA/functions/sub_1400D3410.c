#include "../winhttp.h"

//----- (00000001400D3410) ----------------------------------------------------
_BYTE* __fastcall sub_1400D3410(__int64 a1, int* a2, int* a3)
{
	int v3; // eax
	__int64 v7; // rcx
	__int64 v8; // rbx
	int* v9; // r10
	int v10; // ecx
	__int64 v11; // rcx
	__int64 v12; // r12
	int* v13; // rbx
	__int64 v14; // rax
	bool v15; // zf
	char* v16; // rsi
	unsigned __int64 v17; // rbp
	__int64 v18; // r14
	__int64 v19; // rsi
	_BYTE* v20; // rsi
	_QWORD* v21; // rbp
	_QWORD* v22; // r8
	_BYTE* v23; // rdi
	_QWORD* v24; // rbx
	int v25; // esi
	char* v26; // r9
	int v27; // eax
	int v28; // ecx
	int v29; // edx
	__int64 v30; // r10
	int v31; // eax
	char* v32; // r8
	int v33; // edx
	int v34; // ecx
	__int64 v35; // r9
	int v36; // eax
	int* v37; // rcx
	__int64 v38; // rax
	_QWORD* v39; // rax
	_BYTE* result; // rax
	__int64 v41; // [rsp+30h] [rbp-48h] BYREF
	char v42[8]; // [rsp+40h] [rbp-38h] BYREF
	int* v43; // [rsp+48h] [rbp-30h]
	_BYTE* v44; // [rsp+50h] [rbp-28h]
	__int64 v45; // [rsp+58h] [rbp-20h]

	v3 = *(_DWORD*)(a1 + 808);
	if (v3 == -2)
	{
		v7 = *(_QWORD*)(a1 + 16);
		if (v7)
			v3 = sub_1400D45B0(v7);
		else
			v3 = -2;
	}
	v8 = sub_14013A390(*(_QWORD*)(a1 + 32) + 2496i64, v3);
	if (!v8)
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2528i64);
	v9 = sub_14018B280(120i64, 0);
	if (v9)
	{
		v10 = *(_DWORD*)(a1 + 808);
		if (v10 == -2)
		{
			v11 = *(_QWORD*)(a1 + 16);
			if (v11)
				v10 = sub_1400D45B0(v11);
			else
				v10 = -2;
		}
		v12 = sub_1400F15F0((__int64)v9, a2, a3, *(int**)(qword_140C63650 + 784), v10, v8);
	}
	else
	{
		v12 = 0i64;
	}
	v13 = 0i64;
	v14 = -1i64;
	v43 = 0i64;
	v45 = 0i64;
	do
		v15 = *((_BYTE*)a2 + ++v14) == 0;
	while (!v15);
	v16 = (char*)a2 + v14;
	v17 = v14;
	v18 = v14 + 1;
	if (v14 != -2)
	{
		v13 = sub_14018B280(v14 + 1, 0);
		v43 = v13;
		v45 = (__int64)v13 + v18;
	}
	sub_1407DB590(v13, a2, v17);
	v19 = v16 - (char*)a2;
	v15 = (int*)((char*)v13 + v19) == 0i64;
	v20 = (char*)v13 + v19;
	v44 = v20;
	if (!v15)
		*v20 = 0;
	sub_1400DFCD0(a1 + 960, (__int64)&v41, (__int64)v42);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	v21 = *(_QWORD**)(a1 + 1000);
	v22 = (_QWORD*)v21[1];
	v23 = *(_BYTE**)(v41 + 40);
	v24 = v21;
	if (v22)
	{
		v25 = (char)*v23;
		while (1)
		{
			v26 = (char*)v22[4];
			v24 = v22;
			v27 = *v26;
			v28 = v25 - v27;
			if (v25 == v27)
				break;
		LABEL_28:
			if (v28 >= 0)
				goto LABEL_30;
			v22 = (_QWORD*)v22[2];
		LABEL_31:
			if (!v22)
				goto LABEL_32;
		}
		LOBYTE(v29) = *v23;
		v30 = *(_QWORD*)(v41 + 40);
		while ((_BYTE)v29)
		{
			v29 = *(char*)(v30 + 1);
			v31 = v26[1];
			++v30;
			++v26;
			v28 = v29 - v31;
			if (v29 != v31)
				goto LABEL_28;
		}
	LABEL_30:
		v22 = (_QWORD*)v22[3];
		goto LABEL_31;
	}
LABEL_32:
	if (v24 != v21)
	{
		v32 = (char*)v24[4];
		LOBYTE(v33) = *v23;
		v34 = (char)*v23 - *v32;
		if (!v34)
		{
			v35 = *(_QWORD*)(v41 + 40);
			while ((_BYTE)v33)
			{
				v33 = *(char*)(v35 + 1);
				v36 = v32[1];
				++v35;
				++v32;
				v34 = v33 - v36;
				if (v33 != v36)
					goto LABEL_37;
			}
			goto LABEL_38;
		}
	LABEL_37:
		if (v34 >= 0)
		{
		LABEL_38:
			v37 = sub_14018B280(48i64, 0);
			if (v37 != (int*)-32i64)
			{
				*((_QWORD*)v37 + 4) = v23;
				*((_QWORD*)v37 + 5) = v12;
			}
			v24[3] = v37;
			v38 = *(_QWORD*)(a1 + 1000);
			if (v24 == *(_QWORD**)(v38 + 24))
				*(_QWORD*)(v38 + 24) = v37;
			goto LABEL_48;
		}
	}
	v37 = sub_14018B280(48i64, 0);
	if (v37 != (int*)-32i64)
	{
		*((_QWORD*)v37 + 4) = v23;
		*((_QWORD*)v37 + 5) = v12;
	}
	v24[2] = v37;
	v39 = *(_QWORD**)(a1 + 1000);
	if (v24 == v39)
	{
		v39[1] = v37;
		*(_QWORD*)(*(_QWORD*)(a1 + 1000) + 24i64) = v37;
	}
	else if (v24 == (_QWORD*)v39[2])
	{
		v39[2] = v37;
	}
LABEL_48:
	*((_QWORD*)v37 + 1) = v24;
	*((_QWORD*)v37 + 2) = 0i64;
	*((_QWORD*)v37 + 3) = 0i64;
	result = sub_1400081C0((__int64)v37, (_QWORD*)(*(_QWORD*)(a1 + 1000) + 8i64));
	++* (_QWORD*)(a1 + 1008);
	return result;
}
// 1400D35FD: conditional instruction was optimized away because r8.8==0
// 1400D34D2: variable 'v9' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 1400D3410: using guessed type char var_38[8];

