//----- (000000014075BD20) ----------------------------------------------------
__int64 __fastcall sub_14075BD20(_QWORD* a1)
{
	char* v2; // rax
	int v3; // eax
	__int64 v4; // rcx
	int v5; // r15d
	int v6; // edx
	int v7; // ebx
	int v8; // esi
	__int16* v9; // rax
	_DWORD* v10; // r14
	char* v11; // rdx
	_DWORD* v12; // rax
	__int64 v13; // rcx
	__int16* v14; // rax
	char* v15; // rdx
	_DWORD* v16; // rax
	__int64 v17; // rcx
	__int16* v18; // rax
	char* v19; // rdx
	_DWORD* v20; // rax
	unsigned __int64 v21; // rdx
	int v22; // esi
	_DWORD* v23; // rax
	_DWORD* v24; // rcx
	int v25; // eax
	BOOL v26; // eax
	__int64 v27; // rcx
	__int64 v28; // rbx
	__int64 v29; // rax
	int v30; // eax
	__int64 v31; // rcx
	_DWORD* v32; // rdx
	__int64 v33; // rdx
	unsigned __int64 v34; // rcx
	__int64 v35; // rdi
	__int64 v36; // rbx
	__int64 v37; // rsi
	__int64 v38; // rdx
	int v40; // [rsp+40h] [rbp-C8h]
	__int64(__fastcall * *v41)(); // [rsp+48h] [rbp-C0h] BYREF
	__int64 v42; // [rsp+50h] [rbp-B8h]
	_QWORD* v43; // [rsp+58h] [rbp-B0h]
	int v44; // [rsp+60h] [rbp-A8h]
	__int128 v45[3]; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v46; // [rsp+98h] [rbp-70h] BYREF
	_WORD* v47; // [rsp+A0h] [rbp-68h]
	__int64 v48; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v49; // [rsp+C0h] [rbp-48h]
	__int64 v50; // [rsp+D8h] [rbp-30h] BYREF
	__int64 v51; // [rsp+E0h] [rbp-28h]
	__int64 v52; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v53; // [rsp+100h] [rbp-8h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v46, v2);
	v3 = sub_140056D60(a1, 2u);
	v5 = v3;
	switch (v3)
	{
	case 1:
		v7 = 230805;
		v6 = 148653;
		v8 = 230806;
		break;
	case 2:
		v6 = 240575;
		v7 = 240576;
		v8 = 240577;
		break;
	case 3:
		v6 = 281424;
		v7 = 281425;
		v8 = 281426;
		break;
	default:
		v4 = (unsigned int)(v3 - 4);
		if ((unsigned int)v4 > 2)
			goto LABEL_54;
		v6 = 316596;
		v7 = 317800;
		v8 = 316597;
		break;
	}
	v9 = sub_14034BDD0(v4, v6);
	v10 = dword_140A12138;
	v11 = (char*)sub_14018F0E0(v45, (unsigned __int16*)v9)[1];
	v12 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v12 < a1[2] && v12 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v11 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v52, v11);
	v13 = *((_QWORD*)&v45[0] + 1);
	if (*((_QWORD*)&v45[0] + 1))
		sub_14018B900(*((__int64*)&v45[0] + 1), 0);
	v14 = sub_14034BDD0(v13, v7);
	v15 = (char*)sub_14018F0E0(v45, (unsigned __int16*)v14)[1];
	v16 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v16 < a1[2] && v16 != dword_140A12138 && *(int*)(a1[3] + 56i64) > 0)
		v15 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v50, v15);
	v17 = *((_QWORD*)&v45[0] + 1);
	if (*((_QWORD*)&v45[0] + 1))
		sub_14018B900(*((__int64*)&v45[0] + 1), 0);
	v18 = sub_14034BDD0(v17, v8);
	v19 = (char*)sub_14018F0E0(v45, (unsigned __int16*)v18)[1];
	v20 = (_DWORD*)(a1[3] + 64i64);
	if ((unsigned __int64)v20 < a1[2] && v20 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
		v19 = (char*)sub_140056BB0(a1, 5u, 0i64);
	sub_14018F2D0(&v48, v19);
	if (*((_QWORD*)&v45[0] + 1))
		sub_14018B900(*((__int64*)&v45[0] + 1), 0);
	v21 = a1[2];
	v22 = 0;
	v23 = (_DWORD*)(a1[3] + 80i64);
	if ((unsigned __int64)v23 < v21 && v23 != dword_140A12138 && *(_DWORD*)(a1[3] + 88i64) == 1)
	{
		v24 = dword_140A12138;
		if ((unsigned __int64)v23 < v21)
			v24 = (_DWORD*)(a1[3] + 80i64);
		v25 = v24[2];
		v26 = v25 && (v25 != 1 || *v24);
		LOBYTE(v22) = v26;
	}
	sub_1407E4830((int*)v45, 0i64, 0x30ui64);
	v27 = a1[4];
	v41 = off_140B569F0;
	v43 = a1;
	v44 = 1;
	LODWORD(v42) = -2;
	if (*(_QWORD*)(v27 + 120) >= *(_QWORD*)(v27 + 112))
		sub_14005E2C0((__int64)a1);
	v28 = a1[2];
	v29 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v28 + 8) = 5;
	*(_QWORD*)v28 = v29;
	a1[2] += 16i64;
	v30 = sub_1400578C0((__int64)a1);
	v31 = (__int64)v43;
	LODWORD(v42) = v30;
	v32 = (_DWORD*)(v43[3] + 80i64);
	if ((unsigned __int64)v32 < v43[2] && v32 != dword_140A12138 && *(_DWORD*)(v43[3] + 88i64) == 5)
	{
		sub_1400579E0((__int64)v43, (__int64)v32, v30);
		v33 = (__int64)v43;
		v34 = v43[2];
		if (v43[3] + 80i64 < v34)
			v10 = (_DWORD*)(v43[3] + 80i64);
		*(_QWORD*)v34 = *(_QWORD*)v10;
		*(_DWORD*)(v34 + 8) = v10[2];
		*(_QWORD*)(v33 + 16) += 16i64;
		LODWORD(v42) = sub_1400578C0((__int64)v43);
		sub_14069D750((__int64)v45, (__int64*)&v41);
	}
	v35 = v51;
	v36 = v53;
	v40 = v22;
	v37 = v49;
	sub_140584490(v31, v5, v45, v47, v53, v51, v49, v40);
	v41 = off_140B56A08;
	if (v43)
		sub_1400579E0((__int64)v43, v38, v42);
	if (v37)
		sub_14018B900(v37, 0);
	if (v35)
		sub_14018B900(v35, 0);
	if (v36)
		sub_14018B900(v36, 0);
LABEL_54:
	if (v47)
		sub_14018B900((__int64)v47, 0);
	return 0i64;
}
// 14075BDC3: variable 'v4' is possibly undefined
// 14075BE27: variable 'v13' is possibly undefined
// 14075BE84: variable 'v17' is possibly undefined
// 14075C031: variable 'v31' is possibly undefined
// 14075C059: variable 'v38' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

