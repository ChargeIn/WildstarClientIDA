#include "../winhttp.h"

//----- (00000001404C8E20) ----------------------------------------------------
__int64 __fastcall sub_1404C8E20(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
	__int64 v5; // r14
	unsigned int v6; // esi
	int v8; // r12d
	BOOL v9; // edi
	unsigned __int64 v10; // r15
	_QWORD* v11; // rbx
	int v12; // r15d
	__int64 v13; // rbx
	unsigned __int64 v14; // r15
	_QWORD* v15; // rbx
	int v16; // r15d
	__int64* v17; // rcx
	__int64* v18; // rbx
	__int64* v19; // rbx
	int* v20; // rcx
	unsigned __int64 v21; // r12
	int** v22; // r15
	int* v23; // rcx
	int* v24; // rax
	__int64* v25; // rdx
	_QWORD* v26; // rax
	__int64 v28; // [rsp+30h] [rbp-20h]
	__int64 v29; // [rsp+38h] [rbp-18h]
	__int64 v30[2]; // [rsp+40h] [rbp-10h] BYREF
	__int64 v31; // [rsp+90h] [rbp+40h] BYREF
	int v32; // [rsp+98h] [rbp+48h]
	int v33; // [rsp+A0h] [rbp+50h] BYREF

	v33 = a3;
	v32 = a2;
	v31 = a1;
	v5 = qword_140C659F8;
	v6 = 0;
	v8 = 0;
	v9 = 0;
	v10 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v33);
	v11 = *(_QWORD**)(*(_QWORD*)(v5 + 48) + 8 * (v10 % *(_QWORD*)(v5 + 40)));
	if (!v11)
		goto LABEL_5;
	while (v10 != *v11 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 64))(&v33, v11 + 2))
	{
		v11 = (_QWORD*)v11[1];
		if (!v11)
			goto LABEL_5;
	}
	v18 = v11 + 3;
	if (v18)
	{
		v13 = *v18;
		v12 = a5;
		if (*(_DWORD*)(v13 + 20) == v32)
		{
			sub_1404C72B0(v13, &v31, a4, a5);
			v8 = 1;
			LOBYTE(v9) = (_DWORD)v31 != 0;
		}
	}
	else
	{
	LABEL_5:
		v12 = a5;
		v13 = v31;
	}
	if (!v12 || *(_DWORD*)(a4 + 48) == 4)
	{
		if (v8)
		{
		LABEL_35:
			sub_1404CA720(v5, v13);
			goto LABEL_36;
		}
		v14 = (*(__int64(__fastcall**)(int*))(v5 + 96))(&v33);
		v15 = *(_QWORD**)(*(_QWORD*)(v5 + 88) + 8 * (v14 % *(_QWORD*)(v5 + 80)));
		if (v15)
		{
			while (v14 != *v15 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v5 + 104))(&v33, v15 + 2))
			{
				v15 = (_QWORD*)v15[1];
				if (!v15)
					goto LABEL_13;
			}
			v16 = v32;
			v19 = v15 + 3;
			if (v19)
			{
				v13 = *v19;
				if (*(_DWORD*)(v13 + 20) == v32)
				{
				LABEL_34:
					sub_1404C72B0(v13, &a5, a4, a5);
					v9 = a5 != 0;
					goto LABEL_35;
				}
				sub_1400B6120(v5 + 72, (__int64)&v33);
				sub_1404C6DC0(v13);
				sub_14018B900(v13, 0);
			}
		}
		else
		{
		LABEL_13:
			v16 = v32;
		}
		v17 = *(__int64**)a4;
		if (*(_QWORD*)a4)
		{
			v28 = *v17;
			v29 = v17[1];
		}
		else
		{
			LODWORD(v28) = 0;
			v29 = 0i64;
		}
		v30[0] = v28;
		v30[1] = v29;
		v20 = sub_14018B280(232i64, 0);
		if (v20)
			v13 = sub_1404C6C90((__int64)v20, v33, v30, v16, ++ * (_DWORD*)(v5 + 216));
		else
			v13 = 0i64;
		if (*(_QWORD*)(v5 + 72) == *(_QWORD*)(v5 + 80))
			sub_1400290D0(v5 + 72);
		v21 = (*(__int64(__fastcall**)(int*))(v5 + 96))(&v33);
		v22 = (int**)(*(_QWORD*)(v5 + 88) + 8 * (v21 % *(_QWORD*)(v5 + 80)));
		v23 = sub_14018B280(32i64, 0);
		if (v23)
		{
			v24 = *v22;
			*(_QWORD*)v23 = v21;
			*((_QWORD*)v23 + 1) = v24;
			LODWORD(v24) = v33;
			*((_QWORD*)v23 + 3) = v13;
			v23[4] = (int)v24;
		}
		else
		{
			v23 = 0i64;
		}
		*v22 = v23;
		++* (_QWORD*)(v5 + 72);
		v25 = (__int64*)(v5 + 112);
		if (!*(_QWORD*)v13)
		{
			*(_QWORD*)v13 = v25;
			*(_QWORD*)(v13 + 8) = *v25;
			*v25 = v13;
			v26 = *(_QWORD**)(v13 + 8);
			if (v26)
				*v26 = v13 + 8;
		}
		goto LABEL_34;
	}
LABEL_36:
	LOBYTE(v6) = v9;
	return v6;
}
// 1404C8FA4: variable 'v28' is possibly undefined
// 140C659F8: using guessed type __int64 qword_140C659F8;

