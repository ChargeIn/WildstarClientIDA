//----- (0000000140487800) ----------------------------------------------------
_QWORD* __fastcall sub_140487800(_QWORD* a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // r10
	__int64 v8; // rdx
	__int64 v9; // r13
	__int64* v10; // rdi
	__int64* v11; // rsi
	__int64 v12; // r14
	__int64 v13; // r12
	_QWORD* v14; // rdi
	__int64 v15; // rsi
	__int64 v16; // r15
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rcx
	_QWORD* v20; // rax
	_QWORD* v21; // rbx
	__int64 v22; // r14
	__int64 v23; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64* v26; // rbx
	unsigned __int64 v27; // rsi
	char v29[16]; // [rsp+20h] [rbp-49h] BYREF
	__int64 v30; // [rsp+30h] [rbp-39h] BYREF
	__int64 v31; // [rsp+38h] [rbp-31h]
	__int64 v32; // [rsp+40h] [rbp-29h]
	__int64 v33; // [rsp+48h] [rbp-21h]
	__int128 v34; // [rsp+50h] [rbp-19h]
	__int128 v35; // [rsp+60h] [rbp-9h]
	__int128 v36; // [rsp+70h] [rbp+7h]
	__int64* v37; // [rsp+80h] [rbp+17h]
	int v39; // [rsp+D8h] [rbp+6Fh] BYREF
	__int64 v40; // [rsp+E0h] [rbp+77h]

	v4 = sub_14018B280(40i64, 0);
	a1[1] = v4;
	a1[2] = 0i64;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1[1] + 8i64) = 0i64;
	*(_QWORD*)(a1[1] + 16i64) = a1[1];
	*(_QWORD*)(a1[1] + 24i64) = a1[1];
	a1[4] = a2;
	v6 = sub_14043ED60(v5, *(_DWORD*)(a2 + 12));
	if (!v6)
		return a1;
	v34 = 0i64;
	v36 = 0i64;
	v31 = v7;
	v32 = v7;
	v35 = 0i64;
	v33 = v7;
	v37 = (__int64*)v7;
	sub_140172F70(&v30);
	v9 = *((_QWORD*)&v36 + 1);
	v10 = (__int64*)*((_QWORD*)&v35 + 1);
	if (*((_QWORD*)&v35 + 1) == *((_QWORD*)&v36 + 1) - 8i64)
	{
		v15 = (__int64)v37;
		v13 = v31;
		if ((unsigned __int64)(v32 - (((__int64)v37 - v31) >> 3)) < 2)
		{
			sub_140173030((__int64)&v30, v8);
			v15 = (__int64)v37;
			v10 = (__int64*)*((_QWORD*)&v35 + 1);
			v13 = v31;
		}
		v11 = (__int64*)(v15 + 8);
		*v11 = (__int64)sub_14018B280(496i64, 0);
		if (v10)
			*v10 = v6;
		v12 = *v11;
		v37 = v11;
		v9 = v12 + 496;
		*(_QWORD*)&v36 = v12;
		v14 = (_QWORD*)v12;
		*((_QWORD*)&v36 + 1) = v12 + 496;
	}
	else
	{
		if (*((_QWORD*)&v35 + 1))
			**((_QWORD**)&v35 + 1) = v6;
		v11 = v37;
		v12 = v36;
		v13 = v31;
		v14 = v10 + 1;
	}
	v16 = v33;
	while (v14 != (_QWORD*)v16)
	{
		v17 = (__int64)v14;
		if (v14 == (_QWORD*)v12)
			v17 = *(v11 - 1) + 496;
		v40 = *(_QWORD*)(v17 - 8);
		v39 = **(_DWORD**)(v40 + 8);
		sub_1400293C0((__int64)a1, (__int64)v29, &v39);
		if (v14 == (_QWORD*)v12)
		{
			sub_14018B900(v12, 0);
			v12 = *(v11 - 1);
			v9 = v12 + 496;
			v37 = --v11;
			v14 = (_QWORD*)(v12 + 488);
			*(_QWORD*)&v36 = v12;
			*((_QWORD*)&v36 + 1) = v12 + 496;
		}
		else
		{
			--v14;
		}
		v19 = v40;
		*((_QWORD*)&v35 + 1) = v14;
		v20 = *(_QWORD**)(v40 + 32);
		v21 = (_QWORD*)v20[2];
		if (v21 != v20)
		{
			do
			{
				if (v14 == (_QWORD*)(v9 - 8))
				{
					v22 = v21[4];
					if ((unsigned __int64)(v32 - (((__int64)v11 - v13) >> 3)) < 2)
					{
						sub_140173030((__int64)&v30, v18);
						v11 = v37;
						v14 = (_QWORD*)*((_QWORD*)&v35 + 1);
						v13 = v31;
					}
					*++v11 = (__int64)sub_14018B280(496i64, 0);
					if (v14)
						*v14 = v22;
					v12 = *v11;
					v19 = v40;
					v37 = v11;
					v9 = v12 + 496;
					*(_QWORD*)&v36 = v12;
					v14 = (_QWORD*)v12;
					*((_QWORD*)&v36 + 1) = v12 + 496;
					*((_QWORD*)&v35 + 1) = v12;
				}
				else
				{
					if (v14)
						*v14 = v21[4];
					*((_QWORD*)&v35 + 1) = ++v14;
				}
				v23 = v21[3];
				if (v23)
				{
					v21 = (_QWORD*)v21[3];
					for (i = *(_QWORD**)(v23 + 16); i; i = (_QWORD*)i[2])
						v21 = i;
				}
				else
				{
					for (j = v21[1]; v21 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v21 = (_QWORD*)j;
					if (v21[3] != j)
						v21 = (_QWORD*)j;
				}
			} while (v21 != *(_QWORD**)(v19 + 32));
			v16 = v33;
		}
	}
	if (v13)
	{
		v26 = (__int64*)v35;
		v27 = (unsigned __int64)(v11 + 1);
		if ((unsigned __int64)v35 < v27)
		{
			do
				sub_14018B900(*v26++, 0);
			while ((unsigned __int64)v26 < v27);
		}
		sub_14018B900(v13, 0);
	}
	return a1;
}
// 140487851: variable 'v5' is possibly undefined
// 140487896: variable 'v7' is possibly undefined
// 140487906: variable 'v8' is possibly undefined
// 140487A1E: variable 'v18' is possibly undefined
// 140487800: using guessed type char var_A0[16];

