//----- (0000000140686E20) ----------------------------------------------------
__int64 __fastcall sub_140686E20(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	int v5; // r14d
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r10
	unsigned int* v9; // r10
	__int64 v10; // r10
	__int64 v11; // rax
	__int64 v12; // rbp
	float v13; // xmm6_4
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int64 v16; // rbx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	__int64* v20; // rax
	float v21; // xmm6_4
	_QWORD* v22; // rax
	__int64 v23; // r10
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // rax
	__int64* v27; // rax
	float v28; // xmm6_4
	_QWORD* v29; // rax
	__int64 v30; // r10
	unsigned __int64* v31; // rdx
	__int64 v32; // rax
	__int64* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v37; // [rsp+20h] [rbp-38h] BYREF
	__int64 v38; // [rsp+28h] [rbp-30h]

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v5 = sub_1400578C0((__int64)a1);
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(a1, 1u)) != 0
		&& (v8 = *(_QWORD*)(v6 + 8)) != 0
		&& (v9 = *(unsigned int**)(v8 + 8)) != 0i64
		&& (unsigned int)sub_14048D5A0(v7, *v9))
	{
		v11 = sub_14024B980(*(_DWORD*)(v10 + 60));
		v12 = v11;
		if (v11)
		{
			v13 = *(float*)(v11 + 12);
			v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			v15 = a1[2];
			*(_QWORD*)v15 = *v14;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
			a1[2] += 16i64;
			v16 = -1i64;
			v17 = (unsigned __int64*)sub_14018F0E0(&v37, word_1409F544C)[1];
			if (v17)
			{
				v18 = -1i64;
				do
					++v18;
				while (*((_BYTE*)v17 + v18));
				sub_140058710((__int64)a1, v17, v18);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v38)
				sub_14018B900(v38, 0);
			v19 = a1[2];
			*(_DWORD*)(v19 + 8) = 3;
			*(double*)v19 = v13;
			a1[2] += 16i64;
			v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v21 = *(float*)(v12 + 16);
			v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			*(_QWORD*)v23 = *v22;
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
			a1[2] += 16i64;
			v24 = (unsigned __int64*)sub_14018F0E0(&v37, L"y")[1];
			if (v24)
			{
				v25 = -1i64;
				do
					++v25;
				while (*((_BYTE*)v24 + v25));
				sub_140058710((__int64)a1, v24, v25);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v38)
				sub_14018B900(v38, 0);
			v26 = a1[2];
			*(_DWORD*)(v26 + 8) = 3;
			*(double*)v26 = v21;
			a1[2] += 16i64;
			v27 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v27, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v28 = *(float*)(v12 + 20);
			v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			a1[2] += 16i64;
			v31 = (unsigned __int64*)sub_14018F0E0(&v37, word_1409F541C)[1];
			if (v31)
			{
				do
					++v16;
				while (*((_BYTE*)v31 + v16));
				sub_140058710((__int64)a1, v31, v16);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v38)
				sub_14018B900(v38, 0);
			v32 = a1[2];
			*(_DWORD*)(v32 + 8) = 3;
			*(double*)v32 = v28;
			a1[2] += 16i64;
			v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v4, v5);
	return 1i64;
}
// 140686EC2: variable 'v7' is possibly undefined
// 140686ECF: variable 'v10' is possibly undefined
// 140686FD2: variable 'v23' is possibly undefined
// 140687092: variable 'v30' is possibly undefined
// 14068714A: variable 'v35' is possibly undefined
// 140687179: variable 'v4' is possibly undefined
// 1409F541C: using guessed type unsigned __int16 word_1409F541C[24];
// 1409F544C: using guessed type unsigned __int16 word_1409F544C[26];
// 1409F567C: using guessed type wchar_t aY_9[2];
// 140C65898: using guessed type __int64 qword_140C65898;

