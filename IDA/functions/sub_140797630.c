#include "../winhttp.h"

//----- (0000000140797630) ----------------------------------------------------
__int64 __fastcall sub_140797630(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r8
	_QWORD* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdi
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // r9
	__int64 v14; // rdx
	__int64 v15; // rdx
	char v16; // r8
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdi
	__int64 v20; // rax
	__int64 v21; // rsi
	int v22; // edi
	__int64(__fastcall * *v23)(); // rax
	__int64(__fastcall * v24)(); // r14
	__int64 v25; // rax
	__int64 v26; // r8
	_QWORD* v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rdi
	unsigned __int64 v30; // r8
	__int64 v31; // rax
	unsigned int* v32; // r9
	const __m128i* v33; // rax
	unsigned __int64 v34; // rsi
	__int64 v35; // rdi
	__int64 v36; // rax
	const __m128i* v37; // rax
	unsigned __int64 v38; // rax
	_QWORD* v39; // rcx
	__int64 v40; // rax
	__int64 v41; // rdi
	unsigned __int64 v42; // r8
	__int64 v43; // rax
	unsigned int* v44; // r9
	const __m128i* v45; // rax
	unsigned __int64 v46; // rsi
	__int64 v47; // rdi
	__int64 v48; // rax
	const __m128i* v49; // rax
	unsigned __int64 v50; // rax
	_QWORD* v51; // rcx
	__int64 v52; // rax
	__int64 v53; // rdi
	unsigned __int64 v54; // r8
	__int64 v55; // rax
	unsigned int* v56; // r9
	__int64 v57; // rcx
	__int64 v58; // rdi
	__int64 v59; // rax
	__int64 v60; // rdi
	unsigned __int64 v61; // r8
	__int64 v62; // rax
	unsigned int* v63; // r9
	__int64 v64; // rdi
	unsigned __int64 v65; // r8
	__int64 v66; // rax
	unsigned int* v67; // r9
	__int64 v68; // rcx
	__int64 v69; // rdi
	__int64 v70; // rax
	__int64 v71; // rdi
	unsigned __int64 v72; // r8
	__int64 v73; // rax
	unsigned int* v74; // r9
	__int64 v75; // rcx
	char** v76; // rdi
	char* v77; // rsi
	__int64 v78; // rax
	__int64 v79; // r8
	_QWORD* v80; // rax
	__int64 v81; // rcx
	__int64* v82; // rax
	unsigned __int64* v83; // r10
	unsigned __int64 v84; // r8
	__int64* v85; // rsi
	__int64 v86; // rax
	unsigned int* v87; // r9
	__int64 v89; // [rsp+20h] [rbp-10h] BYREF
	int v90; // [rsp+28h] [rbp-8h]

	sub_1400569B0(a1, (unsigned __int64*)aLoadlib_3);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 40);
	if (v2 == *(_QWORD*)(a1 + 80))
		v3 = *(_QWORD*)(a1 + 120);
	else
		v3 = *(_QWORD*)(**(_QWORD**)(v2 + 8) + 24i64);
	v4 = sub_140060AB0(a1, 0, v3);
	v4[4] = sub_140795FA0;
	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v5 = v4;
	*(_DWORD*)(v5 + 8) = 6;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = -1i64;
	do
		++v7;
	while (aGc_1[v7]);
	v8 = sub_140062650(a1, (unsigned __int64*)aGc_1, v7);
	v9 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v8;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v6 - 32), (int*)&v89, v9);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_140057020((_QWORD*)a1, aPackage_1, &off_140B50E20);
	v10 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v10 = *(_QWORD*)(v10 - 16);
	*(_DWORD*)(v10 + 8) = *(_DWORD*)(v10 - 8);
	v11 = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (*(_QWORD*)(a1 + 40) == v11)
		sub_14005ABE0(a1, aNoCallingEnvir);
	v12 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 24i64);
	*(_DWORD*)(a1 + 144) = 5;
	*(_QWORD*)(a1 + 136) = v12;
	v13 = **(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64);
	*(_QWORD*)(v13 + 24) = *(_QWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	v14 = *(_QWORD*)(a1 + 16);
	if (*(int*)(v14 - 8) >= 4)
	{
		v15 = *(_QWORD*)(v14 - 16);
		if ((*(_BYTE*)(v15 + 9) & 3) != 0)
		{
			v16 = *(_BYTE*)(v13 + 9);
			if ((v16 & 4) != 0)
			{
				v17 = *(_QWORD*)(a1 + 32);
				if (*(_BYTE*)(v17 + 33) == 1)
					sub_14005C960(*(_QWORD*)(a1 + 32), v15);
				else
					*(_BYTE*)(v13 + 9) = v16 & 0xF8 | *(_BYTE*)(v17 + 32) & 3;
			}
		}
	}
	v18 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (*(_QWORD*)(v18 + 120) >= *(_QWORD*)(v18 + 112))
		sub_14005E2C0(a1);
	v19 = *(_QWORD*)(a1 + 16);
	v20 = sub_14005C1B0(a1, 0, 4);
	*(_DWORD*)(v19 + 8) = 5;
	v21 = 0i64;
	*(_QWORD*)v19 = v20;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (sub_140796850)
	{
		v22 = 1;
		v23 = off_140B505F8;
		do
		{
			v24 = *v23;
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v25 = *(_QWORD*)(a1 + 40);
			if (v25 == *(_QWORD*)(a1 + 80))
				v26 = *(_QWORD*)(a1 + 120);
			else
				v26 = *(_QWORD*)(**(_QWORD**)(v25 + 8) + 24i64);
			v27 = sub_140060AB0(a1, 0, v26);
			v27[4] = v24;
			v28 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v28 = v27;
			*(_DWORD*)(v28 + 8) = 6;
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140058B30(a1, -2);
			++v21;
			++v22;
			v23 = &off_140B505F8[v21];
		} while (*v23);
	}
	v29 = *(_QWORD*)(a1 + 16);
	v30 = -1i64;
	do
		++v30;
	while (aLoaders_0[v30]);
	v31 = sub_140062650(a1, (unsigned __int64*)aLoaders_0, v30);
	v32 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v31;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v29 - 32), (int*)&v89, v32);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v33 = (const __m128i*)sub_140901E90(aLuaPath);
	if (v33)
	{
		v37 = (const __m128i*)sub_140057200((_QWORD*)a1, v33, (const __m128i*)asc_140C39FB4, &asc_140C39FD4);
		sub_140057200((_QWORD*)a1, v37, (const __m128i*) & unk_140C39F8C, aLuaLuaLuaLuaIn);
		v38 = *(_QWORD*)(a1 + 16);
		v39 = (_QWORD*)(v38 - 16);
		if (v38 - 16 < v38)
		{
			do
			{
				v40 = *v39;
				v39 += 2;
				*(v39 - 4) = v40;
				*((_DWORD*)v39 - 6) = *((_DWORD*)v39 - 2);
			} while ((unsigned __int64)v39 < *(_QWORD*)(a1 + 16));
		}
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	else
	{
		v34 = -1i64;
		do
			++v34;
		while (aLuaLuaLuaLuaIn[v34]);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v35 = *(_QWORD*)(a1 + 16);
		v36 = sub_140062650(a1, (unsigned __int64*)aLuaLuaLuaLuaIn, v34);
		*(_DWORD*)(v35 + 8) = 4;
		*(_QWORD*)v35 = v36;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v41 = *(_QWORD*)(a1 + 16);
	v42 = -1i64;
	do
		++v42;
	while (aPath_6[v42]);
	v43 = sub_140062650(a1, (unsigned __int64*)aPath_6, v42);
	v44 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v43;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v41 - 32), (int*)&v89, v44);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v45 = (const __m128i*)sub_140901E90(aLuaCpath);
	if (v45)
	{
		v49 = (const __m128i*)sub_140057200((_QWORD*)a1, v45, (const __m128i*)asc_140C39FB4, &asc_140C39FD4);
		sub_140057200((_QWORD*)a1, v49, (const __m128i*) & unk_140C39F8C, aDllDllLoadallD);
		v50 = *(_QWORD*)(a1 + 16);
		v51 = (_QWORD*)(v50 - 16);
		if (v50 - 16 < v50)
		{
			do
			{
				v52 = *v51;
				v51 += 2;
				*(v51 - 4) = v52;
				*((_DWORD*)v51 - 6) = *((_DWORD*)v51 - 2);
			} while ((unsigned __int64)v51 < *(_QWORD*)(a1 + 16));
		}
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	else
	{
		v46 = -1i64;
		do
			++v46;
		while (aDllDllLoadallD[v46]);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v47 = *(_QWORD*)(a1 + 16);
		v48 = sub_140062650(a1, (unsigned __int64*)aDllDllLoadallD, v46);
		*(_DWORD*)(v47 + 8) = 4;
		*(_QWORD*)v47 = v48;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v53 = *(_QWORD*)(a1 + 16);
	v54 = -1i64;
	do
		++v54;
	while (aCpath_1[v54]);
	v55 = sub_140062650(a1, (unsigned __int64*)aCpath_1, v54);
	v56 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v55;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v53 - 32), (int*)&v89, v56);
	v57 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (*(_QWORD*)(v57 + 120) >= *(_QWORD*)(v57 + 112))
		sub_14005E2C0(a1);
	v58 = *(_QWORD*)(a1 + 16);
	v59 = sub_140062650(a1, (unsigned __int64*)asc_140C3A800, 9ui64);
	*(_DWORD*)(v58 + 8) = 4;
	*(_QWORD*)v58 = v59;
	*(_QWORD*)(a1 + 16) += 16i64;
	v60 = *(_QWORD*)(a1 + 16);
	v61 = -1i64;
	do
		++v61;
	while (aConfig[v61]);
	v62 = sub_140062650(a1, (unsigned __int64*)aConfig, v61);
	v63 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v62;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v60 - 32), (int*)&v89, v63);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_140057390(a1, -10000, (unsigned __int64*)aLoaded_4, 2);
	v64 = *(_QWORD*)(a1 + 16);
	v65 = -1i64;
	do
		++v65;
	while (aLoaded_5[v65]);
	v66 = sub_140062650(a1, (unsigned __int64*)aLoaded_5, v65);
	v67 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v66;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v64 - 32), (int*)&v89, v67);
	v68 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (*(_QWORD*)(v68 + 120) >= *(_QWORD*)(v68 + 112))
		sub_14005E2C0(a1);
	v69 = *(_QWORD*)(a1 + 16);
	v70 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v69 + 8) = 5;
	*(_QWORD*)v69 = v70;
	*(_QWORD*)(a1 + 16) += 16i64;
	v71 = *(_QWORD*)(a1 + 16);
	v72 = -1i64;
	do
		++v72;
	while (aPreload_1[v72]);
	v73 = sub_140062650(a1, (unsigned __int64*)aPreload_1, v72);
	v74 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v89 = v73;
	v90 = 4;
	sub_14005EA50(a1, (__int64*)(v71 - 32), (int*)&v89, v74);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v75 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v75 = *(_QWORD*)(a1 + 120);
	v76 = &off_140B50E50;
	*(_DWORD*)(v75 + 8) = *(_DWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (aModule)
	{
		do
		{
			v77 = v76[1];
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v78 = *(_QWORD*)(a1 + 40);
			if (v78 == *(_QWORD*)(a1 + 80))
				v79 = *(_QWORD*)(a1 + 120);
			else
				v79 = *(_QWORD*)(**(_QWORD**)(v78 + 8) + 24i64);
			v80 = sub_140060AB0(a1, 0, v79);
			v80[4] = v77;
			v81 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v81 = v80;
			*(_DWORD*)(v81 + 8) = 6;
			*(_QWORD*)(a1 + 16) += 16i64;
			v82 = (__int64*)sub_1400580E0(a1, -2);
			v84 = -1i64;
			v85 = v82;
			do
				++v84;
			while (*((_BYTE*)v83 + v84));
			v86 = sub_140062650(a1, v83, v84);
			v87 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
			v89 = v86;
			v90 = 4;
			sub_14005EA50(a1, v85, (int*)&v89, v87);
			*(_QWORD*)(a1 + 16) -= 16i64;
			v76 += 2;
		} while (*v76);
	}
	*(_QWORD*)(a1 + 16) -= 16i64;
	return 1i64;
}
// 140797D23: variable 'v83' is possibly undefined
// 140B505F8: using guessed type __int64 (__fastcall *off_140B505F8[4])();
// 140B50E20: using guessed type char *off_140B50E20;
// 140B50E50: using guessed type char *off_140B50E50;
// 140C39FD4: using guessed type char asc_140C39FD4;

