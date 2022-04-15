//----- (00000001406F88C0) ----------------------------------------------------
__int64 __fastcall sub_1406F88C0(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // rax
	_DWORD* v5; // rax
	int v6; // esi
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int v10; // eax
	_DWORD* v11; // rcx
	int v12; // r14d
	char* v13; // rsi
	__int64 v14; // r15
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // ebp
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	int v24; // ebp
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rax
	__int64* v28; // rax
	float v29; // xmm6_4
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rbx

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v3;
		} while (v3 < v2);
	}
	v5 = (_DWORD*)a1[3];
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || (int)v5[2] <= 0 || (v6 = sub_140056D60(a1, 1u)) == 0)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v34 = a1[2];
		v35 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v34 + 8) = 5;
		*(_QWORD*)v34 = v35;
		a1[2] += 16i64;
		v36 = a1[2];
		*(_QWORD*)v36 = 0i64;
		*(_DWORD*)(v36 + 8) = 3;
	LABEL_29:
		v37 = a1[4];
		a1[2] += 16i64;
		if (*(_QWORD*)(v37 + 120) >= *(_QWORD*)(v37 + 112))
			sub_14005E2C0((__int64)a1);
		v38 = a1[2];
		*(_QWORD*)v38 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v38 + 8) = 5;
		a1[2] += 16i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		v9 = a1[2];
		v10 = 0;
		v11 = &unk_140C65C50;
		while (v6 != *v11)
		{
			++v10;
			v11 += 19;
			if (v10 >= 0x20)
			{
				*(_QWORD*)v9 = 0i64;
				*(_DWORD*)(v9 + 8) = 3;
				goto LABEL_29;
			}
		}
		v12 = 1;
		v13 = (char*)&unk_140C65C50 + 76 * v10 + 8;
		v14 = 6i64;
		do
		{
			v15 = a1[2];
			*(_DWORD*)(v15 + 8) = 3;
			*(double*)v15 = (double)v12;
			v16 = a1[4];
			a1[2] += 16i64;
			if (*(_QWORD*)(v16 + 120) >= *(_QWORD*)(v16 + 112))
				sub_14005E2C0((__int64)a1);
			v17 = a1[2];
			v18 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v17 + 8) = 5;
			*(_QWORD*)v17 = v18;
			a1[2] += 16i64;
			v19 = *((_DWORD*)v13 - 1);
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v20 = a1[2];
			v21 = sub_140062650((__int64)a1, (unsigned __int64*)"eType", 5ui64);
			*(_DWORD*)(v20 + 8) = 4;
			*(_QWORD*)v20 = v21;
			a1[2] += 16i64;
			v22 = a1[2];
			*(_DWORD*)(v22 + 8) = 3;
			*(double*)v22 = (double)v19;
			a1[2] += 16i64;
			v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			v24 = *(_DWORD*)v13;
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v25 = a1[2];
			v26 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F7FA4, 3ui64);
			*(_DWORD*)(v25 + 8) = 4;
			*(_QWORD*)v25 = v26;
			a1[2] += 16i64;
			v27 = a1[2];
			*(_DWORD*)(v27 + 8) = 3;
			*(double*)v27 = (double)v24;
			a1[2] += 16i64;
			v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			v29 = *((float*)v13 + 1);
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v30 = a1[2];
			v31 = sub_140062650((__int64)a1, (unsigned __int64*)"fBonus", 6ui64);
			*(_DWORD*)(v30 + 8) = 4;
			*(_QWORD*)v30 = v31;
			a1[2] += 16i64;
			v32 = a1[2];
			*(_DWORD*)(v32 + 8) = 3;
			*(double*)v32 = v29;
			a1[2] += 16i64;
			v33 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v33, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			++v12;
			v13 += 12;
			--v14;
		} while (v14);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

