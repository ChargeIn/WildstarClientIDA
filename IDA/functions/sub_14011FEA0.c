//----- (000000014011FEA0) ----------------------------------------------------
__int64 __fastcall sub_14011FEA0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rdx
	unsigned __int64 v5; // r8
	unsigned int v6; // ecx
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // r13
	_QWORD* v10; // rax
	int v11; // ebp
	_QWORD* v12; // rbx
	__int64 v13; // rax
	int v14; // r15d
	__int64 v15; // rcx
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdi
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdi
	__int64 v24; // rax
	unsigned __int64* v25; // r14
	unsigned __int64 v26; // rbp
	__int64 v27; // rdi
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rdi
	__int64 v32; // rax
	unsigned __int64* v33; // r14
	unsigned __int64 v34; // rbp
	__int64 v35; // rdi
	__int64 v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rdi
	__int64 v40; // rax
	__int64 v41; // rcx
	__int64 v42; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v46; // [rsp+20h] [rbp-48h] BYREF
	__int64 v47; // [rsp+28h] [rbp-40h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	v4 = qword_140C63650;
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = *(_QWORD*)(v4 + 768);
	v6 = 0;
	if (v5)
	{
		v7 = *(_QWORD*)(v4 + 760);
		v8 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != a1)
		{
			v8 = ++v6;
			if (v6 >= v5)
				goto LABEL_7;
		}
		v9 = *(_QWORD*)(v7 + 8i64 * v6);
	}
	else
	{
	LABEL_7:
		v9 = 0i64;
	}
	v10 = *(_QWORD**)(v9 + 2800);
	v11 = 0;
	v12 = (_QWORD*)v10[2];
	if (v12 != v10)
	{
		do
		{
			v13 = *(_QWORD*)(a1 + 16);
			v14 = v11 + 1;
			*(_DWORD*)(v13 + 8) = 3;
			*(double*)v13 = (double)(v11 + 1);
			v15 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v15 + 120) >= *(_QWORD*)(v15 + 112))
				sub_14005E2C0(a1);
			v16 = *(_QWORD*)(a1 + 16);
			v17 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v16 + 8) = 5;
			*(_QWORD*)v16 = v17;
			v18 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v18 + 120) >= *(_QWORD*)(v18 + 112))
				sub_14005E2C0(a1);
			v19 = *(_QWORD*)(a1 + 16);
			v20 = sub_140062650(a1, (unsigned __int64*)"index", 5ui64);
			*(_DWORD*)(v19 + 8) = 4;
			*(_QWORD*)v19 = v20;
			*(_QWORD*)(a1 + 16) += 16i64;
			v21 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v21 + 8) = 3;
			*(double*)v21 = (double)v11;
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v22 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) -= 32i64;
			if (*(_QWORD*)(v22 + 120) >= *(_QWORD*)(v22 + 112))
				sub_14005E2C0(a1);
			v23 = *(_QWORD*)(a1 + 16);
			v24 = sub_140062650(a1, (unsigned __int64*)"name", 4ui64);
			*(_DWORD*)(v23 + 8) = 4;
			*(_QWORD*)v23 = v24;
			*(_QWORD*)(a1 + 16) += 16i64;
			v25 = (unsigned __int64*)sub_14018F0E0(&v46, *(unsigned __int16**)(v12[8] + 56i64))[1];
			if (v25)
			{
				v26 = -1i64;
				do
					++v26;
				while (*((_BYTE*)v25 + v26));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v27 = *(_QWORD*)(a1 + 16);
				v28 = sub_140062650(a1, v25, v26);
				*(_DWORD*)(v27 + 8) = 4;
				*(_QWORD*)v27 = v28;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v29 = v47;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v29)
				sub_14018B900(v29, 0);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v30 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) -= 32i64;
			if (*(_QWORD*)(v30 + 120) >= *(_QWORD*)(v30 + 112))
				sub_14005E2C0(a1);
			v31 = *(_QWORD*)(a1 + 16);
			v32 = sub_140062650(a1, (unsigned __int64*)"face", 4ui64);
			*(_DWORD*)(v31 + 8) = 4;
			*(_QWORD*)v31 = v32;
			*(_QWORD*)(a1 + 16) += 16i64;
			v33 = (unsigned __int64*)sub_14018F0E0(&v46, *(unsigned __int16**)(v12[8] + 24i64))[1];
			if (v33)
			{
				v34 = -1i64;
				do
					++v34;
				while (*((_BYTE*)v33 + v34));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v35 = *(_QWORD*)(a1 + 16);
				v36 = sub_140062650(a1, v33, v34);
				*(_DWORD*)(v35 + 8) = 4;
				*(_QWORD*)v35 = v36;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			v37 = v47;
			*(_QWORD*)(a1 + 16) += 16i64;
			if (v37)
				sub_14018B900(v37, 0);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			v38 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) -= 32i64;
			if (*(_QWORD*)(v38 + 120) >= *(_QWORD*)(v38 + 112))
				sub_14005E2C0(a1);
			v39 = *(_QWORD*)(a1 + 16);
			v40 = sub_140062650(a1, (unsigned __int64*)"size", 4ui64);
			*(_DWORD*)(v39 + 8) = 4;
			*(_QWORD*)v39 = v40;
			*(_QWORD*)(a1 + 16) += 16i64;
			v41 = *(_QWORD*)(a1 + 16);
			*(double*)v41 = (double)*(int*)(v12[8] + 80i64);
			*(_DWORD*)(v41 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v42 = v12[3];
			v11 = v14;
			if (v42)
			{
				v12 = (_QWORD*)v12[3];
				for (i = *(_QWORD**)(v42 + 16); i; i = (_QWORD*)i[2])
					v12 = i;
			}
			else
			{
				for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = (_QWORD*)j;
				if (v12[3] != j)
					v12 = (_QWORD*)j;
			}
		} while (v12 != *(_QWORD**)(v9 + 2800));
	}
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

