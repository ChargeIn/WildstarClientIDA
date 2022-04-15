//----- (00000001400C7F50) ----------------------------------------------------
void __fastcall sub_1400C7F50(__int64 a1, _QWORD* a2)
{
	int* v4; // rax
	int* v5; // rsi
	int* v6; // rax
	_QWORD* v7; // rcx
	_QWORD* v8; // rbx
	__int64 v9; // r14
	__int64 v10; // rdi
	int* v11; // rax
	int* v12; // rax
	__int64 v13; // r9
	unsigned __int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // r8
	__int64 v17; // rax
	_QWORD** v18; // rdi
	int* v19; // r8
	_QWORD* v20; // rbx
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64* v23; // rcx
	__int64 v24; // rdx
	__int64* v25; // rax
	__int64 v26; // rcx
	_QWORD* v27; // rbx
	__int64 v28; // rcx
	int* v29; // rbx
	__int64 v30; // rcx
	__int64 v31[2]; // [rsp+30h] [rbp-48h] BYREF
	_QWORD* v32[2]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v33; // [rsp+50h] [rbp-28h] BYREF
	int* v34; // [rsp+58h] [rbp-20h]

	if (!a2[2] || (unsigned int)sub_1400F9ED0((__int64)a2) != 6)
		return;
	v4 = sub_14018B280(24i64, 0);
	*(_QWORD*)v4 = v4;
	v5 = v4;
	v34 = v4;
	*((_QWORD*)v4 + 1) = v4;
	v6 = sub_14018B280(24i64, 0);
	*(_QWORD*)v6 = v6;
	*((_QWORD*)v6 + 1) = v6;
	v7 = *(_QWORD**)(a1 + 576);
	v8 = (_QWORD*)*v7;
	v9 = (__int64)v6;
	if ((_QWORD*)*v7 != v7)
	{
		do
		{
			v10 = v8[2];
			if ((*(_BYTE*)(v10 + 28) & 1) != 0)
			{
				v11 = sub_14018B280(24i64, 0);
				if (v11 != (int*)-16i64)
					*((_QWORD*)v11 + 2) = v10;
				*(_QWORD*)v11 = v5;
				*((_QWORD*)v11 + 1) = *((_QWORD*)v5 + 1);
				**((_QWORD**)v5 + 1) = v11;
				*((_QWORD*)v5 + 1) = v11;
			}
			else
			{
				v12 = sub_14018B280(24i64, 0);
				if (v12 != (int*)-16i64)
					*((_QWORD*)v12 + 2) = v10;
				*(_QWORD*)v12 = v9;
				*((_QWORD*)v12 + 1) = *(_QWORD*)(v9 + 8);
				**(_QWORD**)(v9 + 8) = v12;
				*(_QWORD*)(v9 + 8) = v12;
			}
			v8 = (_QWORD*)*v8;
		} while (v8 != *(_QWORD**)(a1 + 576));
	}
	v13 = 0i64;
	v14 = *(_QWORD*)(qword_140C63650 + 768);
	v15 = 0i64;
	if (v14)
	{
		v16 = *(_QWORD*)(qword_140C63650 + 760);
		v17 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v16 + 8 * v17) + 400i64) != a2[2])
		{
			v15 = (unsigned int)(v15 + 1);
			v17 = (unsigned int)v15;
			if ((unsigned int)v15 >= v14)
				goto LABEL_18;
		}
		v13 = *(_QWORD*)(v16 + 8i64 * (unsigned int)v15);
	}
LABEL_18:
	v32[0] = a2;
	v32[1] = (_QWORD*)(v13 + 384);
	if (*(int**)v5 != v5)
	{
		sub_1400E0980((__int64)&v33, (__int64)v32);
		v5 = v34;
	}
	if ((__int64*)(a1 + 568) != &v33)
	{
		v18 = *(_QWORD***)(a1 + 576);
		v19 = *(int**)v5;
		v20 = *v18;
		if (*v18 != v18)
		{
			while (v19 != v5)
			{
				v21 = *((_QWORD*)v19 + 2);
				v19 = *(int**)v19;
				v22 = v20;
				v20 = (_QWORD*)*v20;
				v22[2] = v21;
				if (v20 == v18)
					goto LABEL_24;
			}
			goto LABEL_25;
		}
	LABEL_24:
		if (v19 == v5)
		{
		LABEL_25:
			while (v20 != v18)
			{
				v23 = v20;
				v20 = (_QWORD*)*v20;
				v24 = *v23;
				v25 = (__int64*)v23[1];
				*v25 = *v23;
				*(_QWORD*)(v24 + 8) = v25;
				sub_14018B900((__int64)v23, 0);
			}
			goto LABEL_29;
		}
		v31[0] = (__int64)v18;
		sub_14001FDD0(v15, v31, v19, v5);
	}
LABEL_29:
	v26 = *(_QWORD*)(a1 + 576);
	v32[0] = *(_QWORD**)v9;
	v33 = v26;
	v31[0] = v9;
	sub_1400E10F0(v26, &v33, v32, v31);
	v27 = *(_QWORD**)v9;
	while (v27 != (_QWORD*)v9)
	{
		v28 = (__int64)v27;
		v27 = (_QWORD*)*v27;
		sub_14018B900(v28, 0);
	}
	*(_QWORD*)v9 = v9;
	*(_QWORD*)(v9 + 8) = v9;
	sub_14018B900(v9, 0);
	v29 = *(int**)v5;
	while (v29 != v5)
	{
		v30 = (__int64)v29;
		v29 = *(int**)v29;
		sub_14018B900(v30, 0);
	}
	*(_QWORD*)v5 = v5;
	*((_QWORD*)v5 + 1) = v5;
	sub_14018B900((__int64)v5, 0);
}
// 1400C813F: variable 'v15' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

