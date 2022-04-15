//----- (00000001404CA0D0) ----------------------------------------------------
void __fastcall sub_1404CA0D0(unsigned int a1, _QWORD* a2, unsigned int a3, __int64 a4)
{
	__int64 v7; // rdi
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	__int64* v10; // rbx
	__int64 v11; // r15
	__int64 v12; // rbx
	unsigned __int64 v13; // rsi
	int** v14; // rdi
	int* v15; // rax
	int* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rdi
	void(__fastcall * **v19)(_QWORD); // rbx
	__int64 v20; // rcx
	__int64 v21; // rdi
	unsigned __int64 v22; // rsi
	_QWORD* v23; // rbx
	int* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rdi
	unsigned __int64 v27; // rsi
	_QWORD* v28; // rbx
	_QWORD** v29; // rbx
	__int64 v30; // rdi
	unsigned __int64 v31; // rsi
	_QWORD* v32; // rbx
	__int64 v33[7]; // [rsp+20h] [rbp-38h] BYREF
	unsigned int v34; // [rsp+60h] [rbp+8h] BYREF

	v34 = a1;
	if (!a3)
	{
		v7 = qword_140C659F8;
		v8 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C659F8 + 96))(&v34);
		v9 = *(_QWORD**)(*(_QWORD*)(v7 + 88) + 8 * (v8 % *(_QWORD*)(v7 + 80)));
		if (v9)
		{
			while (v8 != *v9 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v7 + 104))(&v34, v9 + 2))
			{
				v9 = (_QWORD*)v9[1];
				if (!v9)
					goto LABEL_13;
			}
			v10 = v9 + 3;
			if (v10)
			{
				v11 = *v10;
				sub_1400B6120(qword_140C659F8 + 72, (__int64)&v34);
				v12 = qword_140C659F8;
				if (*(_QWORD*)(qword_140C659F8 + 32) == *(_QWORD*)(qword_140C659F8 + 40))
					sub_1400290D0(qword_140C659F8 + 32);
				v13 = (*(__int64(__fastcall**)(unsigned int*))(v12 + 56))(&v34);
				v14 = (int**)(*(_QWORD*)(v12 + 48) + 8 * (v13 % *(_QWORD*)(v12 + 40)));
				v15 = sub_14018B280(32i64, 0);
				if (v15)
				{
					v16 = *v14;
					*(_QWORD*)v15 = v13;
					*((_QWORD*)v15 + 1) = v16;
					LODWORD(v16) = v34;
					*((_QWORD*)v15 + 3) = v11;
					v15[4] = (int)v16;
				}
				*v14 = v15;
				++* (_QWORD*)(v12 + 32);
			}
		}
	LABEL_13:
		v17 = sub_1405B15C0((__int64)&qword_140C7DFB0, v34);
		v18 = v17;
		if (v17)
		{
			v19 = (void(__fastcall***)(_QWORD))a2[1];
			if (*(void(__fastcall****)(_QWORD))(v17 + 280) != v19)
			{
				if (v19)
					(**v19)(a2[1]);
				v20 = *(_QWORD*)(v18 + 280);
				if (v20)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				*(_QWORD*)(v18 + 280) = v19;
			}
		}
	}
	v21 = qword_140C659F8;
	v22 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C659F8 + 56))(&v34);
	v23 = *(_QWORD**)(*(_QWORD*)(v21 + 48) + 8 * (v22 % *(_QWORD*)(v21 + 40)));
	if (!v23)
		goto LABEL_24;
	while (v22 != *v23 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v21 + 64))(&v34, v23 + 2))
	{
		v23 = (_QWORD*)v23[1];
		if (!v23)
			goto LABEL_24;
	}
	if (v23 == (_QWORD*)-24i64)
	{
	LABEL_24:
		v24 = sub_14018B280(16i64, 0);
		if (v24)
		{
			v25 = v34;
			v24[1] = a3;
			*((_QWORD*)v24 + 1) = a2;
			*v24 = v25;
		}
		sub_1404CA680(v25, v24);
	}
	else
	{
		sub_1404C7F20(v23[3], a3);
		if (a3 == 1)
		{
			if (!a2)
				return;
			sub_1404B5280(a2);
			goto LABEL_48;
		}
	}
	if (a3 == 3)
	{
		v26 = qword_140C659F8;
		v27 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C659F8 + 56))(&v34);
		v28 = *(_QWORD**)(*(_QWORD*)(v26 + 48) + 8 * (v27 % *(_QWORD*)(v26 + 40)));
		if (v28)
		{
			while (v27 != *v28 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v26 + 64))(&v34, v28 + 2))
			{
				v28 = (_QWORD*)v28[1];
				if (!v28)
					return;
			}
			v29 = (_QWORD**)(v28 + 3);
			if (v29)
			{
				a2 = *v29;
				v33[0] = (__int64)*v29;
				sub_1400B6120(qword_140C659F8 + 32, (__int64)&v34);
				v30 = qword_140C659F8;
				v31 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C659F8 + 96))(&v34);
				v32 = *(_QWORD**)(*(_QWORD*)(v30 + 88) + 8 * (v31 % *(_QWORD*)(v30 + 80)));
				if (!v32)
					goto LABEL_44;
				while (v31 != *v32 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v30 + 104))(&v34, v32 + 2))
				{
					v32 = (_QWORD*)v32[1];
					if (!v32)
						goto LABEL_44;
				}
				if (v32 == (_QWORD*)-24i64)
				{
				LABEL_44:
					if (!a4)
					{
						sub_1400B6080(qword_140C659F8 + 72, (int*)&v34, v33);
						return;
					}
				}
				if (a2)
				{
					sub_1404C6DC0((__int64)a2);
				LABEL_48:
					sub_14018B900((__int64)a2, 0);
				}
			}
		}
	}
}
// 1404CA2B0: variable 'v25' is possibly undefined
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 1404CA0D0: using guessed type __int64 var_38[7];

