//----- (0000000140770630) ----------------------------------------------------
__int64 __fastcall sub_140770630(__int64 a1, _QWORD* a2, int a3)
{
	__int64 v6; // r13
	_DWORD* v7; // rax
	int* v8; // rax
	__m128i* v9; // rsi
	int* v10; // rax
	__m128i* v11; // r15
	void* v12; // rbx
	__int64 v13; // rax
	__int64 v14; // r9
	_DWORD* v15; // rax
	char* v16; // rax
	__int64 v17; // rcx
	char v18; // al
	void* v19; // rbx
	__int64 v20; // rax
	__int64 v21; // r9
	_DWORD* v22; // rax
	char* v23; // rax
	__int64 v24; // rcx
	char v25; // al
	int v26; // edx
	void* v27; // rax
	unsigned __int64 v28; // rdx
	__int64 v29; // rcx
	__int128* v30; // rax
	__int128 v31; // xmm6
	int v32; // edx
	void* v33; // rax
	unsigned __int64 v34; // rdx
	__int64 v35; // rcx
	__int128* v36; // rax
	__int128 v37; // xmm6
	void* v38; // rbx
	__int64 v39; // rax
	__int64 v40; // r9
	_DWORD* v41; // rax
	char* v42; // rax
	__int64 v43; // rcx
	char v44; // al
	void* v45; // rbx
	__int64 v46; // rax
	__int64 v47; // r9
	_DWORD* v48; // rax
	char* v49; // rax
	__int64 v50; // rcx
	char v51; // al
	__int128 v53; // [rsp+30h] [rbp-50h] BYREF
	__int64 v54; // [rsp+40h] [rbp-40h] BYREF
	__m128i* v55; // [rsp+48h] [rbp-38h]
	unsigned int v56; // [rsp+C8h] [rbp+48h] BYREF

	if (!qword_140C65898)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65898 + 29504);
	if (!v6)
		return 0i64;
	v7 = sub_1400580E0((__int64)a2, a3);
	if (v7 == dword_140A12138 || v7[2] != 5)
		return 0i64;
	v8 = sub_14018B280(16i64, 0);
	v9 = (__m128i*)v8;
	if (v8)
		*(_WORD*)v8 = 0;
	v10 = sub_14018B280(16i64, 0);
	v11 = (__m128i*)v10;
	if (v10)
		*(_WORD*)v10 = 0;
	v12 = sub_1400580E0((__int64)a2, a3);
	v13 = sub_140062650((__int64)a2, (unsigned __int64*)"strIcon", 7ui64);
	v14 = a2[2];
	*(_QWORD*)&v53 = v13;
	DWORD2(v53) = 4;
	sub_14005E8E0((__int64)a2, (__int64)v12, (int*)&v53, v14);
	a2[2] += 16i64;
	v15 = (_DWORD*)(a2[2] - 16i64);
	if (v15 == dword_140A12138 || (unsigned int)(v15[2] - 3) > 1)
	{
		v18 = 0;
	}
	else
	{
		v16 = (char*)sub_140056BB0(a2, 0xFFFFFFFF, 0i64);
		sub_14018F2D0(&v54, v16);
		v17 = (__int64)v9;
		v9 = v55;
		if (v17)
			sub_14018B900(v17, 0);
		v18 = 1;
	}
	a2[2] -= 16i64;
	if (v18)
		sub_140109710((__int64*)a1, v6 + 240, v9, 0);
	v19 = sub_1400580E0((__int64)a2, a3);
	v20 = sub_140062650((__int64)a2, (unsigned __int64*)"strIconEdge", 0xBui64);
	v21 = a2[2];
	*(_QWORD*)&v53 = v20;
	DWORD2(v53) = 4;
	sub_14005E8E0((__int64)a2, (__int64)v19, (int*)&v53, v21);
	a2[2] += 16i64;
	v22 = (_DWORD*)(a2[2] - 16i64);
	if (v22 == dword_140A12138 || (unsigned int)(v22[2] - 3) > 1)
	{
		v25 = 0;
	}
	else
	{
		v23 = (char*)sub_140056BB0(a2, 0xFFFFFFFF, 0i64);
		sub_14018F2D0(&v54, v23);
		v24 = (__int64)v11;
		v11 = v55;
		if (v24)
			sub_14018B900(v24, 0);
		v25 = 1;
	}
	a2[2] -= 16i64;
	if (v25)
		sub_140109710((__int64*)(a1 + 48), v6 + 240, v11, 0);
	sub_140058710((__int64)a2, (unsigned __int64*)"crObject", 8ui64);
	v26 = a3 - 1;
	if (a3 >= 0)
		v26 = a3;
	v27 = sub_1400580E0((__int64)a2, v26);
	sub_14005E8E0((__int64)a2, (__int64)v27, (int*)(a2[2] - 16i64), a2[2] - 16i64);
	v53 = xmmword_140B7B240;
	sub_140143880(&v56, a2, 0xFFFFFFFF, (__m128*) & v53);
	v28 = v56;
	v29 = qword_140C63678;
	a2[2] -= 16i64;
	if (v28 >= *(_QWORD*)(v29 + 48))
		v30 = *(__int128**)(v29 + 40);
	else
		v30 = (__int128*)(*(_QWORD*)(v29 + 40) + 32i64 * (unsigned int)v28);
	v31 = *v30;
	sub_1401429A0(v29, v28);
	*(_OWORD*)(a1 + 96) = v31;
	sub_140058710((__int64)a2, (unsigned __int64*)"crEdge", 6ui64);
	v32 = a3 - 1;
	if (a3 >= 0)
		v32 = a3;
	v33 = sub_1400580E0((__int64)a2, v32);
	sub_14005E8E0((__int64)a2, (__int64)v33, (int*)(a2[2] - 16i64), a2[2] - 16i64);
	v53 = xmmword_140B7B240;
	sub_140143880(&v56, a2, 0xFFFFFFFF, (__m128*) & v53);
	v34 = v56;
	v35 = qword_140C63678;
	a2[2] -= 16i64;
	if (v34 >= *(_QWORD*)(v35 + 48))
		v36 = *(__int128**)(v35 + 40);
	else
		v36 = (__int128*)(*(_QWORD*)(v35 + 40) + 32i64 * (unsigned int)v34);
	v37 = *v36;
	sub_1401429A0(v35, v34);
	*(_OWORD*)(a1 + 112) = v37;
	sub_1400F0A10((__int64)a2, a3, (__int64)"fRadius", (float*)(a1 + 128));
	v38 = sub_1400580E0((__int64)a2, a3);
	v39 = sub_140062650((__int64)a2, (unsigned __int64*)"strIconAbove", 0xCui64);
	v40 = a2[2];
	*(_QWORD*)&v53 = v39;
	DWORD2(v53) = 4;
	sub_14005E8E0((__int64)a2, (__int64)v38, (int*)&v53, v40);
	a2[2] += 16i64;
	v41 = (_DWORD*)(a2[2] - 16i64);
	if (v41 == dword_140A12138 || (unsigned int)(v41[2] - 3) > 1)
	{
		v44 = 0;
	}
	else
	{
		v42 = (char*)sub_140056BB0(a2, 0xFFFFFFFF, 0i64);
		sub_14018F2D0(&v54, v42);
		v43 = (__int64)v9;
		v9 = v55;
		if (v43)
			sub_14018B900(v43, 0);
		v44 = 1;
	}
	a2[2] -= 16i64;
	if (v44)
		sub_140109710((__int64*)(a1 + 136), v6 + 240, v9, 0);
	v45 = sub_1400580E0((__int64)a2, a3);
	v46 = sub_140062650((__int64)a2, (unsigned __int64*)"strIconBelow", 0xCui64);
	v47 = a2[2];
	*(_QWORD*)&v53 = v46;
	DWORD2(v53) = 4;
	sub_14005E8E0((__int64)a2, (__int64)v45, (int*)&v53, v47);
	a2[2] += 16i64;
	v48 = (_DWORD*)(a2[2] - 16i64);
	if (v48 == dword_140A12138 || (unsigned int)(v48[2] - 3) > 1)
	{
		v51 = 0;
	}
	else
	{
		v49 = (char*)sub_140056BB0(a2, 0xFFFFFFFF, 0i64);
		sub_14018F2D0(&v54, v49);
		v50 = (__int64)v9;
		v9 = v55;
		if (v50)
			sub_14018B900(v50, 0);
		v51 = 1;
	}
	a2[2] -= 16i64;
	if (v51)
		sub_140109710((__int64*)(a1 + 184), v6 + 240, v9, 0);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;

