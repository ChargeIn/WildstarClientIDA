//----- (00000001406EA730) ----------------------------------------------------
__int64 __fastcall sub_1406EA730(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int v3; // ecx
	unsigned __int64 v4; // rdx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // esi
	_QWORD* v10; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rbx
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	__int64* v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // r11
	unsigned __int64* v19; // rdx
	__int64 v20; // rax
	__int64* v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int128 v26; // [rsp+20h] [rbp-48h]
	__int64 v27; // [rsp+30h] [rbp-38h] BYREF
	__int64 v28; // [rsp+38h] [rbp-30h]

	v2 = sub_1406E8880(a1, 1u);
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = v2;
	if (v4)
	{
		v6 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v6) + 400i64) == a1)
				break;
			v6 = ++v3;
		} while (v3 < v4);
	}
	v26 = *(_OWORD*)(v5 + 1104);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v9 = sub_1400578C0((__int64)a1);
	v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v11 = a1[2];
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	a1[2] += 16i64;
	v12 = -1i64;
	v13 = (unsigned __int64*)sub_14018F0E0(&v27, L"nX")[1];
	if (v13)
	{
		v14 = -1i64;
		do
			++v14;
		while (*((_BYTE*)v13 + v14));
		sub_140058710((__int64)a1, v13, v14);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v28)
		sub_14018B900(v28, 0);
	v15 = a1[2];
	*(_DWORD*)(v15 + 8) = 3;
	*(double*)v15 = *(float*)&v26;
	a1[2] += 16i64;
	v16 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v16, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	a1[2] += 16i64;
	v19 = (unsigned __int64*)sub_14018F0E0(&v27, L"nY")[1];
	if (v19)
	{
		do
			++v12;
		while (*((_BYTE*)v19 + v12));
		sub_140058710((__int64)a1, v19, v12);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v28)
		sub_14018B900(v28, 0);
	v20 = a1[2];
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = *((float*)&v26 + 1);
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v24, v9);
	return 1i64;
}
// 1406EA8D1: variable 'v18' is possibly undefined
// 1406EA97E: variable 'v23' is possibly undefined
// 1406EA990: variable 'v24' is possibly undefined
// 140B3F62C: using guessed type wchar_t aNy_4[3];
// 140B3F634: using guessed type wchar_t aNx_4[3];
// 140C63650: using guessed type __int64 qword_140C63650;

