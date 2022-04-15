//----- (00000001407B4900) ----------------------------------------------------
__int64 __fastcall sub_1407B4900(__int64 a1, int* a2, void(__fastcall*** a3)(_QWORD))
{
	int* v6; // rbp
	__int64 v7; // rax
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	_WORD* v11; // r14
	int* v12; // r15
	int* v13; // rsi
	int* v14; // rbx
	int v15; // eax
	int* v16; // rbx
	__int16 v17; // ax
	int* v18; // rsi
	__int64 v19; // rax
	int* v20; // rsi
	__int64 v21; // r14
	_WORD* v22; // rax
	int* v23; // rax
	int* v24; // r14
	__int64 v25; // r15
	_WORD* v26; // r15
	int* v27; // rbp
	int* v28; // rdi
	int* v29; // rbx
	int v30; // eax
	int* v31; // rax
	int* v32; // rbx
	_QWORD* v33; // rdi
	unsigned int v34; // edi
	char v35[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v36; // [rsp+28h] [rbp-50h]
	_WORD* v37; // [rsp+30h] [rbp-48h]
	__int64 v38; // [rsp+38h] [rbp-40h]
	int* v39; // [rsp+88h] [rbp+10h] BYREF
	void(__fastcall * **v40)(_QWORD); // [rsp+90h] [rbp+18h]

	v40 = a3;
	if (!a2 || !*(_WORD*)a2 || !a3)
		return 2147942487i64;
	v6 = 0i64;
	v7 = 0i64;
	while (*((_WORD*)a2 + ++v7) != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v6 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v6, a2, v10);
	v11 = (_WORD*)((char*)v6 + v10);
	if ((int*)((char*)v6 + v10))
		*v11 = 0;
	v12 = *(int**)(a1 + 24);
	v13 = v12;
	v14 = (int*)*((_QWORD*)v12 + 1);
	while (v14)
	{
		if ((int)sub_1400454D0(*((_QWORD*)v14 + 5), *((_QWORD*)v14 + 6), (unsigned __int16*)v6, (__int64)v11) < 0)
		{
			v14 = (int*)*((_QWORD*)v14 + 3);
		}
		else
		{
			v13 = v14;
			v14 = (int*)*((_QWORD*)v14 + 2);
		}
	}
	if (v13 == v12
		|| (v15 = sub_1400454D0((__int64)v6, (__int64)v11, *((unsigned __int16**)v13 + 5), *((_QWORD*)v13 + 6)),
			v39 = v13,
			v15 < 0))
	{
		v39 = v12;
	}
	v16 = v39;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	if (v16 == *(int**)(a1 + 24) && (v17 = *(_WORD*)a2, v18 = a2, *(_WORD*)a2))
	{
		while (v17 != 46)
		{
			v17 = *((_WORD*)v18 + 1);
			v18 = (int*)((char*)v18 + 2);
			if (!v17)
				goto LABEL_25;
		}
		v24 = 0i64;
		v36 = 0i64;
		v25 = ((char*)v18 - (char*)a2) >> 1;
		v38 = 0i64;
		if ((unsigned __int64)(v25 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v24 = sub_14018B280(2 * (v25 + 1), 0);
			v36 = v24;
			v38 = (__int64)v24 + 2 * v25 + 2;
		}
		sub_1407DB590(v24, a2, 2 * v25);
		v26 = (_WORD*)v24 + v25;
		v37 = v26;
		if (v26)
			*v26 = 0;
		v27 = *(int**)(a1 + 24);
		v28 = v27;
		v29 = (int*)*((_QWORD*)v27 + 1);
		while (v29)
		{
			if ((int)sub_1400454D0(*((_QWORD*)v29 + 5), *((_QWORD*)v29 + 6), (unsigned __int16*)v24, (__int64)v26) < 0)
			{
				v29 = (int*)*((_QWORD*)v29 + 3);
			}
			else
			{
				v28 = v29;
				v29 = (int*)*((_QWORD*)v29 + 2);
			}
		}
		if (v28 == v27
			|| (v30 = sub_1400454D0((__int64)v24, (__int64)v26, *((unsigned __int16**)v28 + 5), *((_QWORD*)v28 + 6)),
				v39 = v28,
				v30 < 0))
		{
			v39 = v27;
		}
		if (v39 == *(int**)(a1 + 24))
		{
			v39 = 0i64;
			sub_1407B2160(&v39);
			v31 = sub_1407B4FE0(a1 + 16, (__int64)v35);
			v32 = v39;
			v33 = v31;
			if (*(int**)v31 != v39)
			{
				if (v39)
					(**(void(__fastcall***)(int*))v39)(v39);
				if (*v33)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v33 + 8i64))(*v33);
				*v33 = v32;
			}
			v34 = (*(__int64(__fastcall**)(int*, __int64, void(__fastcall***)(_QWORD)))(*(_QWORD*)v32 + 200i64))(
				v32,
				(__int64)v18 + 2,
				v40);
			(*(void(__fastcall**)(int*))(*(_QWORD*)v32 + 8i64))(v32);
		}
		else
		{
			v34 = (*(__int64(__fastcall**)(_QWORD, __int64, void(__fastcall***)(_QWORD)))(**((_QWORD**)v39 + 8) + 200i64))(
				*((_QWORD*)v39 + 8),
				(__int64)v18 + 2,
				v40);
		}
		if (v24)
			sub_14018B900((__int64)v24, 0);
		return v34;
	}
	else
	{
	LABEL_25:
		v19 = 0i64;
		v20 = 0i64;
		v36 = 0i64;
		v38 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v19;
			while (*((_WORD*)a2 + v19));
		}
		v21 = (2 * v19) >> 1;
		if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v20 = sub_14018B280(2 * (v21 + 1), 0);
			v36 = v20;
			v38 = (__int64)v20 + 2 * v21 + 2;
		}
		sub_1407DB590(v20, a2, 2 * v21);
		v22 = (_WORD*)v20 + v21;
		v37 = v22;
		if (v22)
			*v22 = 0;
		v23 = sub_1407B4FE0(a1 + 16, (__int64)v35);
		sub_1400035C0(v23, v40);
		if (v20)
			sub_14018B900((__int64)v20, 0);
		return 0i64;
	}
}
// 1407B4900: using guessed type char var_58[8];

