//----- (000000014078F720) ----------------------------------------------------
__int64 __fastcall sub_14078F720(_QWORD* a1)
{
	_DWORD* v1; // rax
	bool v3; // cf
	_DWORD* v4; // rcx
	__int64 v5; // rdi
	unsigned __int64 v6; // rsi
	__int64 v7; // r15
	_DWORD* v8; // rax
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	_DWORD* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rbp
	_DWORD* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	int v19; // r14d
	__int64 v20; // rdx
	int v21; // eax
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	int v26; // ecx
	__int64 v27; // rdx

	v1 = (_DWORD*)a1[3];
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = dword_140A12138;
	if (v3)
		v4 = v1;
	v5 = 0i64;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
		{
		LABEL_10:
			v8 = (_DWORD*)a1[3];
			if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || (v9 = (int)v8[2], (_DWORD)v9 == -1))
				v10 = aNoValue;
			else
				v10 = off_140A123B0[v9];
			v11 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aString_0, v10);
			sub_140056570(a1, 1u, v11);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = dword_140A12138;
		if (a1[3] < a1[2])
			v4 = (_DWORD*)a1[3];
	}
	v6 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	v7 = *(_QWORD*)v4 + 32i64;
	if (*(_QWORD*)v4 == -32i64)
		goto LABEL_10;
	v12 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		LODWORD(v13) = 1;
	else
		LODWORD(v13) = sub_140056D60(a1, 2u);
	v13 = (int)v13;
	if ((int)v13 < 0i64)
		v13 = v6 + (int)v13 + 1i64;
	v14 = 0i64;
	if (v13 >= 0)
		v14 = v13;
	v15 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v15 >= a1[2] || v15 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		LODWORD(v16) = v14;
	else
		LODWORD(v16) = sub_140056D60(a1, 3u);
	v16 = (int)v16;
	if ((int)v16 < 0i64)
		v16 = v6 + (int)v16 + 1i64;
	v17 = 0i64;
	if (v16 >= 0)
		v17 = v16;
	if (v14 <= 0)
		v14 = 1i64;
	if (v17 > v6)
		v17 = v6;
	if (v14 > v17)
		return 0i64;
	v19 = v17 - v14 + 1;
	if (v19 + v14 <= v17)
		sub_140056830(a1, (unsigned __int64*)aStringSliceToo);
	if (!(unsigned int)sub_140058190((__int64)a1, v19))
		sub_140056830(a1, (unsigned __int64*)"stack overflow (%s)", aStringSliceToo_0);
	if (v19 >= 4i64)
	{
		v20 = v7 + v14;
		do
		{
			v21 = *(unsigned __int8*)(v20 + v5 - 1);
			v22 = a1[2];
			v5 += 4i64;
			*(double*)v22 = (double)v21;
			*(_DWORD*)(v22 + 8) = 3;
			a1[2] += 16i64;
			v23 = a1[2];
			*(double*)v23 = (double)*(unsigned __int8*)(v20 + v5 - 4);
			*(_DWORD*)(v23 + 8) = 3;
			a1[2] += 16i64;
			v24 = a1[2];
			*(double*)v24 = (double)*(unsigned __int8*)(v20 + v5 - 3);
			*(_DWORD*)(v24 + 8) = 3;
			a1[2] += 16i64;
			v25 = a1[2];
			*(double*)v25 = (double)*(unsigned __int8*)(v20 + v5 - 2);
			*(_DWORD*)(v25 + 8) = 3;
			a1[2] += 16i64;
		} while (v5 < v19 - 3i64);
	}
	for (; v5 < v19; a1[2] += 16i64)
	{
		v26 = *(unsigned __int8*)(v7 + v14 + v5 - 1);
		v27 = a1[2];
		++v5;
		*(_DWORD*)(v27 + 8) = 3;
		*(double*)v27 = (double)v26;
	}
	return (unsigned int)v19;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

