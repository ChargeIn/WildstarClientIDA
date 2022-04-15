//----- (000000014052ED60) ----------------------------------------------------
__int64 __fastcall sub_14052ED60(__int64 a1, __int64 a2)
{
	__int64 v5; // rax
	int* v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	unsigned __int16* v10; // r11
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v26; // rsi
	unsigned __int64 v27; // rdi
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	__int64 v30; // rax
	float v31; // xmm0_4
	__int64* v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	__int64 v36; // rsi
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	__int64 v39; // rax
	float v40; // xmm0_4
	__int64* v41; // rax
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	__int64 v45; // rsi
	unsigned __int64* v46; // rdx
	unsigned __int64 v47; // r8
	__int64 v48; // rax
	float v49; // xmm0_4
	__int64* v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	__int64 v54; // rsi
	unsigned __int64* v55; // rdx
	__int64 v56; // rax
	float v57; // xmm0_4
	__int64* v58; // rax
	void(__fastcall * **v59)(_QWORD); // rax
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rdx
	int v63; // r11d
	_QWORD* v64; // rax
	__int64 v65; // r10
	__int64 v66; // rdx
	int v67; // r11d
	__int64 v68; // rcx
	unsigned int v69; // eax
	int v70[8]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v71; // [rsp+40h] [rbp-28h] BYREF
	__int64 v72; // [rsp+48h] [rbp-20h]

	if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1))
		return 2147500037i64;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 48i64))(v5) & 1) != 0)
		return 2147500037i64;
	v6 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	sub_14044A3B0((__int64)v70, v6);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v9, L"strFolder", v10);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v13, L"strName", v14);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	(**(void(__fastcall***)(__int64))a1)(a1);
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v17 = *(_QWORD*)(v16 + 16);
	*(_QWORD*)v17 = *v15;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v16 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v17, L"id", v18);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v21 = *(_QWORD*)(v20 + 16);
	*(_QWORD*)v21 = *v19;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(v20 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v21, L"nWorldId", v22);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v25 = *(_QWORD*)(v24 + 16);
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	v26 = *(_QWORD*)(a2 + 16);
	v27 = -1i64;
	v28 = (unsigned __int64*)sub_14018F0E0(&v71, L"fNorth")[1];
	if (v28)
	{
		v29 = -1i64;
		do
			++v29;
		while (*((_BYTE*)v28 + v29));
		sub_140058710(v26, v28, v29);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v26 + 16) + 8i64) = 0;
		*(_QWORD*)(v26 + 16) += 16i64;
	}
	if (v72)
		sub_14018B900(v72, 0);
	v30 = *(_QWORD*)(v26 + 16);
	v31 = *(float*)&v70[2];
	*(_DWORD*)(v30 + 8) = 3;
	*(double*)v30 = v31;
	*(_QWORD*)(v26 + 16) += 16i64;
	v32 = (__int64*)sub_1400580E0(v26, -3);
	sub_14005EA50(v26, v32, (int*)(*(_QWORD*)(v26 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v26 + 16) - 16i64));
	*(_QWORD*)(v26 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v35 = *(_QWORD*)(v34 + 16);
	*(_QWORD*)v35 = *v33;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(v34 + 16) += 16i64;
	v36 = *(_QWORD*)(a2 + 16);
	v37 = (unsigned __int64*)sub_14018F0E0(&v71, L"fSouth")[1];
	if (v37)
	{
		v38 = -1i64;
		do
			++v38;
		while (*((_BYTE*)v37 + v38));
		sub_140058710(v36, v37, v38);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v36 + 16) + 8i64) = 0;
		*(_QWORD*)(v36 + 16) += 16i64;
	}
	if (v72)
		sub_14018B900(v72, 0);
	v39 = *(_QWORD*)(v36 + 16);
	v40 = *(float*)&v70[6];
	*(_DWORD*)(v39 + 8) = 3;
	*(double*)v39 = v40;
	*(_QWORD*)(v36 + 16) += 16i64;
	v41 = (__int64*)sub_1400580E0(v36, -3);
	sub_14005EA50(v36, v41, (int*)(*(_QWORD*)(v36 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v36 + 16) - 16i64));
	*(_QWORD*)(v36 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v44 = *(_QWORD*)(v43 + 16);
	*(_QWORD*)v44 = *v42;
	*(_DWORD*)(v44 + 8) = *((_DWORD*)v42 + 2);
	*(_QWORD*)(v43 + 16) += 16i64;
	v45 = *(_QWORD*)(a2 + 16);
	v46 = (unsigned __int64*)sub_14018F0E0(&v71, L"fEast")[1];
	if (v46)
	{
		v47 = -1i64;
		do
			++v47;
		while (*((_BYTE*)v46 + v47));
		sub_140058710(v45, v46, v47);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v45 + 16) + 8i64) = 0;
		*(_QWORD*)(v45 + 16) += 16i64;
	}
	if (v72)
		sub_14018B900(v72, 0);
	v48 = *(_QWORD*)(v45 + 16);
	v49 = *(float*)&v70[4];
	*(_DWORD*)(v48 + 8) = 3;
	*(double*)v48 = v49;
	*(_QWORD*)(v45 + 16) += 16i64;
	v50 = (__int64*)sub_1400580E0(v45, -3);
	sub_14005EA50(v45, v50, (int*)(*(_QWORD*)(v45 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v45 + 16) - 16i64));
	*(_QWORD*)(v45 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v53 = *(_QWORD*)(v52 + 16);
	*(_QWORD*)v53 = *v51;
	*(_DWORD*)(v53 + 8) = *((_DWORD*)v51 + 2);
	*(_QWORD*)(v52 + 16) += 16i64;
	v54 = *(_QWORD*)(a2 + 16);
	v55 = (unsigned __int64*)sub_14018F0E0(&v71, L"fWest")[1];
	if (v55)
	{
		do
			++v27;
		while (*((_BYTE*)v55 + v27));
		sub_140058710(v54, v55, v27);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v54 + 16) + 8i64) = 0;
		*(_QWORD*)(v54 + 16) += 16i64;
	}
	if (v72)
		sub_14018B900(v72, 0);
	v56 = *(_QWORD*)(v54 + 16);
	v57 = *(float*)v70;
	*(_DWORD*)(v56 + 8) = 3;
	*(double*)v56 = v57;
	*(_QWORD*)(v54 + 16) += 16i64;
	v58 = (__int64*)sub_1400580E0(v54, -3);
	sub_14005EA50(v54, v58, (int*)(*(_QWORD*)(v54 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v54 + 16) - 16i64));
	*(_QWORD*)(v54 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v59 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	(**v59)(v59);
	v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v62 = *(_QWORD*)(v61 + 16);
	*(_QWORD*)v62 = *v60;
	*(_DWORD*)(v62 + 8) = *((_DWORD*)v60 + 2);
	*(_QWORD*)(v61 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v62, L"continentId", v63);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1);
	v64 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v66 = *(_QWORD*)(v65 + 16);
	*(_QWORD*)v66 = *v64;
	*(_DWORD*)(v66 + 8) = *((_DWORD*)v64 + 2);
	*(_QWORD*)(v65 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v66, L"parentZoneId", v67);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v69 = sub_140449570(v68, a1);
	if (v69)
	{
		if ((unsigned int)sub_1406B9790(*(_QWORD**)(a2 + 16), v69))
		{
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
	}
	return 0i64;
}
// 14052EDF2: variable 'v8' is possibly undefined
// 14052EE15: variable 'v10' is possibly undefined
// 14052EE46: variable 'v12' is possibly undefined
// 14052EE69: variable 'v14' is possibly undefined
// 14052EE99: variable 'v16' is possibly undefined
// 14052EEBC: variable 'v18' is possibly undefined
// 14052EEF0: variable 'v20' is possibly undefined
// 14052EF10: variable 'v22' is possibly undefined
// 14052EF35: variable 'v24' is possibly undefined
// 14052F008: variable 'v34' is possibly undefined
// 14052F0D8: variable 'v43' is possibly undefined
// 14052F1A8: variable 'v52' is possibly undefined
// 14052F29C: variable 'v61' is possibly undefined
// 14052F2BF: variable 'v63' is possibly undefined
// 14052F2F0: variable 'v65' is possibly undefined
// 14052F313: variable 'v67' is possibly undefined
// 14052F324: variable 'v68' is possibly undefined
// 140B13248: using guessed type wchar_t aParentzoneid[13];
// 140B13280: using guessed type wchar_t aFeast[6];
// 140B13290: using guessed type wchar_t aFsouth[7];
// 140B132A0: using guessed type wchar_t aContinentid[12];
// 140B132B8: using guessed type wchar_t aFwest[6];
// 140B132C4: using guessed type wchar_t aId_16[3];
// 140B132D0: using guessed type wchar_t aStrname_29[8];
// 140B132E0: using guessed type wchar_t aFnorth[7];
// 140B132F0: using guessed type wchar_t aNworldid[9];
// 140B13308: using guessed type wchar_t aStrfolder_0[10];

