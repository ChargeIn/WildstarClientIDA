#include "../winhttp.h"

//----- (00000001403F8940) ----------------------------------------------------
void __fastcall sub_1403F8940(_QWORD* a1)
{
	__int64 i; // rbx
	int* v3; // rax
	__int64 j; // rbx
	int* v5; // rax
	int* v6; // rax
	__int64 k; // rbx
	int* v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rbx
	int* v11; // rax
	__int64 v12; // r14
	__int64 v13; // r15
	__int64 v14; // rsi
	__int64 v15; // rbx
	int* v16; // rax
	__int64 v17; // rdi
	__int64 v18; // rbx
	__int64 v19; // [rsp+20h] [rbp-59h] BYREF
	__int64 v20; // [rsp+28h] [rbp-51h]
	__int64 v21; // [rsp+30h] [rbp-49h]
	char v22[8]; // [rsp+38h] [rbp-41h] BYREF
	int* v23; // [rsp+40h] [rbp-39h]
	__int64 v24; // [rsp+48h] [rbp-31h]
	char v25[8]; // [rsp+58h] [rbp-21h] BYREF
	int* v26; // [rsp+60h] [rbp-19h]
	__int64 v27; // [rsp+68h] [rbp-11h]
	char v28[8]; // [rsp+78h] [rbp-1h] BYREF
	int* v29; // [rsp+80h] [rbp+7h]
	__int64 v30; // [rsp+88h] [rbp+Fh]
	char v31[8]; // [rsp+98h] [rbp+1Fh] BYREF
	char v32; // [rsp+A0h] [rbp+27h]
	int v33; // [rsp+E0h] [rbp+67h] BYREF

	v29 = sub_14018B280(48i64, 0);
	v30 = 0i64;
	*(_BYTE*)v29 = 0;
	*((_QWORD*)v29 + 1) = 0i64;
	*((_QWORD*)v29 + 2) = v29;
	*((_QWORD*)v29 + 3) = v29;
	for (i = a1[3329]; i; i = *(_QWORD*)(i + 24))
	{
		sub_1403FD3D0((__int64)v28, (__int64)v31, (_QWORD*)(i + 32));
		if (v32)
		{
			v19 = 0i64;
			v20 = 0i64;
			v21 = 0i64;
			LODWORD(v19) = *(_DWORD*)(i + 56);
			v20 = *(_QWORD*)(i + 32);
			v21 = *(_QWORD*)(i + 40);
			sub_1403F4740((__int64)a1, 0x597u, (__int64)&v19);
		}
	}
	v3 = sub_14018B280(80i64, 0);
	v27 = 0i64;
	v26 = v3;
	*(_BYTE*)v3 = 0;
	*((_QWORD*)v26 + 1) = 0i64;
	*((_QWORD*)v26 + 2) = v26;
	*((_QWORD*)v26 + 3) = v26;
	for (j = a1[3330]; j; j = *(_QWORD*)(j + 24))
	{
		v5 = sub_1403FAF50((__int64)v25, (unsigned int*)(j + 32));
		sub_1403ADDD0((__int64)v5, (__int64)v31, (int*)(j + 56));
		if (v32)
		{
			v19 = 0i64;
			v20 = 0i64;
			v21 = 0i64;
			LODWORD(v19) = *(_DWORD*)(j + 56);
			v20 = *(_QWORD*)(j + 32);
			v21 = *(_QWORD*)(j + 40);
			sub_1403F4740((__int64)a1, 0x597u, (__int64)&v19);
		}
	}
	v6 = sub_14018B280(40i64, 0);
	v24 = 0i64;
	v23 = v6;
	*(_BYTE*)v6 = 0;
	*((_QWORD*)v23 + 1) = 0i64;
	*((_QWORD*)v23 + 2) = v23;
	*((_QWORD*)v23 + 3) = v23;
	for (k = a1[3331]; k; k = *(_QWORD*)(k + 24))
	{
		sub_1400293C0((__int64)v22, (__int64)v31, (int*)(k + 32));
		if (v32)
		{
			v33 = *(_DWORD*)(k + 32);
			sub_1403F4740((__int64)a1, 0x59Cu, (__int64)&v33);
		}
	}
	if (v24)
	{
		v8 = v23;
		v9 = *((_QWORD*)v23 + 1);
		if (v9)
		{
			do
			{
				sub_1400083B0((__int64)v22, *(_QWORD*)(v9 + 24));
				v10 = *(_QWORD*)(v9 + 16);
				sub_14018B900(v9, 0);
				v9 = v10;
			} while (v10);
			v8 = v23;
		}
		*((_QWORD*)v8 + 2) = v8;
		*((_QWORD*)v23 + 1) = 0i64;
		*((_QWORD*)v23 + 3) = v23;
		v24 = 0i64;
	}
	sub_14018B900((__int64)v23, 0);
	if (v27)
	{
		v11 = v26;
		v12 = *((_QWORD*)v26 + 1);
		if (v12)
		{
			do
			{
				sub_1403FD500((__int64)v25, *(_QWORD**)(v12 + 24));
				v13 = *(_QWORD*)(v12 + 16);
				if (*(_QWORD*)(v12 + 64))
				{
					v14 = *(_QWORD*)(*(_QWORD*)(v12 + 56) + 8i64);
					if (v14)
					{
						do
						{
							sub_1400083B0(v12 + 48, *(_QWORD*)(v14 + 24));
							v15 = *(_QWORD*)(v14 + 16);
							sub_14018B900(v14, 0);
							v14 = v15;
						} while (v15);
					}
					*(_QWORD*)(*(_QWORD*)(v12 + 56) + 16i64) = *(_QWORD*)(v12 + 56);
					*(_QWORD*)(*(_QWORD*)(v12 + 56) + 8i64) = 0i64;
					*(_QWORD*)(*(_QWORD*)(v12 + 56) + 24i64) = *(_QWORD*)(v12 + 56);
					*(_QWORD*)(v12 + 64) = 0i64;
				}
				sub_14018B900(*(_QWORD*)(v12 + 56), 0);
				sub_14018B900(v12, 0);
				v12 = v13;
			} while (v13);
			v11 = v26;
		}
		*((_QWORD*)v11 + 2) = v11;
		*((_QWORD*)v26 + 1) = 0i64;
		*((_QWORD*)v26 + 3) = v26;
		v27 = 0i64;
	}
	sub_14018B900((__int64)v26, 0);
	if (v30)
	{
		v16 = v29;
		v17 = *((_QWORD*)v29 + 1);
		if (v17)
		{
			do
			{
				sub_1400083B0((__int64)v28, *(_QWORD*)(v17 + 24));
				v18 = *(_QWORD*)(v17 + 16);
				sub_14018B900(v17, 0);
				v17 = v18;
			} while (v18);
			v16 = v29;
		}
		*((_QWORD*)v16 + 2) = v16;
		*((_QWORD*)v29 + 1) = 0i64;
		*((_QWORD*)v29 + 3) = v29;
		v30 = 0i64;
	}
	sub_14018B900((__int64)v29, 0);
}
// 1403F8940: using guessed type char var_38[8];
// 1403F8940: using guessed type char var_58[8];
// 1403F8940: using guessed type char var_78[8];
// 1403F8940: using guessed type char var_98[8];

