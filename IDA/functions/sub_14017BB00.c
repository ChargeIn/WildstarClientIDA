//----- (000000014017BB00) ----------------------------------------------------
void __fastcall sub_14017BB00(__int64 a1, float a2)
{
	float v3; // xmm8_4
	float v4; // xmm6_4
	float v5; // xmm9_4
	int* v6; // rsi
	__int64* v7; // rcx
	__int64 v8; // rdx
	__int64* v9; // rax
	_QWORD* v10; // rdi
	float v11; // xmm6_4
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rbx
	int* v16; // rax
	int* v17; // rax
	__int64 v18; // rdi
	__int64 v19; // rbx
	int* v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rdx
	_QWORD* v23; // rax
	__int64** v24; // rax
	__int64* v25; // rcx
	__int64 v26; // rdx
	_QWORD* v27; // rax
	__int64 v28; // rdi
	__int64 v29; // rcx
	__int64 v30; // rbx
	int* v31; // rax
	int* v32; // rbx
	__int64 v33; // rcx

	v3 = a2 * *(float*)(a1 + 1088);
	v4 = 0.0;
	v5 = (float)(*(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716));
	v6 = sub_14018B280(24i64, 0);
	*(_QWORD*)v6 = v6;
	*((_QWORD*)v6 + 1) = v6;
	while (**(_QWORD**)(a1 + 1032) != *(_QWORD*)(a1 + 1032))
	{
		v7 = **(__int64***)(a1 + 1032);
		v8 = *v7;
		v9 = (__int64*)v7[1];
		v10 = (_QWORD*)v7[2];
		*v9 = *v7;
		*(_QWORD*)(v8 + 8) = v9;
		sub_14018B900((__int64)v7, 0);
		v11 = *((float*)v10 + 8);
		if (sub_14017BAA0(a1))
		{
			v11 = v11 - v3;
			sub_14017B360((__int64)v10, v11);
		}
		v12 = *v10;
		v4 = v11 + *((float*)v10 + 7);
		if (!*v10 || (*(_BYTE*)(v12 + 28) & 1) != 0)
		{
			if (v4 > (float)-v5)
			{
				v17 = sub_14018B280(24i64, 0);
				if (v17 != (int*)-16i64)
					*((_QWORD*)v17 + 2) = v10;
				*(_QWORD*)v17 = v6;
				*((_QWORD*)v17 + 1) = *((_QWORD*)v6 + 1);
				**((_QWORD**)v6 + 1) = v17;
				*((_QWORD*)v6 + 1) = v17;
			}
			else if (((v10[1] & 2) == 0 || *((_DWORD*)v10 + 3))
				&& (*((_DWORD*)v10 + 3) >= *((_DWORD*)v10 + 4) || *((float*)v10 + 6) <= *((float*)v10 + 5)))
			{
				sub_14017B8F0(v10);
			}
			else
			{
				sub_1400D42F0(v12, 0, 1, 4.0);
				v15 = *(_QWORD*)(a1 + 1048);
				v16 = sub_14018B280(24i64, 0);
				if (v16 != (int*)-16i64)
					*((_QWORD*)v16 + 2) = v10;
				*(_QWORD*)v16 = v15;
				*((_QWORD*)v16 + 1) = *(_QWORD*)(v15 + 8);
				**(_QWORD**)(v15 + 8) = v16;
				*(_QWORD*)(v15 + 8) = v16;
			}
		}
		else
		{
			sub_1400C6B20(v12);
			if (*v10)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 8i64))(*v10);
				*v10 = 0i64;
			}
			sub_1401429A0(qword_140C63678, *((_DWORD*)v10 + 24));
			v13 = v10[6];
			if (v13)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
				v10[6] = 0i64;
			}
			v14 = v10[9];
			if (v14)
				sub_14018B900(v14, 0);
			sub_14018B900((__int64)v10, 0);
		}
	}
	while (*(int**)v6 != v6)
	{
		v18 = *(_QWORD*)v6;
		v19 = *(_QWORD*)(a1 + 1032);
		v20 = sub_14018B280(24i64, 0);
		if (v20 != (int*)-16i64)
			*((_QWORD*)v20 + 2) = *(_QWORD*)(v18 + 16);
		*(_QWORD*)v20 = v19;
		*((_QWORD*)v20 + 1) = *(_QWORD*)(v19 + 8);
		**(_QWORD**)(v19 + 8) = v20;
		*(_QWORD*)(v19 + 8) = v20;
		v21 = *(_QWORD*)v6;
		v22 = **(_QWORD**)v6;
		v23 = *(_QWORD**)(*(_QWORD*)v6 + 8i64);
		*v23 = v22;
		*(_QWORD*)(v22 + 8) = v23;
		sub_14018B900(v21, 0);
	}
	if (v4 <= 0.0)
	{
		v24 = *(__int64***)(a1 + 1048);
		if (*v24 != (__int64*)v24)
		{
			v25 = *v24;
			v26 = **v24;
			v27 = (_QWORD*)(*v24)[1];
			v28 = v25[2];
			*v27 = v26;
			*(_QWORD*)(v26 + 8) = v27;
			sub_14018B900((__int64)v25, 0);
			v29 = *(_QWORD*)v28;
			++* (_DWORD*)(v28 + 12);
			if (v29)
				sub_1400D42F0(v29, 1, 1, 4.0);
			sub_14017B360(v28, 0.0);
			v30 = *(_QWORD*)(a1 + 1032);
			v31 = sub_14018B280(24i64, 0);
			if (v31 != (int*)-16i64)
				*((_QWORD*)v31 + 2) = v28;
			*(_QWORD*)v31 = v30;
			*((_QWORD*)v31 + 1) = *(_QWORD*)(v30 + 8);
			**(_QWORD**)(v30 + 8) = v31;
			*(_QWORD*)(v30 + 8) = v31;
		}
	}
	v32 = *(int**)v6;
	while (v32 != v6)
	{
		v33 = (__int64)v32;
		v32 = *(int**)v32;
		sub_14018B900(v33, 0);
	}
	*(_QWORD*)v6 = v6;
	*((_QWORD*)v6 + 1) = v6;
	sub_14018B900((__int64)v6, 0);
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C63678: using guessed type __int64 qword_140C63678;

