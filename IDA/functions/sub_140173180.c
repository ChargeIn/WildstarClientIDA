//----- (0000000140173180) ----------------------------------------------------
__int64 __fastcall sub_140173180(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6)
{
	__int64 v7; // rdi
	int v8; // edx
	__int64* v9; // rcx
	bool v10; // cc
	__int128* v11; // rdx
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // r14
	__int128* v17; // rdx
	__int64 v18; // rcx
	int v19; // eax
	int* v20; // rax
	__int64 v21; // rax
	__int128 v22; // xmm1
	unsigned int v23; // ebx
	__int64 v24; // rcx
	__int128* v25; // r8
	__int64 v26; // rdx
	int v27; // eax
	int* v28; // rax
	__int64 v29; // rax
	__int128 v30; // xmm1
	unsigned int v31; // ebx
	__int64 v32; // rcx
	__int128* v33; // rdx
	__int64 v34; // rcx
	int v35; // eax
	int* v36; // rax
	__int128 v37; // xmm1
	int v38; // edx
	__int64 v39; // rcx
	int v41; // [rsp+28h] [rbp-D8h]
	int v42; // [rsp+30h] [rbp-D0h]
	__int128 v43; // [rsp+60h] [rbp-A0h]
	__int128 v44; // [rsp+70h] [rbp-90h] BYREF
	__int128 v45; // [rsp+80h] [rbp-80h]
	__int128 v46; // [rsp+90h] [rbp-70h]
	__int128 v47; // [rsp+A0h] [rbp-60h]
	unsigned int v48; // [rsp+B0h] [rbp-50h]
	__int128 v49; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v50; // [rsp+D0h] [rbp-30h]
	__int128 v51; // [rsp+E0h] [rbp-20h]
	__int128 v52; // [rsp+F0h] [rbp-10h]
	__int128 v53; // [rsp+100h] [rbp+0h]
	unsigned int v54; // [rsp+110h] [rbp+10h]
	__int64 v55; // [rsp+120h] [rbp+20h] BYREF
	int v56; // [rsp+128h] [rbp+28h]
	int v57; // [rsp+12Ch] [rbp+2Ch]
	int v58; // [rsp+130h] [rbp+30h]
	int v59; // [rsp+134h] [rbp+34h]
	_BYTE v60[12]; // [rsp+138h] [rbp+38h]
	int v61; // [rsp+144h] [rbp+44h]

	v7 = 0i64;
	sub_1400C5920(a1, a2, a3, a4, a5, a6, 0i64);
	*(_QWORD*)(a1 + 432) |= 0x20ui64;
	v56 = 1077936128;
	v57 = 1084227584;
	*(_QWORD*)a1 = off_140B5D1C0;
	*(_QWORD*)(a1 + 1060) = 0i64;
	*(_DWORD*)(a1 + 1068) = 0;
	v55 = 0x3F80000000000000i64;
	v58 = -1082130432;
	v59 = -1082130432;
	v8 = 0;
	v9 = &v55;
	do
	{
		v10 = *((float*)v9 + 1) >= 0.0;
		*(__int64*)((char*)v9 + a1 - (_QWORD)&v55 + 1072) = *v9;
		*(_DWORD*)(a1 + 1136) = v8;
		if (!v10)
			break;
		++v8;
		++v9;
	} while (v8 < 8);
	*(_DWORD*)(a1 + 1052) = 0;
	*(_DWORD*)(a1 + 1056) = 1120403456;
	*(_DWORD*)(a1 + 1048) = 0;
	v48 = 0;
	v11 = &v44;
	v12 = 0i64;
	do
	{
		v13 = *(_DWORD*)((char*)&unk_140A393C0 + v12);
		*(_DWORD*)((char*)&v47 + v12) = 0;
		v12 += 4i64;
		*(_DWORD*)((char*)&v45 + v12 + 12) = v13;
		*(_QWORD*)v11 = 0i64;
		v11 = (__int128*)((char*)v11 + 8);
	} while (v12 < 16);
	v14 = *(_QWORD*)(a1 + 48);
	v55 = 1065353216i64;
	v56 = 1065353216;
	v57 = 1056964608;
	*(_DWORD*)v60 = -16;
	*(_QWORD*)&v60[4] = 0i64;
	v61 = 0;
	v15 = 0i64;
	v16 = 0i64;
	if (v14 && v14 != -168)
	{
		v15 = v14 + 184;
		v16 = v14 + 256;
	}
	v48 &= ~1u;
	v17 = &v44;
	v18 = 0i64;
	do
	{
		v19 = *(_DWORD*)((char*)&v55 + v18);
		v18 += 4i64;
		v17 = (__int128*)((char*)v17 + 8);
		*(_DWORD*)((char*)&v45 + v18 + 12) = v19;
		*(_DWORD*)((char*)&v46 + v18 + 12) = *(_DWORD*)&v60[v18 - 4];
		*((_QWORD*)v17 - 1) = 0i64;
	} while (v18 < 16);
	v20 = sub_14018B280(1568i64, 0);
	if (v20)
		v21 = sub_14012F720((__int64)v20, *(_QWORD*)(a1 + 32), a1, v15, 2, v41, v42, 0i64, &xmmword_140C67280, 0i64);
	else
		v21 = 0i64;
	v22 = v45;
	v23 = v48;
	*(_QWORD*)(a1 + 1032) = v21;
	*(_QWORD*)(v21 + 656) |= 0x100ui64;
	v24 = *(_QWORD*)(a1 + 1032);
	v49 = v43;
	v51 = v22;
	v54 = v23 | 0x300;
	v50 = v44;
	v52 = v46;
	v53 = v47;
	sub_1400CC680(v24, (__int64)&v49);
	v55 = 0x3F0000003F800000i64;
	v48 = v23 & 0xFFFFFFFE;
	v56 = 1065353216;
	v57 = 1065353216;
	v25 = &v44;
	v26 = 0i64;
	do
	{
		v27 = *(_DWORD*)((char*)&v55 + v26);
		v26 += 4i64;
		v25 = (__int128*)((char*)v25 + 8);
		*(_DWORD*)((char*)&v45 + v26 + 12) = v27;
		*(_DWORD*)((char*)&v46 + v26 + 12) = *(_DWORD*)&v60[v26 - 4];
		*((_QWORD*)v25 - 1) = 0i64;
	} while (v26 < 16);
	v28 = sub_14018B280(1568i64, 0);
	if (v28)
		v29 = sub_14012F720((__int64)v28, *(_QWORD*)(a1 + 32), a1, v16, 2, v41, v42, 0i64, &xmmword_140C67280, 0i64);
	else
		v29 = 0i64;
	v30 = v45;
	v31 = v48;
	*(_QWORD*)(a1 + 1024) = v29;
	*(_QWORD*)(v29 + 656) |= 0x100ui64;
	v32 = *(_QWORD*)(a1 + 1024);
	v49 = v43;
	v51 = v30;
	v54 = v31 | 0x300;
	v50 = v44;
	v52 = v46;
	v53 = v47;
	sub_1400CC680(v32, (__int64)&v49);
	v55 = 0i64;
	v48 = v31 & 0xFFFFFFFE;
	v56 = 1065353216;
	v57 = 1065353216;
	*(_QWORD*)v60 = 0i64;
	*(_DWORD*)&v60[8] = -16;
	v61 = 0;
	v33 = &v44;
	v34 = 0i64;
	do
	{
		v35 = *(_DWORD*)((char*)&v55 + v34);
		v34 += 4i64;
		v33 = (__int128*)((char*)v33 + 8);
		*(_DWORD*)((char*)&v45 + v34 + 12) = v35;
		*(_DWORD*)((char*)&v46 + v34 + 12) = *(_DWORD*)&v60[v34 - 4];
		*((_QWORD*)v33 - 1) = 0i64;
	} while (v34 < 16);
	v36 = sub_14018B280(1408i64, 0);
	if (v36)
		v7 = sub_14010E4A0((__int64)v36, *(_QWORD*)(a1 + 32), a1, 0i64, &xmmword_140C67280, 0i64, 0i64);
	v37 = v45;
	v38 = v48 | 0x300;
	*(_QWORD*)(a1 + 1040) = v7;
	*(_QWORD*)(v7 + 656) |= 0x100ui64;
	v49 = v43;
	v51 = v37;
	v39 = *(_QWORD*)(a1 + 1040);
	v54 = v38;
	v50 = v44;
	v52 = v46;
	v53 = v47;
	sub_1400CC680(v39, (__int64)&v49);
	return a1;
}
// 14017336E: variable 'v41' is possibly undefined
// 14017336E: variable 'v42' is possibly undefined
// 14017339D: variable 'v43' is possibly undefined
// 140B5D1C0: using guessed type __int64 (__fastcall *off_140B5D1C0[25])();
// 140C67280: using guessed type __int128 xmmword_140C67280;

