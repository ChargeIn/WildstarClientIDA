//----- (0000000140176BA0) ----------------------------------------------------
__int64 __fastcall sub_140176BA0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	__int64 v10; // rdi
	int* v11; // rdx
	unsigned int* v12; // rax
	int v13; // r14d
	__int128* v14; // rdx
	__int64 v15; // rcx
	int v16; // eax
	int v17; // r14d
	__int128* v18; // rdx
	__int64 v19; // rcx
	int v20; // eax
	int* v21; // rax
	__int64 v22; // rcx
	int v23; // eax
	__int128 v24; // xmm1
	unsigned int v25; // ebx
	__int128 v26; // xmm0
	__int64 v27; // rax
	__int128 v28; // xmm1
	__int128 v29; // xmm0
	__int64 v30; // rcx
	__int128* v31; // rdx
	__int64 v32; // rcx
	int v33; // eax
	int* v34; // rax
	__int64 v35; // rax
	int* v36; // rax
	__int128 v37; // xmm1
	unsigned int v38; // ebx
	__int64 v39; // rcx
	__int64 v40; // rcx
	unsigned int v41; // r14d
	unsigned int v42; // r12d
	__int128* v43; // rdx
	__int64 v44; // rcx
	int v45; // eax
	int* v46; // r10
	__int64 v47; // rdx
	int v49; // [rsp+28h] [rbp-D8h]
	int v50; // [rsp+30h] [rbp-D0h]
	__int128 v51; // [rsp+60h] [rbp-A0h]
	__int128 v52; // [rsp+70h] [rbp-90h] BYREF
	__int128 v53; // [rsp+80h] [rbp-80h]
	__int128 v54; // [rsp+90h] [rbp-70h]
	__int128 v55; // [rsp+A0h] [rbp-60h]
	unsigned int v56; // [rsp+B0h] [rbp-50h]
	__int128 v57; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v58; // [rsp+D0h] [rbp-30h]
	__int128 v59; // [rsp+E0h] [rbp-20h]
	__int128 v60; // [rsp+F0h] [rbp-10h]
	__int128 v61; // [rsp+100h] [rbp+0h]
	unsigned int v62; // [rsp+110h] [rbp+10h]
	int v63; // [rsp+11Ch] [rbp+1Ch]
	__int64 v64; // [rsp+120h] [rbp+20h] BYREF
	int v65; // [rsp+128h] [rbp+28h]
	int v66; // [rsp+12Ch] [rbp+2Ch]
	_BYTE v67[12]; // [rsp+130h] [rbp+30h] BYREF
	int v68; // [rsp+13Ch] [rbp+3Ch]

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	v10 = 0i64;
	*(_DWORD*)(a1 + 1048) = 100;
	*(_QWORD*)a1 = off_140B5D650;
	*(_QWORD*)(a1 + 1064) = 0i64;
	*(_QWORD*)(a1 + 1072) = 0i64;
	*(_QWORD*)(a1 + 1080) = 0i64;
	v11 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 1064) = v11;
	*(_QWORD*)(a1 + 1072) = v11;
	*(_QWORD*)(a1 + 1080) = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	*(_QWORD*)(a1 + 432) |= 0x10ui64;
	v12 = sub_1400CB890(a1, v67);
	sub_14014E8D0((__int64)a5, &v64, v12);
	v56 = 0;
	v13 = v66 - HIDWORD(v64);
	v14 = &v52;
	v15 = 0i64;
	do
	{
		v16 = *(_DWORD*)((char*)&unk_140A3A9A8 + v15);
		*(_DWORD*)((char*)&v55 + v15) = 0;
		v15 += 4i64;
		*(_DWORD*)((char*)&v53 + v15 + 12) = v16;
		*(_QWORD*)v14 = 0i64;
		v14 = (__int128*)((char*)v14 + 8);
	} while (v15 < 16);
	v17 = -v13;
	v56 &= ~1u;
	*(_QWORD*)v67 = 0i64;
	v65 = v17;
	*(_DWORD*)&v67[8] = 1065353216;
	v68 = 1065353216;
	v64 = 0i64;
	v66 = 0;
	v18 = &v52;
	v19 = 0i64;
	do
	{
		v20 = *(_DWORD*)&v67[v19];
		v19 += 4i64;
		v18 = (__int128*)((char*)v18 + 8);
		*(_DWORD*)((char*)&v53 + v19 + 12) = v20;
		*(_DWORD*)((char*)&v54 + v19 + 12) = *(int*)((char*)&v63 + v19);
		*((_QWORD*)v18 - 1) = 0i64;
	} while (v19 < 16);
	v21 = sub_14018B280(1408i64, 0);
	if (v21)
		v22 = sub_14010E4A0((__int64)v21, a2, a1, 0i64, &xmmword_140C67280, 0i64, 0i64);
	else
		v22 = 0i64;
	v23 = *(_DWORD*)(a1 + 704);
	v24 = v53;
	v25 = v56;
	*(_QWORD*)(a1 + 1024) = v22;
	*(_DWORD*)(v22 + 704) = v23;
	v57 = v51;
	v26 = v52;
	v59 = v24;
	*(_QWORD*)(*(_QWORD*)(a1 + 1024) + 656i64) |= 0x100ui64;
	v27 = *(_QWORD*)(a1 + 1024);
	v28 = v55;
	v58 = v26;
	v29 = v54;
	*(_QWORD*)(v27 + 664) |= 2ui64;
	v30 = *(_QWORD*)(a1 + 1024);
	v60 = v29;
	v61 = v28;
	v62 = v25 | 0x300;
	sub_1400CC680(v30, (__int64)&v57);
	v56 = v25 & 0xFFFFFFFE;
	v64 = 1065353216i64;
	v65 = 1065353216;
	v66 = 1065353216;
	*(_DWORD*)v67 = v17;
	*(_QWORD*)&v67[4] = 0i64;
	v68 = 0;
	v31 = &v52;
	v32 = 0i64;
	do
	{
		v33 = *(_DWORD*)((char*)&v64 + v32);
		v32 += 4i64;
		v31 = (__int128*)((char*)v31 + 8);
		*(_DWORD*)((char*)&v53 + v32 + 12) = v33;
		*(_DWORD*)((char*)&v54 + v32 + 12) = *(_DWORD*)&v67[v32 - 4];
		*((_QWORD*)v31 - 1) = 0i64;
	} while (v32 < 16);
	if (!a4 || a4 == (_QWORD*)-168i64 || a4 == (_QWORD*)-256i64)
	{
		v36 = sub_14018B280(1568i64, 0);
		if (v36)
		{
			v35 = sub_14012FA20(
				(__int64)v36,
				*(_QWORD*)(a1 + 32),
				a1,
				(__m128i*)L"DefaultVScrollDownButton",
				1,
				0i64,
				0,
				0i64,
				&xmmword_140C67280,
				0i64,
				0i64);
			goto LABEL_20;
		}
	}
	else
	{
		v34 = sub_14018B280(1568i64, 0);
		if (v34)
		{
			v35 = sub_14012F720(
				(__int64)v34,
				*(_QWORD*)(a1 + 32),
				a1,
				(__int64)(a4 + 32),
				1,
				v49,
				v50,
				0i64,
				&xmmword_140C67280,
				0i64);
			goto LABEL_20;
		}
	}
	v35 = 0i64;
