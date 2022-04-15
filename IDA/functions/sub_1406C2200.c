//----- (00000001406C2200) ----------------------------------------------------
__int64 __fastcall sub_1406C2200(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r14
	__int128* v4; // rbx
	__int128* v5; // rcx
	int v6; // esi
	int v7; // eax
	int v8; // ebp
	int v9; // eax
	float v10; // xmm1_4
	__int128 v11; // xmm6
	float v12; // xmm6_4
	float v13; // xmm7_4
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	double v19; // xmm0_8
	__int64* v20; // rax
	__int64 v21; // rcx
	__int64* v22; // rax
	__int128 v23; // [rsp+20h] [rbp-68h] BYREF
	__int64 v24; // [rsp+30h] [rbp-58h]
	__int64 v25; // [rsp+38h] [rbp-50h]
	int v26; // [rsp+40h] [rbp-48h]
	unsigned __int64 v27; // [rsp+98h] [rbp+10h] BYREF

	result = sub_1406C01C0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = (__int128*)dword_140A12138;
	v5 = (__int128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int128*)(a1[3] + 16i64);
	v6 = 0;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 == 3)
		goto LABEL_8;
	if (v7 == 4 && sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), &v27))
	{
		DWORD2(v23) = 3;
		v5 = &v23;
		*(_QWORD*)&v23 = v27;
	LABEL_8:
		v8 = (int)*(double*)v5;
		goto LABEL_9;
	}
	v8 = 0;
LABEL_9:
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (__int128*)(a1[3] + 32i64);
	v9 = *((_DWORD*)v4 + 2);
	if (v9 == 3)
		goto LABEL_15;
	if (v9 == 4 && sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), &v27))
	{
		DWORD2(v23) = 3;
		v4 = &v23;
		*(_QWORD*)&v23 = v27;
	LABEL_15:
		v6 = (int)*(double*)v4;
	}
	v10 = *(float*)(v3 + 1872);
	v11 = *(_OWORD*)(v3 + 1888);
	v24 = v3 + 2284;
	v23 = v11;
	v25 = v3 + 2292;
	v26 = *(_DWORD*)(v3 + 2284) + *(_DWORD*)(v3 + 2292);
	v12 = *(float*)&v11 + (float)((float)(v8 - (v26 >> 1)) * v10);
	v13 = *((float*)&v11 + 2) + (float)((float)(v6 - ((*(_DWORD*)(v3 + 2288) + *(_DWORD*)(v3 + 2296)) >> 1)) * v10);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, qword_1409F706C, 1ui64);
	v16 = a1[2];
	*(_DWORD*)(v16 + 8) = 3;
	*(double*)v16 = v12;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F6FAC, 1ui64);
	v18 = a1[2];
	v19 = *((float*)&v23 + 1);
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = v19;
	a1[2] += 16i64;
	v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, qword_1409F6FD4, 1ui64);
	v21 = a1[2];
	*(_DWORD*)(v21 + 8) = 3;
	*(double*)v21 = v13;
	a1[2] += 16i64;
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1409F6FAC: using guessed type unsigned __int64 qword_1409F6FAC[5];
// 1409F6FD4: using guessed type unsigned __int64 qword_1409F6FD4[12];
// 1409F706C: using guessed type unsigned __int64 qword_1409F706C[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];

