//----- (0000000140797D90) ----------------------------------------------------
__int64 __fastcall sub_140797D90(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	const char* v4; // rdi
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	int v8; // eax
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rcx
	int v11; // esi
	__int64 v12; // rax
	const char* v13; // rax
	signed int v14; // edi
	unsigned __int64 v15; // rdx
	_DWORD* v16; // rcx
	__m128i v17; // xmm0
	double v18; // xmm0_8
	int v19; // eax
	_DWORD* v20; // rcx
	__int64 v21; // rax
	unsigned __int64 v22; // r10
	__int64 v23; // r9
	_DWORD* v24; // rcx
	_DWORD* v25; // rax

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	v4 = aNoValue;
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v5 = (int)v1[2];
			if ((_DWORD)v5 != -1)
			{
				v6 = off_140A123B0[v5];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v6 = aNoValue;
	LABEL_9:
		v7 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v6);
		sub_140056570(a1, 1u, v7);
	}
	v8 = sub_1400585E0((__int64)a1, 1);
	v9 = a1[2];
	v10 = (_DWORD*)(a1[3] + 16i64);
	v11 = v8;
	if ((unsigned __int64)v10 >= v9)
	{
	LABEL_17:
		v13 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aFunction_3, v4);
		sub_140056570(a1, 2u, v13);
	}
	if (v10 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 6)
	{
		if ((unsigned __int64)v10 < v9 && v10 != dword_140A12138)
		{
			v12 = *(int*)(a1[3] + 24i64);
			if ((_DWORD)v12 != -1)
				v4 = off_140A123B0[v12];
		}
		goto LABEL_17;
	}
	v14 = 1;
	if (v8 < 1)
		return 0i64;
	while (1)
	{
		v15 = a1[2];
		v16 = dword_140A12138;
		v17 = _mm_cvtsi32_si128(v14);
		if (a1[3] + 16i64 < v15)
			v16 = (_DWORD*)(a1[3] + 16i64);
		*(_QWORD*)&v18 = *(_OWORD*)&_mm_cvtepi32_pd(v17);
		*(_QWORD*)v15 = *(_QWORD*)v16;
		v19 = v16[2];
		v20 = dword_140A12138;
		*(_DWORD*)(v15 + 8) = v19;
		a1[2] += 16i64;
		v21 = a1[2];
		*(_DWORD*)(v21 + 8) = 3;
		*(double*)v21 = v18;
		a1[2] += 16i64;
		v22 = a1[2];
		if (a1[3] < v22)
			v20 = (_DWORD*)a1[3];
		v23 = *(_QWORD*)v20;
		if ((unsigned int)(v14 - 1) >= *(_DWORD*)(*(_QWORD*)v20 + 56i64))
		{
			v24 = v18 == 0.0
				? *(_DWORD**)(v23 + 32)
				: (_DWORD*)(*(_QWORD*)(v23 + 32)
					+ 40 * ((unsigned int)(LODWORD(v18) + HIDWORD(v18)) % (((1i64 << *(_BYTE*)(v23 + 11)) - 1) | 1)));
			while (v24[6] != 3 || v18 != *((double*)v24 + 2))
			{
				v24 = (_DWORD*)*((_QWORD*)v24 + 4);
				if (!v24)
				{
					v24 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v24 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 16i64 * (v14 - 1));
		}
		*(_QWORD*)v22 = *(_QWORD*)v24;
		*(_DWORD*)(v22 + 8) = v24[2];
		a1[2] += 16i64;
		sub_140061D30((__int64)a1, (char*)(a1[2] - 48i64), 1);
		v25 = (_DWORD*)(a1[2] - 16i64);
		if (v25 == dword_140A12138 || v25[2])
			return 1i64;
		++v14;
		a1[2] = v25;
		if (v14 > v11)
			return 0i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