LABEL_20:
	v37 = v53;
	v38 = v56;
	*(_QWORD*)(a1 + 1032) = v35;
	*(_QWORD*)(v35 + 656) |= 0x100ui64;
	v39 = *(_QWORD*)(a1 + 1032);
	v57 = v51;
	v59 = v37;
	v62 = v38 | 0x300;
	v58 = v52;
	v60 = v54;
	v61 = v55;
	sub_1400CC680(v39, (__int64)&v57);
	v40 = *(_QWORD*)(a1 + 664);
	v68 = *(_DWORD*)(a1 + 1048);
	v41 = 65562;
	v64 = 0x3F80000000000000i64;
	v65 = 1065353216;
	if ((v40 & 2) != 0)
		v41 = 65544;
	v66 = 1065353216;
	memset(v67, 0, sizeof(v67));
	v42 = 32;
	if ((v40 & 4) != 0)
	{
		v42 = 160;
		v68 = 0;
	}
	if ((*(_DWORD*)(a1 + 656) & 0x800000i64) != 0)
		v41 |= 0x800000u;
	v43 = &v52;
	v44 = 0i64;
	v56 = v38 & 0xFFFFFFFE;
	do
	{
		v45 = *(_DWORD*)((char*)&v64 + v44);
		v44 += 4i64;
		v43 = (__int128*)((char*)v43 + 8);
		*(_DWORD*)((char*)&v53 + v44 + 12) = v45;
		*(_DWORD*)((char*)&v54 + v44 + 12) = *(_DWORD*)&v67[v44 - 4];
		*((_QWORD*)v43 - 1) = 0i64;
	} while (v44 < 16);
	v46 = sub_14018B280(2240i64, 0);
	if (v46)
	{
		v47 = *(_QWORD*)(a1 + 32);
		v62 = v56 | 0x300;
		v57 = v51;
		v59 = v53;
		v58 = v52;
		v60 = v54;
		v61 = v55;
		v10 = sub_14015D7F0((__int64)v46, v47, a1, 0i64, 0, a4, &v57, v41, v42);
	}
	*(_QWORD*)(a1 + 1040) = v10;
	*(_DWORD*)(v10 + 672) = 1;
	sub_1400D42F0(*(_QWORD*)(a1 + 1040), 0, 0, 4.0);
	return a1;
}
// 140176D71: variable 'v51' is possibly undefined
// 140176E74: variable 'v49' is possibly undefined
// 140176E74: variable 'v50' is possibly undefined
// 140A3A258: using guessed type wchar_t aDefaultvscroll[25];
// 140B5D650: using guessed type __int64 (__fastcall *off_140B5D650[25])();
// 140C67280: using guessed type __int128 xmmword_140C67280;

