//----- (0000000140531360) ----------------------------------------------------
__int64 __fastcall sub_140531360(_QWORD* a1)
{
	__int64 v2; // rsi
	__int128* v4; // rbx
	__int128* v5; // rcx
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	double v13; // xmm0_8
	__int64* v14; // rax
	__int64 v15; // rax
	__int64* v16; // rax
	__int64 v17; // rax
	double v18; // xmm0_8
	__int64* v19; // rax
	__int128 v20; // [rsp+20h] [rbp-18h] BYREF
	int v21; // [rsp+48h] [rbp+10h] BYREF
	int v22; // [rsp+4Ch] [rbp+14h]
	unsigned __int64 v23; // [rsp+50h] [rbp+18h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = (__int128*)dword_140A12138;
	v5 = (__int128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int128*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4 && sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), &v23))
	{
		DWORD2(v20) = 3;
		v5 = &v20;
		*(_QWORD*)&v20 = v23;
	LABEL_9:
		v7 = (int)*(double*)v5;
		goto LABEL_10;
	}
	v7 = 0;
LABEL_10:
	v21 = v7;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (__int128*)(a1[3] + 32i64);
	v8 = *((_DWORD*)v4 + 2);
	if (v8 != 3)
	{
		if (v8 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), &v23))
		{
			v9 = 0;
			goto LABEL_17;
		}
		DWORD2(v20) = 3;
		v4 = &v20;
		*(_QWORD*)&v20 = v23;
	}
	v9 = (int)*(double*)v4;
LABEL_17:
	v22 = v9;
	sub_14052AF60(v2, &v20, &v21);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, qword_1409F1E34, 1ui64);
	v12 = a1[2];
	v13 = *(float*)&v20;
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = v13;
	a1[2] += 16i64;
	v14 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v14, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F1E14, 1ui64);
	v15 = a1[2];
	*(_QWORD*)v15 = 0i64;
	*(_DWORD*)(v15 + 8) = 3;
	a1[2] += 16i64;
	v16 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v16, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F1EA4, 1ui64);
	v17 = a1[2];
	v18 = *((float*)&v20 + 2);
	*(_DWORD*)(v17 + 8) = 3;
	*(double*)v17 = v18;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1409F1E14: using guessed type unsigned __int64 qword_1409F1E14[4];
// 1409F1E34: using guessed type unsigned __int64 qword_1409F1E34[9];
// 1409F1EA4: using guessed type unsigned __int64 qword_1409F1EA4[4];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

