//----- (00000001404AD310) ----------------------------------------------------
__int64 __fastcall sub_1404AD310(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, _QWORD* a5)
{
	int** v8; // r15
	__int64 v9; // rax
	__int64 v10; // r13
	__int64 v11; // rax
	unsigned int v12; // edi
	int v13; // r12d
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 result; // rax
	unsigned int v20; // eax
	_QWORD* v21; // r10
	int* v22; // rbx
	int v23; // r12d
	int* v24; // rax
	int v25; // eax
	__int64* v26; // rcx
	bool v27; // sf
	__int64* v28; // rax
	__int64 v29; // rdx
	_QWORD* v30; // r10
	_QWORD* v31; // rax
	_QWORD* i; // rbx
	__int64 v33; // rcx
	int* v34; // rax
	int* j; // rbx
	__int64 v36; // rcx
	char v37[8]; // [rsp+48h] [rbp-51h] BYREF
	__int64 v38; // [rsp+50h] [rbp-49h]
	__int64 v39; // [rsp+58h] [rbp-41h]
	unsigned int v40; // [rsp+60h] [rbp-39h] BYREF
	__int64 v41; // [rsp+68h] [rbp-31h] BYREF
	char v42[8]; // [rsp+70h] [rbp-29h] BYREF
	int* v43; // [rsp+78h] [rbp-21h]
	__int64 v44; // [rsp+88h] [rbp-11h]
	__int64 v45; // [rsp+90h] [rbp-9h]
	_QWORD* v46; // [rsp+98h] [rbp-1h]
	__int64 v47; // [rsp+A0h] [rbp+7h]

	v47 = a4;
	v46 = a5;
	if (!a3 || a2 == a3)
		return 2147500037i64;
	v8 = (int**)sub_1404806A0(a1, a2);
	v9 = sub_1404806A0(a1, a3);
	v10 = v9;
	if (!v8 || !v9)
		return 2147500037i64;
	v11 = sub_14024B980((*v8)[6]);
	v12 = 0;
	v13 = 0;
	if (v11)
		v13 = *(_DWORD*)(v11 + 40);
	v14 = sub_14024B980(*(_DWORD*)(*(_QWORD*)v10 + 24i64));
	if (v14)
		v15 = *(_DWORD*)(v14 + 40);
	else
		v15 = 0;
	if (v13 == v15)
	{
		LODWORD(v41) = 0;
		v40 = 0;
		v43 = sub_14018B280(24i64, 0);
		*(_QWORD*)v43 = v43;
		*((_QWORD*)v43 + 1) = v43;
		v38 = (__int64)sub_14018B280(24i64, 0);
		*(_QWORD*)v38 = v38;
		*(_QWORD*)(v38 + 8) = v38;
		v22 = v43;
		v23 = **v8;
		v24 = sub_14018B280(24i64, 0);
		if (v24 != (int*)-16i64)
			v24[4] = v23;
		*(_QWORD*)v24 = v22;
		*((_QWORD*)v24 + 1) = *((_QWORD*)v22 + 1);
		**((_QWORD**)v22 + 1) = v24;
		*((_QWORD*)v22 + 1) = v24;
		v25 = sub_1404AD660(a1, (__int64)v8, a3, (__int64)v37, (__int64)v42, &v41, v47, &v40);
		v26 = (__int64*)*((_QWORD*)v43 + 1);
		v27 = v25 < 0;
		v28 = (__int64*)v26[1];
		v29 = *v26;
		*v28 = *v26;
		*(_QWORD*)(v29 + 8) = v28;
		if (v27)
		{
			sub_14018B900((__int64)v26, 0);
			v12 = -2147467259;
		}
		else
		{
			sub_14018B900((__int64)v26, 0);
			v30 = v46;
			*v46 = v40;
			v30[1] = 1i64;
			v30[2] = 0i64;
			v30[3] = 0i64;
			v44 = 1i64;
			v30[4] = 1i64;
			v30[5] = 0i64;
			v45 = 0i64;
		}
		v31 = (_QWORD*)v38;
		for (i = *(_QWORD**)v38; i != (_QWORD*)v38; v31 = (_QWORD*)v38)
		{
			v33 = (__int64)i;
			i = (_QWORD*)*i;
			sub_14018B900(v33, 0);
		}
		*v31 = v31;
		*(_QWORD*)(v38 + 8) = v38;
		sub_14018B900(v38, 0);
		v34 = v43;
		for (j = *(int**)v43; j != v43; v34 = v43)
		{
			v36 = (__int64)j;
			j = *(int**)j;
			sub_14018B900(v36, 0);
		}
		*(_QWORD*)v34 = v34;
		*((_QWORD*)v43 + 1) = v43;
		sub_14018B900((__int64)v43, 0);
		return v12;
	}
	else
	{
		v16 = *(_QWORD*)(a1 + 240);
		v17 = v16;
		v18 = *(_QWORD*)(v16 + 8);
		while (v18)
		{
			if (*(_DWORD*)(v18 + 32) < a2)
			{
				v18 = *(_QWORD*)(v18 + 24);
			}
			else
			{
				v17 = v18;
				v18 = *(_QWORD*)(v18 + 16);
			}
		}
		if (v17 == v16 || (v41 = v17, a2 < *(_DWORD*)(v17 + 32)))
			v41 = v16;
		if (v41 == v16)
		{
			return 2147500037i64;
		}
		else
		{
			sub_1404AE120(v47, (_QWORD*)(v41 + 40));
			v20 = sub_1404AE170(*(_QWORD*)(v41 + 40));
			v21 = v46;
			v38 = 1i64;
			*v46 = v20;
			v21[1] = 1i64;
			v21[2] = 0i64;
			v21[3] = 0i64;
			v21[4] = 1i64;
			result = 0i64;
			v21[5] = 0i64;
			v39 = 0i64;
		}
	}
	return result;
}
// 1404AD310: using guessed type char var_A0[8];
// 1404AD310: using guessed type char var_78[8];

