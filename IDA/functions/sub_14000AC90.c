//----- (000000014000AC90) ----------------------------------------------------
signed int __fastcall sub_14000AC90(__int64 a1, HINSTANCE a2, int a3)
{
	__int64 v3; // r15
	const wchar_t* v6; // r9
	int v7; // esi
	int v8; // ebx
	signed int result; // eax
	const WCHAR* CommandLineW; // rax
	LPWSTR* v11; // rax
	_QWORD* v12; // r13
	__int64* v13; // rsi
	__int64 v14; // r14
	_WORD* v15; // rbx
	__int64 v16; // r12
	int v17; // r14d
	__int64 v18; // rbx
	int v19; // ecx
	WCHAR* v20; // rcx
	DWORD v21; // ebx
	HANDLE CurrentThread; // rax
	const __m128i* v23; // rax
	const __m128i* v24; // rax
	__int64 v25; // rcx
	__m128i* v26; // rax
	char* v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rcx
	signed __int64 v30; // r8
	__int16 v31; // dx
	__int64 v32; // r12
	int v33; // r14d
	__int64 v34; // rbx
	_QWORD* v35; // rsi
	int v36; // ecx
	__int64 v37; // rcx
	__int64 v38; // r12
	int v39; // r14d
	__int64 v40; // rbx
	_QWORD* v41; // rsi
	int v42; // ecx
	__int64 v43; // rcx
	__int64 v44; // r12
	int v45; // r14d
	__int64 v46; // rbx
	_QWORD* v47; // rsi
	int v48; // ecx
	__int64 v49; // rcx
	__int64 v50; // r12
	int v51; // r14d
	__int64 v52; // rbx
	_QWORD* v53; // rsi
	int v54; // ecx
	const wchar_t* v55; // rbx
	__int64 v56; // rdx
	__int64 v57; // r8
	__int64 v58; // r9
	__int64 v59; // rcx
	int v60; // eax
	signed int v61; // eax
	int v62; // esi
	_DWORD* v63; // rcx
	__int64 v64; // rax
	int v65; // ebx
	int v66; // r14d
	_QWORD* v67; // rsi
	int v68; // ebx
	int v69; // ecx
	int v70; // ebx
	int v71; // [rsp+20h] [rbp-E0h]
	__int64 v72; // [rsp+20h] [rbp-E0h]
	int v73; // [rsp+28h] [rbp-D8h]
	__int64 v74; // [rsp+28h] [rbp-D8h]
	__int64 v75; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *TlsValue)(); // [rsp+70h] [rbp-90h] BYREF
	__int128 v77; // [rsp+78h] [rbp-88h]
	__int64 v78; // [rsp+88h] [rbp-78h] BYREF
	int pNumArgs; // [rsp+90h] [rbp-70h] BYREF
	__int128 v80; // [rsp+98h] [rbp-68h] BYREF
	LPVOID lpTlsValue[2]; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v82)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v83; // [rsp+C8h] [rbp-38h]
	__int128 v84; // [rsp+E0h] [rbp-20h] BYREF
	__int128 v85; // [rsp+F0h] [rbp-10h]
	__m128i Filename[33]; // [rsp+100h] [rbp+0h] BYREF
	WCHAR v87[128]; // [rsp+310h] [rbp+210h] BYREF

	v3 = qword_140C635F0;
	dword_140C1E44C = 3;
	if (!*(_QWORD*)&qword_140C63788 || (v6 = *(const wchar_t**)(*(_QWORD*)&qword_140C63788 + 4896i64)) == 0i64)
		v6 = L"WildStar";
	sub_1407DD8B4(v87, 0x80ui64, (__int64)L"%s %d", v6, 16042);
	if ((*(_BYTE*)(v3 + 64) & 1) != 0)
	{
		v7 = -2147467259;
	LABEL_7:
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v77 = 0i64;
		*((_QWORD*)&v77 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v82 = TlsValue;
		v83 = v77;
		*(_QWORD*)&v80 = &off_140B5E648;
		*((_QWORD*)&v80 + 1) = L"Result";
		lpTlsValue[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v80);
		LODWORD(lpTlsValue[1]) = v7;
		*(_QWORD*)&v80 = &off_140B5E640;
		v85 = *(_OWORD*)lpTlsValue;
		v78 = 0x141CD8E60i64;
		v84 = v80;
		v8 = sub_140196F30(&dword_140C89FD8, 22, &v78, &v84, &v82);
		*(_QWORD*)&v80 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v77 + 1));
		if (v8)
			DebugBreak();
		return v7;
	}
	v7 = sub_140008910(v3, a2, v87, a3);
	if (v7 < 0)
		goto LABEL_7;
	pNumArgs = 0;
	CommandLineW = GetCommandLineW();
	v11 = CommandLineToArgvW(CommandLineW, &pNumArgs);
	v12 = (_QWORD*)(v3 + 288);
	*(_DWORD*)(v3 + 296) = pNumArgs;
	*(_QWORD*)(v3 + 288) = v11;
	pNumArgs = 0;
	v78 = 0i64;
	LocalFree(0i64);
	v13 = *(__int64**)(v3 + 288);
	v14 = *v13;
	v15 = (_WORD*)v13[1];
	if ((unsigned int)sub_14018E2C0(*v13, L"/auth") && (unsigned int)sub_14018E2C0(v14, L"-auth") || !v15 || !*v15)
		sub_1400112C0(v3);
	v16 = *(int*)(v3 + 296);
	v17 = 0;
	v18 = 0i64;
	if (v16 > 0)
	{
		while (1)
		{
			v19 = *(unsigned __int16*)*v13;
			if ((((v19 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v19 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v13 + 2, L"processor"))
			{
				break;
			}
			++v18;
			++v17;
			++v13;
			if (v18 >= v16)
				goto LABEL_23;
		}
		if (v17 + 1 < *(_DWORD*)(v3 + 296))
		{
			v20 = *(WCHAR**)(*v12 + 8i64 * v17 + 8);
			if (v20)
			{
				v21 = sub_14018E820(v20);
				CurrentThread = GetCurrentThread();
				SetThreadIdealProcessor(CurrentThread, v21);
			}
		}
	}
LABEL_23:
	GetModuleFileNameW(0i64, (LPWSTR)Filename, 0x104u);
	v23 = sub_1407DD8D8(Filename, 0x5Cu);
	if (v23)
		v23->m128i_i16[0] = 0;
	v24 = sub_1407DD8D8(Filename, 0x5Cu);
	if (v24)
		v24->m128i_i16[0] = 0;
	v25 = 260i64;
	v26 = Filename;
	while (v26->m128i_i16[0])
	{
		v26 = (__m128i*)((char*)v26 + 2);
		if (!--v25)
			goto LABEL_37;
	}
	v27 = &Filename[0].m128i_i8[2 * (260 - v25)];
	v28 = v25;
	v29 = 2147483646i64;
	v30 = (char*)L"\\Patch PatchDataWriteLock" - v27;
	while (v29)
	{
		v31 = *(_WORD*)&v27[v30];
		if (!v31)
			break;
		*(_WORD*)v27 = v31;
		v27 += 2;
		--v29;
		if (!--v28)
		{
			v27 -= 2;
			break;
		}
	}
	*(_WORD*)v27 = 0;
LABEL_37:
	result = sub_1401A1070((__int64*)(v3 + 320), 0, 0, Filename, 1);
	if (result >= 0)
	{
		v32 = *(int*)(v3 + 296);
		v33 = 0;
		v34 = 0i64;
		if (v32 <= 0)
			goto LABEL_44;
		v35 = (_QWORD*)*v12;
		while (1)
		{
			v36 = *(unsigned __int16*)*v35;
			if ((((v36 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v36 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v35 + 2i64, L"account"))
			{
				break;
			}
			++v34;
			++v33;
			++v35;
			if (v34 >= v32)
				goto LABEL_44;
		}
		if (v33 + 1 >= *(_DWORD*)(v3 + 296))
			LABEL_44:
		v37 = 0i64;
		else
			v37 = *(_QWORD*)(*v12 + 8i64 * v33 + 8);
		*(_QWORD*)(v3 + 5720) = v37;
		v38 = *(int*)(v3 + 296);
		v39 = 0;
		v40 = 0i64;
		if (v38 <= 0)
			goto LABEL_51;
		v41 = (_QWORD*)*v12;
		while (1)
		{
			v42 = *(unsigned __int16*)*v41;
			if ((((v42 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v42 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v41 + 2i64, L"password"))
			{
				break;
			}
			++v40;
			++v39;
			++v41;
			if (v40 >= v38)
				goto LABEL_51;
		}
		if (v39 + 1 >= *(_DWORD*)(v3 + 296))
			LABEL_51:
		v43 = 0i64;
		else
			v43 = *(_QWORD*)(*v12 + 8i64 * v39 + 8);
		*(_QWORD*)(v3 + 5712) = v43;
		v44 = *(int*)(v3 + 296);
		v45 = 0;
		v46 = 0i64;
		if (v44 <= 0)
			goto LABEL_58;
		v47 = (_QWORD*)*v12;
		while (1)
		{
			v48 = *(unsigned __int16*)*v47;
			if ((((v48 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v48 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v47 + 2i64, L"authtoken"))
			{
				break;
			}
			++v46;
			++v45;
			++v47;
			if (v46 >= v44)
				goto LABEL_58;
		}
		if (v45 + 1 >= *(_DWORD*)(v3 + 296))
			LABEL_58:
		v49 = 0i64;
		else
			v49 = *(_QWORD*)(*v12 + 8i64 * v45 + 8);
		*(_QWORD*)(v3 + 5728) = v49;
		if (dword_140C674A0)
			sub_1401A1530(v3 + 288);
		else
			OutputDebugStringA("WARNING! Log called before CRT startup");
		v50 = *(int*)(v3 + 296);
		v51 = 0;
		v52 = 0i64;
		if (v50 <= 0)
		{
		LABEL_74:
			v55 = L"en";
		}
		else
		{
			v53 = (_QWORD*)*v12;
			while (1)
			{
				v54 = *(unsigned __int16*)*v53;
				if ((((v54 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v54 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v53 + 2i64, L"Lang"))
				{
					break;
				}
				++v52;
				++v51;
				++v53;
				if (v52 >= v50)
					goto LABEL_74;
			}
			if (v51 + 1 >= *(_DWORD*)(v3 + 296))
				v55 = 0i64;
			else
				v55 = *(const wchar_t**)(*v12 + 8i64 * v51 + 8);
		}
		if ((unsigned int)sub_14018E2C0((__int64)v55, L"en"))
		{
			if ((unsigned int)sub_14018E2C0((__int64)v55, L"de"))
			{
				if ((unsigned int)sub_14018E2C0((__int64)v55, L"fr"))
				{
					v60 = sub_14018E2C0((__int64)v55, L"zh");
					v59 = 17i64;
					v56 = 24i64;
					if (!v60)
						v59 = 24i64;
				}
				else
				{
					v59 = 18i64;
				}
			}
			else
			{
				v59 = 20i64;
			}
		}
		else
		{
			v59 = 17i64;
		}
		v61 = sub_1401B41F0(v59, v56, v57, v58, v71, v73, v59);
		v62 = v61;
		if (v61 >= 0)
		{
			sub_140017000();
			if ((int)sub_140003230() < 0)
			{
				TlsValue = &off_140B5E648;
				*(_QWORD*)&v77 = 0i64;
				*((_QWORD*)&v77 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v82 = TlsValue;
				v78 = 0x141CD8FC0i64;
				v83 = v77;
				v65 = sub_140197770(22, &v78, &v82);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v77 + 1));
				if (v65)
					DebugBreak();
			}
			sub_140193F10((int*)(v3 + 348));
			v78 = 0x141CD9030i64;
			LODWORD(v75) = *(_DWORD*)(v3 + 3440);
			LODWORD(v74) = *(_DWORD*)(v3 + 3436);
			LODWORD(v72) = *(_DWORD*)(v3 + 3432);
			sub_1401A3130(
				22,
				2,
				&v78,
				v3 + 1372,
				v72,
				v74,
				v75,
				v3 + 3444,
				*(_DWORD*)(v3 + 5508),
				v3 + 4468,
				*(_DWORD*)(v3 + 5516),
				*(_DWORD*)(v3 + 5512),
				*(_DWORD*)(v3 + 5520),
				*(_DWORD*)(v3 + 5524));
			sub_14000AAE0();
			sub_14043DB20();
			v66 = *(_DWORD*)(v3 + 296);
			v67 = (_QWORD*)*v12;
			v68 = 0;
			if (v66 <= 0)
				return 0;
			while (1)
			{
				v69 = *(unsigned __int16*)*v67;
				if ((((v69 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v69 - 150) <= 1)
					&& !(unsigned int)sub_14018E2C0(*v67 + 2i64, L"steam"))
				{
					break;
				}
				++v68;
				++v67;
				if (v68 >= v66)
					return 0;
			}
			v62 = sub_140054DD0();
			if (v62 >= 0)
				return 0;
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v77 = 0i64;
			*((_QWORD*)&v77 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v82 = TlsValue;
			v83 = v77;
			*(_QWORD*)&v80 = &off_140B5E648;
			*((_QWORD*)&v80 + 1) = L"Result";
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v80);
			*(_QWORD*)&v80 = &off_140B5E640;
			v63 = &unk_140C89FD0;
			v64 = 0x141CD8F88i64;
		}
		else
		{
			if (((v61 + 1610416126) & 0xFFFFFFFA) == 0 && v61 != -1610416122)
				sub_1400112C0(v3);
			*(_QWORD*)&v77 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v77 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v82 = TlsValue;
			v83 = v77;
			*(_QWORD*)&v80 = &off_140B5E648;
			*((_QWORD*)&v80 + 1) = L"Result";
			lpTlsValue[0] = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v80);
			v63 = &unk_140C89FD4;
			*(_QWORD*)&v80 = &off_140B5E640;
			v64 = 0x141CD8F50i64;
		}
		LODWORD(lpTlsValue[1]) = v62;
		v78 = v64;
		v85 = *(_OWORD*)lpTlsValue;
		v84 = v80;
		v70 = sub_1401971E0(v63, 22, &v78, &v84, &v82);
		*(_QWORD*)&v80 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v77 + 1));
		if (v70)
			DebugBreak();
		return v62;
	}
	return result;
}
// 14000AFD3: conditional instruction was optimized away because rcx.8!=0
// 14000AFE6: conditional instruction was optimized away because rcx.8!=0
// 14000B023: conditional instruction was optimized away because rbx.8!=0
// 14000B2CC: variable 'v56' is possibly undefined
// 14000B2CC: variable 'v57' is possibly undefined
// 14000B2CC: variable 'v58' is possibly undefined
// 14000B2CC: variable 'v71' is possibly undefined
// 14000B2CC: variable 'v73' is possibly undefined
// 14000B4CF: variable 'v72' is possibly undefined
// 14000B4CF: variable 'v74' is possibly undefined
// 14000B4CF: variable 'v75' is possibly undefined
// 1409D17B4: using guessed type wchar_t aEn[3];
// 1409D1884: using guessed type wchar_t aEn_0[3];
// 1409D1944: using guessed type wchar_t aDe[3];
// 1409D19D4: using guessed type wchar_t aFr[3];
// 1409D1A7C: using guessed type wchar_t aZh[3];
// 1409DE7A8: using guessed type wchar_t aSD[6];
// 1409DE840: using guessed type wchar_t aAuth[6];
// 1409DE850: using guessed type wchar_t aAuth_0[6];
// 1409DE860: using guessed type wchar_t aProcessor[10];
// 1409DE878: using guessed type wchar_t aPatchPatchdata[26];
// 1409DE8B0: using guessed type wchar_t aAccount[8];
// 1409DE8C0: using guessed type wchar_t aPassword[9];
// 1409DE8E0: using guessed type wchar_t aAuthtoken[10];
// 1409DE8F8: using guessed type wchar_t aLang[5];
// 1409DEA40: using guessed type wchar_t aSteam[6];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140A44F50: using guessed type wchar_t aWildstar_0[9];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C1E44C: using guessed type int dword_140C1E44C;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C674A0: using guessed type int dword_140C674A0;
// 140C89FD8: using guessed type _DWORD dword_140C89FD8;
// 14000AC90: using guessed type WCHAR var_130[128];
// 14000AC90: using guessed type __m128i Filename[33];

