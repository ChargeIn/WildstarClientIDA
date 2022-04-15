#include "../winhttp.h"

//----- (0000000140346140) ----------------------------------------------------
__int64 __fastcall sub_140346140(__int64 a1, __int64 a2)
{
	int* v4; // r9
	int v5; // r8d
	int v6; // ecx
	int v7; // ebx
	int v8; // ecx
	__int64 v9; // rcx
	__int64 v10; // r9
	__int64 v11; // rcx
	__int64 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r9
	int* v17; // rdx
	int v18; // ecx
	int v19; // ecx
	int v20; // eax
	int v21; // ecx
	int v22; // ecx
	int v23; // ecx
	int v24; // eax
	unsigned __int64 v25; // rcx
	int v26; // eax
	unsigned __int64 v27; // rcx
	int v28; // eax
	unsigned __int64 v29; // rcx
	int v30; // eax
	int* v31; // rdx
	int v32; // ecx
	int v33; // ecx
	int v34; // ecx
	int v35; // eax
	int v36; // ecx
	int v37; // ecx
	int v38; // ecx
	int v39; // ecx
	int v40; // ecx
	int v41; // ecx
	bool v42; // zf
	int v43; // ecx
	__int16 v44; // ax
	__int64 v45; // rax
	__int64 v46; // rdx
	int v47; // ebx
	__int64(__fastcall * v48)(__int64, int, _DWORD*, char*); // rcx

	sub_140345070(a1);
	v4 = (int*)qword_140C63750;
	*(_DWORD*)(a1 + 48) = 30;
	v5 = dword_140C43610;
	if (*v4 < dword_140C43610)
		v5 = *v4;
	*(_DWORD*)(a1 + 80) = dword_140C43620[v5];
	v6 = dword_140C43880;
	if (*v4 < dword_140C43880)
		v6 = *v4;
	v7 = 0;
	v8 = dword_140C43890[v6];
	*(_DWORD*)(a1 + 140) = 1024;
	*(_DWORD*)(a1 + 132) = 1024;
	*(_DWORD*)(a1 + 136) = 1;
	*(_DWORD*)(a1 + 128) = v8 - 1024;
	*(_QWORD*)(a1 + 112) = a1 + 2388;
	*(_QWORD*)(a1 + 144) = 0i64;
	sub_1408833C0(a1 + 2288);
	sub_14034B570(v9, *(int**)a2, (int*)(a1 + 188), v10, (unsigned int*)(a1 + 708));
	sub_14034B570(v11, *(int**)(a2 + 8), (int*)(a1 + 1236), v12, (unsigned int*)(a1 + 1756));
	sub_14034B570(v13, *(int**)(a2 + 16), (int*)(a1 + 712), v14, (unsigned int*)(a1 + 1232));
	sub_14034B570(v15, *(int**)(a2 + 24), (int*)(a1 + 1760), v16, (unsigned int*)(a1 + 2280));
	v17 = (int*)qword_140C63750;
	v18 = dword_140C436A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C436A0)
		v18 = *(_DWORD*)qword_140C63750;
	*(_DWORD*)(a1 + 2316) = dword_140C436B0[v18];
	v19 = dword_140C43700;
	if (*v17 < dword_140C43700)
		v19 = *v17;
	v20 = dword_140C43710[v19];
	*(_DWORD*)(a1 + 2324) = 0x4000;
	*(_DWORD*)(a1 + 2320) = v20;
	v21 = dword_140C43760;
	if (*v17 < dword_140C43760)
		v21 = *v17;
	*(_DWORD*)(a1 + 2296) = dword_140C43770[v21];
	v22 = dword_140C437C0;
	if (*v17 < dword_140C437C0)
		v22 = *v17;
	*(_DWORD*)(a1 + 2308) = dword_140C437D0[v22] << 10;
	v23 = dword_140C43820;
	if (*v17 < dword_140C43820)
		v23 = *v17;
	*(float*)(a1 + 2328) = dword_140C43830[v23] * 1000.0;
	sub_1408274B0(a1 + 2360);
	sub_140827500(a1 + 2408);
	v24 = sub_14018A3E0(*(unsigned int*)(a1 + 2376));
	v25 = *(unsigned int*)(a1 + 2384);
	*(_DWORD*)(a1 + 2376) = v24;
	v26 = sub_14018A3E0(v25);
	v27 = *(unsigned int*)(a1 + 2400);
	*(_DWORD*)(a1 + 2384) = v26;
	v28 = sub_14018A3E0(v27);
	v29 = *(unsigned int*)(a1 + 2404);
	*(_DWORD*)(a1 + 2400) = v28;
	v30 = sub_14018A3E0(v29);
	v31 = (int*)qword_140C63750;
	*(_DWORD*)(a1 + 2404) = v30;
	v32 = dword_140C43C50;
	if (*v31 < dword_140C43C50)
		v32 = *v31;
	*(_DWORD*)(a1 + 2376) = dword_140C43C60[v32];
	v33 = dword_140C438E0;
	if (*v31 < dword_140C438E0)
		v33 = *v31;
	*(_DWORD*)(a1 + 2368) = dword_140C438F0[v33];
	v34 = dword_140C43970;
	if (*v31 < dword_140C43970)
		v34 = *v31;
	v35 = dword_140C43980[v34];
	*(_BYTE*)(a1 + 2392) = 0;
	*(_DWORD*)(a1 + 2372) = v35;
	*(_DWORD*)(a1 + 2384) *= 4;
	*(_QWORD*)(a1 + 2360) = sub_140344EA0;
	v36 = dword_140C439D0;
	if (*v31 < dword_140C439D0)
		v36 = *v31;
	*(_DWORD*)(a1 + 2440) = dword_140C439E0[v36];
	v37 = dword_140C43A30;
	if (*v31 < dword_140C43A30)
		v37 = *v31;
	*(_DWORD*)(a1 + 2416) = dword_140C43A40[v37];
	v38 = dword_140C43A90;
	if (*v31 < dword_140C43A90)
		v38 = *v31;
	*(_DWORD*)(a1 + 2420) = dword_140C43AA0[v38];
	*(_DWORD*)(a1 + 2424) *= 2;
	v39 = dword_140C43AF0;
	if (*v31 < dword_140C43AF0)
		v39 = *v31;
	*(_DWORD*)(a1 + 2428) = dword_140C43B00[v39];
	v40 = dword_140C43B50;
	if (*v31 < dword_140C43B50)
		v40 = *v31;
	*(_DWORD*)(a1 + 2432) = dword_140C43B60[v40];
	*(_DWORD*)(a1 + 2436) *= 2;
	v41 = dword_140C43BB0;
	if (*v31 < dword_140C43BB0)
		v41 = *v31;
	v42 = *((_BYTE*)&dword_140C43BC0 + v41) == 0;
	*(_BYTE*)(a1 + 2464) = 1;
	LOBYTE(v7) = !v42;
	*(_DWORD*)(a1 + 2452) = v7;
	v43 = dword_140C43BF0;
	if (*v31 < dword_140C43BF0)
		v43 = *v31;
	v44 = word_140C43C00[2 * v43];
	*(_DWORD*)(a1 + 2456) = 2;
	*(_WORD*)(a1 + 2448) = v44;
	v45 = *(_QWORD*)(a2 + 56);
	if (v45)
		*(_QWORD*)(a1 + 2408) = v45;
	v47 = sub_140344F90(a1);
	if (v47 >= 0)
	{
		LOBYTE(v46) = *(_DWORD*)(a2 + 32) == 1;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 384i64))(a1, v46);
		v48 = sub_14033FD50;
		if (*(_QWORD*)(a2 + 40))
			v48 = *(__int64(__fastcall**)(__int64, int, _DWORD*, char*))(a2 + 40);
		*(_QWORD*)(a1 + 8) = v48;
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 48);
	}
	else
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 408i64))(a1);
	}
	return (unsigned int)v47;
}
// 140346209: variable 'v9' is possibly undefined
// 140346209: variable 'v10' is possibly undefined
// 140346225: variable 'v11' is possibly undefined
// 140346225: variable 'v12' is possibly undefined
// 140346241: variable 'v13' is possibly undefined
// 140346241: variable 'v14' is possibly undefined
// 14034625D: variable 'v15' is possibly undefined
// 14034625D: variable 'v16' is possibly undefined
// 140346514: variable 'v46' is possibly undefined
// 140C43610: using guessed type int dword_140C43610;
// 140C43620: using guessed type int dword_140C43620[28];
// 140C436A0: using guessed type int dword_140C436A0;
// 140C436B0: using guessed type int dword_140C436B0[14];
// 140C43700: using guessed type int dword_140C43700;
// 140C43710: using guessed type int dword_140C43710[16];
// 140C43760: using guessed type int dword_140C43760;
// 140C43770: using guessed type int dword_140C43770[16];
// 140C437C0: using guessed type int dword_140C437C0;
// 140C437D0: using guessed type int dword_140C437D0[16];
// 140C43820: using guessed type int dword_140C43820;
// 140C43830: using guessed type float dword_140C43830[14];
// 140C43880: using guessed type int dword_140C43880;
// 140C43890: using guessed type int dword_140C43890[16];
// 140C438E0: using guessed type int dword_140C438E0;
// 140C438F0: using guessed type int dword_140C438F0[28];
// 140C43970: using guessed type int dword_140C43970;
// 140C43980: using guessed type int dword_140C43980[16];
// 140C439D0: using guessed type int dword_140C439D0;
// 140C439E0: using guessed type int dword_140C439E0[16];
// 140C43A30: using guessed type int dword_140C43A30;
// 140C43A40: using guessed type int dword_140C43A40[16];
// 140C43A90: using guessed type int dword_140C43A90;
// 140C43AA0: using guessed type int dword_140C43AA0[16];
// 140C43AF0: using guessed type int dword_140C43AF0;
// 140C43B00: using guessed type int dword_140C43B00[14];
// 140C43B50: using guessed type int dword_140C43B50;
// 140C43B60: using guessed type int dword_140C43B60[14];
// 140C43BB0: using guessed type int dword_140C43BB0;
// 140C43BC0: using guessed type int dword_140C43BC0;
// 140C43BF0: using guessed type int dword_140C43BF0;
// 140C43C00: using guessed type __int16 word_140C43C00[];
// 140C43C50: using guessed type int dword_140C43C50;
// 140C43C60: using guessed type int dword_140C43C60[14];
// 140C63750: using guessed type __int64 qword_140C63750;

