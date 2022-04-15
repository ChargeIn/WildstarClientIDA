//----- (00000001404AD660) ----------------------------------------------------
__int64 __fastcall sub_1404AD660(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	__int64 a4,
	__int64 a5,
	_DWORD* a6,
	__int64 a7,
	unsigned int* a8)
{
	__int64 v8; // rbp
	__int64 v11; // rdx
	__int64 v12; // rax
	unsigned int v13; // eax
	__int64 v14; // rbx
	int* v15; // rax
	unsigned int v16; // ebx
	__int64 v17; // rbx
	unsigned int v18; // esi
	_QWORD* v19; // rcx
	_QWORD* v20; // rax
	int v21; // ebp
	__int64 v22; // rdi
	int* v23; // rax
	__int64 v24; // rdi
	int* v25; // rax
	int v26; // eax
	__int64* v27; // rcx
	__int64 v28; // rdx
	__int64* v29; // rax
	__int64* v30; // rcx
	__int64 v31; // rdx
	__int64* v32; // rax
	__int64 v33; // rax
	__int64 i; // rax
	__int64 j; // rax
	char v37[8]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v38; // [rsp+48h] [rbp-40h]
	__int64 v40; // [rsp+98h] [rbp+10h]

	v8 = a1;
	sub_14048B2A0((__int64)v37, a2 + 8);
	v11 = v38;
	v12 = *(_QWORD*)(v38 + 8);
	if (!v12)
		goto LABEL_8;
	do
	{
		if (*(_DWORD*)(v12 + 32) < a3)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v11 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	} while (v12);
	if (v11 == v38 || (v40 = v11, a3 < *(_DWORD*)(v11 + 32)))
		LABEL_8:
	v40 = v38;
	if (v40 == v38)
	{
		v17 = *(_QWORD*)(v38 + 16);
		while (v17 != v38)
		{
			v18 = *(_DWORD*)(v17 + 32);
			if (sub_1404AD9B0(v8, v18) && (unsigned int)sub_1404ADB70(v8, v18))
			{
				v19 = *(_QWORD**)(a5 + 8);
				v20 = (_QWORD*)*v19;
				if ((_QWORD*)*v19 == v19)
				{
				LABEL_22:
					v21 = sub_1404AE170(*(_QWORD*)(v17 + 40));
					if (!*a8 || v21 + *a6 < *a8)
					{
						*a6 += v21;
						v22 = *(_QWORD*)(a4 + 8);
						v23 = sub_14018B280(24i64, 0);
						if (v23 != (int*)-16i64)
							*((_QWORD*)v23 + 2) = *(_QWORD*)(v17 + 40);
						*(_QWORD*)v23 = v22;
						*((_QWORD*)v23 + 1) = *(_QWORD*)(v22 + 8);
						**(_QWORD**)(v22 + 8) = v23;
						*(_QWORD*)(v22 + 8) = v23;
						v24 = *(_QWORD*)(a5 + 8);
						v25 = sub_14018B280(24i64, 0);
						if (v25 != (int*)-16i64)
							v25[4] = v18;
						*(_QWORD*)v25 = v24;
						*((_QWORD*)v25 + 1) = *(_QWORD*)(v24 + 8);
						**(_QWORD**)(v24 + 8) = v25;
						*(_QWORD*)(v24 + 8) = v25;
						v26 = sub_1404806A0(a1, v18);
						sub_1404AD660(a1, v26, a3, a4, a5, (__int64)a6, a7, (__int64)a8);
						v27 = *(__int64**)(*(_QWORD*)(a5 + 8) + 8i64);
						v28 = *v27;
						v29 = (__int64*)v27[1];
						*v29 = *v27;
						*(_QWORD*)(v28 + 8) = v29;
						sub_14018B900((__int64)v27, 0);
						v30 = *(__int64**)(*(_QWORD*)(a4 + 8) + 8i64);
						v31 = *v30;
						v32 = (__int64*)v30[1];
						*v32 = *v30;
						*(_QWORD*)(v31 + 8) = v32;
						sub_14018B900((__int64)v30, 0);
						*a6 -= v21;
					}
					v8 = a1;
				}
				else
				{
					while (*((_DWORD*)v20 + 4) != v18)
					{
						v20 = (_QWORD*)*v20;
						if (v20 == v19)
							goto LABEL_22;
					}
				}
			}
			v33 = *(_QWORD*)(v17 + 24);
			if (v33)
			{
				v17 = *(_QWORD*)(v17 + 24);
				for (i = *(_QWORD*)(v33 + 16); i; i = *(_QWORD*)(i + 16))
					v17 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v17 + 8); v17 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v17 = j;
				if (*(_QWORD*)(v17 + 24) != j)
					v17 = j;
			}
		}
		if (**(_QWORD**)(a7 + 8) != *(_QWORD*)(a7 + 8))
			goto LABEL_15;
	LABEL_40:
		v16 = -2147467259;
		goto LABEL_41;
	}
	v13 = *a6 + sub_1404AE170(*(_QWORD*)(v40 + 40));
	if (*a8 && v13 >= *a8)
		goto LABEL_40;
	*a8 = v13;
	sub_1404AF710(a7, a4);
	v14 = *(_QWORD*)(a7 + 8);
	v15 = sub_14018B280(24i64, 0);
	if (v15 != (int*)-16i64)
		*((_QWORD*)v15 + 2) = *(_QWORD*)(v40 + 40);
	*(_QWORD*)v15 = v14;
	*((_QWORD*)v15 + 1) = *(_QWORD*)(v14 + 8);
	**(_QWORD**)(v14 + 8) = v15;
	*(_QWORD*)(v14 + 8) = v15;
LABEL_15:
	v16 = 0;
LABEL_41:
	sub_140008410((__int64)v37);
	sub_14018B900(v38, 0);
	return v16;
}
// 1404AD660: using guessed type char var_48[8];

