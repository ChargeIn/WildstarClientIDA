#include "../winhttp.h"

//----- (000000014043DB20) ----------------------------------------------------
__int64 sub_14043DB20()
{
	int v0; // r9d
	int v1; // eax
	float v2; // xmm5_4
	int v3; // eax
	double v4; // xmm5_8
	__int64 v5; // r14
	int v6; // eax
	int v7; // ebp
	int v8; // eax
	__int64 v9; // rsi
	int v10; // eax
	__int64 v11; // rdi
	int v12; // eax
	__int64 v13; // rbx
	int v14; // eax
	__int64 v15; // r11
	int v16; // eax
	float v17; // xmm4_4
	int v18; // eax
	double v19; // xmm4_8
	float v20; // xmm3_4
	int v21; // eax
	double v22; // xmm3_8
	__int64 v23; // r10
	int v24; // eax
	__int64 v25; // r8
	int v26; // eax
	__int64 v27; // rdx
	int v28; // eax
	float v29; // xmm2_4
	int v30; // eax
	double v31; // xmm2_8
	__int64 v32; // rcx
	int v33; // eax
	float v34; // xmm1_4
	int v35; // eax
	double v36; // xmm1_8
	float v37; // xmm0_4
	int v38; // eax
	double v39; // xmm0_8
	int v41; // [rsp+30h] [rbp-88h]
	int v42; // [rsp+40h] [rbp-78h]
	int v43; // [rsp+48h] [rbp-70h]
	int v44; // [rsp+50h] [rbp-68h]
	int v45; // [rsp+68h] [rbp-50h]
	int v46; // [rsp+70h] [rbp-48h]
	int v47; // [rsp+78h] [rbp-40h]
	int v48; // [rsp+80h] [rbp-38h]
	int v49; // [rsp+88h] [rbp-30h]
	int v50; // [rsp+90h] [rbp-28h]
	__int64 v51; // [rsp+C0h] [rbp+8h] BYREF

	v0 = *(_DWORD*)qword_140C63750;
	v51 = 0x141DFCCA0i64;
	v1 = dword_140C4DEA0;
	if (v0 < dword_140C4DEA0)
		v1 = v0;
	v2 = *((float*)&xmmword_140C4DEB0 + v1);
	v3 = dword_140C404B0;
	v4 = v2;
	if (v0 < dword_140C404B0)
		v3 = v0;
	v5 = v3;
	v6 = dword_140C40510;
	if (v0 < dword_140C40510)
		v6 = v0;
	v7 = *((unsigned __int8*)&dword_140C40520 + v6);
	v8 = dword_140C405D0;
	if (v0 < dword_140C405D0)
		v8 = v0;
	v9 = v8;
	v10 = dword_140C464E0;
	if (v0 < dword_140C464E0)
		v10 = v0;
	v11 = v10;
	v12 = dword_140C467B0;
	if (v0 < dword_140C467B0)
		v12 = v0;
	v13 = v12;
	v14 = dword_140C466C0;
	if (v0 < dword_140C466C0)
		v14 = v0;
	v15 = v14;
	v16 = dword_140C463C0;
	if (v0 < dword_140C463C0)
		v16 = v0;
	v17 = *((float*)&xmmword_140C463D0 + v16);
	v18 = dword_140C46480;
	v19 = v17;
	if (v0 < dword_140C46480)
		v18 = v0;
	v20 = *((float*)&xmmword_140C46490 + v18);
	v21 = dword_140C46660;
	v22 = v20;
	if (v0 < dword_140C46660)
		v21 = v0;
	v23 = v21;
	v24 = dword_140C468B0;
	if (v0 < dword_140C468B0)
		v24 = v0;
	v25 = v24;
	v26 = dword_140C46540;
	if (v0 < dword_140C46540)
		v26 = v0;
	v27 = v26;
	v28 = dword_140C465D0;
	if (v0 < dword_140C465D0)
		v28 = v0;
	v29 = *((float*)&xmmword_140C465E0 + v28);
	v30 = dword_140C46850;
	v31 = v29;
	if (v0 < dword_140C46850)
		v30 = v0;
	v32 = v30;
	v33 = dword_140C46750;
	if (v0 < dword_140C46750)
		v33 = v0;
	v34 = *((float*)&xmmword_140C46760 + v33);
	v35 = dword_140C46420;
	v36 = v34;
	if (v0 < dword_140C46420)
		v35 = v0;
	v37 = *((float*)&xmmword_140C46430 + v35);
	v38 = dword_140C46810;
	v39 = v37;
	if (v0 < dword_140C46810)
		v38 = v0;
	v50 = dword_140C404C0[v5];
	v49 = v7;
	v48 = *((_DWORD*)&xmmword_140C405E0 + v9);
	v47 = dword_140C464F0[v11];
	v46 = dword_140C467C0[v13];
	v45 = dword_140C466D0[v15];
	v44 = dword_140C46670[v23];
	v43 = dword_140C468C0[v25];
	v42 = dword_140C46550[v27];
	v41 = dword_140C46860[v32];
	return sub_1401A3130(
		22,
		2,
		&v51,
		*((unsigned __int8*)&dword_140C46820 + v38),
		v39,
		v36,
		v41,
		v31,
		v42,
		v43,
		v44,
		v22,
		v19,
		v45,
		v46,
		v47,
		v48,
		v49,
		v50,
		v4);
}
// 140C404B0: using guessed type int dword_140C404B0;
// 140C404C0: using guessed type int dword_140C404C0[];
// 140C40510: using guessed type int dword_140C40510;
// 140C40520: using guessed type int dword_140C40520;
// 140C405D0: using guessed type int dword_140C405D0;
// 140C405E0: using guessed type __int128 xmmword_140C405E0;
// 140C463C0: using guessed type int dword_140C463C0;
// 140C463D0: using guessed type __int128 xmmword_140C463D0;
// 140C46420: using guessed type int dword_140C46420;
// 140C46430: using guessed type __int128 xmmword_140C46430;
// 140C46480: using guessed type int dword_140C46480;
// 140C46490: using guessed type __int128 xmmword_140C46490;
// 140C464E0: using guessed type int dword_140C464E0;
// 140C464F0: using guessed type int dword_140C464F0[];
// 140C46540: using guessed type int dword_140C46540;
// 140C46550: using guessed type int dword_140C46550[];
// 140C465D0: using guessed type int dword_140C465D0;
// 140C465E0: using guessed type __int128 xmmword_140C465E0;
// 140C46660: using guessed type int dword_140C46660;
// 140C46670: using guessed type int dword_140C46670[];
// 140C466C0: using guessed type int dword_140C466C0;
// 140C466D0: using guessed type int dword_140C466D0[];
// 140C46750: using guessed type int dword_140C46750;
// 140C46760: using guessed type __int128 xmmword_140C46760;
// 140C467B0: using guessed type int dword_140C467B0;
// 140C467C0: using guessed type int dword_140C467C0[];
// 140C46810: using guessed type int dword_140C46810;
// 140C46820: using guessed type int dword_140C46820;
// 140C46850: using guessed type int dword_140C46850;
// 140C46860: using guessed type int dword_140C46860[];
// 140C468B0: using guessed type int dword_140C468B0;
// 140C468C0: using guessed type int dword_140C468C0[];
// 140C4DEA0: using guessed type int dword_140C4DEA0;
// 140C4DEB0: using guessed type __int128 xmmword_140C4DEB0;
// 140C63750: using guessed type __int64 qword_140C63750;

