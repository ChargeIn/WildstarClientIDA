//----- (00000001402A7940) ----------------------------------------------------
__int64 __fastcall sub_1402A7940(__int64* a1, int a2, unsigned int a3, _DWORD* a4, char a5)
{
	__int64 v5; // rax
	__int64 v6; // rsi
	unsigned __int64 v7; // r14
	__int64 v10; // r8
	__int64 v11; // rdx
	int v12; // edi
	int v13; // r12d
	__int64 v14; // rbx
	int v15; // ebx
	int v16; // ebx
	int v17; // ecx
	__int64 v18; // r9
	__int64 v19; // rax
	int v20; // ecx
	unsigned int v21; // r14d
	int v22; // eax
	int v23; // eax
	int v24; // eax
	__int64 v25; // rax
	int v26; // eax
	void* v27; // xmm1_8
	__int64 v28; // rcx
	int v29; // r14d
	void* v30; // xmm1_8
	__int64 v31; // rcx
	__int64 v32; // rdx
	volatile signed __int32* v33; // rdx
	int v34; // ebx
	__int64 v35; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v36; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v37; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v38; // [rsp+68h] [rbp-98h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+70h] [rbp-90h] BYREF
	__int64 v40; // [rsp+78h] [rbp-88h]
	LPVOID Value; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v42)(); // [rsp+88h] [rbp-78h] BYREF
	__int128 v43; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v44)(); // [rsp+A0h] [rbp-60h] BYREF
	__int128 v45; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v46)(); // [rsp+B8h] [rbp-48h] BYREF
	const wchar_t* v47; // [rsp+C0h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+C8h] [rbp-38h]
	__int64 v49; // [rsp+D0h] [rbp-30h]
	_DWORD* v50; // [rsp+D8h] [rbp-28h]
	__int64(__fastcall * *v51)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v52; // [rsp+E8h] [rbp-18h]
	__int64 v53; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v54; // [rsp+100h] [rbp+0h]
	__int128 v55; // [rsp+108h] [rbp+8h] BYREF
	__int128 v56; // [rsp+118h] [rbp+18h]
	__int128 v57; // [rsp+128h] [rbp+28h] BYREF
	__int128 v58; // [rsp+138h] [rbp+38h]
	__int64 v59; // [rsp+148h] [rbp+48h] BYREF
	__int64 v60; // [rsp+150h] [rbp+50h] BYREF
	__int64 v61; // [rsp+158h] [rbp+58h] BYREF
	__int64(__fastcall * *v62)(); // [rsp+160h] [rbp+60h] BYREF
	__int128 v63; // [rsp+168h] [rbp+68h]
	__int64 v64[4]; // [rsp+180h] [rbp+80h] BYREF
	__int64(__fastcall * *v65)(); // [rsp+1A0h] [rbp+A0h] BYREF
	__int128 v66; // [rsp+1A8h] [rbp+A8h]
	__int64(__fastcall * *v67)(); // [rsp+1C0h] [rbp+C0h] BYREF
	__int128 v68; // [rsp+1C8h] [rbp+C8h]
	__int64 v69[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	int v70[4]; // [rsp+200h] [rbp+100h] BYREF
	__int128 v71; // [rsp+210h] [rbp+110h]
	__int128 v72; // [rsp+220h] [rbp+120h]
	__int128 v73; // [rsp+230h] [rbp+130h]
	__int128 v74; // [rsp+240h] [rbp+140h]
	int v75[5]; // [rsp+250h] [rbp+150h] BYREF
	__int64 v76; // [rsp+264h] [rbp+164h]
	__int64 v77; // [rsp+26Ch] [rbp+16Ch]
	int v78; // [rsp+274h] [rbp+174h]
	int v79; // [rsp+278h] [rbp+178h]

	v5 = *a1;
	v6 = a2;
	v7 = a3;
	v50 = a4;
	LODWORD(v36) = a3;
	v70[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 32))(a1, v70);
	if (!a1[14])
		return 0i64;
	if ((a5 & 3) == 0)
		return 0i64;
	v10 = 0i64;
	v11 = (unsigned int)(1 << v7);
	v12 = 0;
	LODWORD(v38) = a5 & 1;
	if ((a5 & 1) != 0)
	{
		if (*((_DWORD*)a1 + 13) == 1)
		{
			*(_QWORD*)&v43 = 0i64;
			v42 = &off_140B5E648;
			*((_QWORD*)&v43 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v42);
			v67 = v42;
			v36 = 0x141DE67D0i64;
			v68 = v43;
			v16 = sub_1401971E0(&dword_140C8A500, 14, &v36, &v67);
			v42 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v43 + 1));
			if (v16)
				DebugBreak();
		}
		else
		{
			if (*((_DWORD*)a1 + 13) != 4)
			{
				v12 = 1 << v7;
				goto LABEL_9;
			}
			*(_QWORD*)&v45 = 0i64;
			v44 = &off_140B5E648;
			*((_QWORD*)&v45 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v44);
			v62 = v44;
			v38 = 0x141DE6760i64;
			v63 = v45;
			v15 = sub_1401971E0(&dword_140C8A504, 14, &v38, &v62);
			v44 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v45 + 1));
			if (v15)
			{
				DebugBreak();
				return 0i64;
			}
		}
		return 0i64;
	}
LABEL_9:
	v13 = 0;
	if ((a5 & 2) != 0)
	{
		if (a1[9])
		{
			v40 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = a1[9];
			v64[0] = (__int64)TlsValue;
			v64[1] = v40;
			v46 = &off_140B5E648;
			v64[2] = (__int64)Value;
			v47 = L"FileName";
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v46);
			v49 = v14;
			v69[1] = (__int64)v47;
			v46 = &off_140B5E638;
			v69[3] = v14;
			v69[0] = (__int64)&off_140B5E638;
			v35 = 0x141DE66F0i64;
			v69[2] = (__int64)lpTlsValue;
			LODWORD(v14) = sub_1401971E0(&dword_140C8A508, 14, &v35, v69, v64);
			v46 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v14)
				DebugBreak();
			return 0i64;
		}
		v13 = 1 << v7;
	}
	v17 = *((_DWORD*)a1 + v6 + 118);
	if (((v12 | v13) & v17) != 0 || ((*((_DWORD*)a1 + v6 + 112) | v17) & v13) != 0)
	{
		*(_QWORD*)&v52 = 0i64;
		v51 = &off_140B5E648;
		*((_QWORD*)&v52 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v51);
		v65 = v51;
		v60 = 0x141DE6680i64;
		v66 = v52;
		v34 = sub_1401971E0(&dword_140C8A4FC, 14, &v60, &v65);
		v51 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v52 + 1));
		if (v34)
			DebugBreak();
		return 0i64;
	}
	*((_DWORD*)a1 + 86) = 1;
	if (v12)
	{
		if (a1[2 * v6 + 45] <= v7)
			sub_14028F410(&a1[2 * v6 + 44], (unsigned int)(v7 + 1));
		v10 = 2 * (v6 + 22);
		v18 = 24 * v7;
		v19 = a1[2 * v6 + 44];
		v20 = *(_DWORD*)(v19 + 24 * v7);
		if (v20)
		{
			*(_DWORD*)(v19 + 24 * v7) = v20 + 1;
			*v50 = *(_DWORD*)(v18 + a1[2 * v6 + 44] + 16);
			return *(_QWORD*)(v18 + a1[2 * v6 + 44] + 8);
		}
	}
	v21 = 4;
	if (!a1[15])
	{
		if (dword_140AE7EB0[*((int*)a1 + 13)])
		{
			v28 = a1[14];
			a1[15] = v28;
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v28 + 8i64))(v28, v11, v10);
		}
		else
		{
			v22 = *((_DWORD*)a1 + 7);
			v75[3] = 6;
			v76 = 1i64;
			v75[0] = v22;
			v23 = *((_DWORD*)a1 + 8);
			v77 = 3i64;
			v75[1] = v23;
			v24 = *((_DWORD*)a1 + 11);
			v78 = 196608;
			v75[2] = v24;
			v25 = *((int*)a1 + 12);
			v79 = 4;
			v75[4] = dword_140AE8120[v25];
			v26 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64*))(**(_QWORD**)(a1[2] + 6336) + 40i64))(
				*(_QWORD*)(a1[2] + 6336),
				v75,
				0i64,
				a1 + 15);
			LODWORD(v35) = v26;
			if (v26 < 0)
			{
				v59 = 0x141DE6168i64;
				sub_1401A3130(14, 2, &v59, (unsigned int)v26);
				*((_QWORD*)&v57 + 1) = L"Result";
				*(_QWORD*)&v57 = &off_140B5E648;
				*(_QWORD*)&v58 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v57);
				*(_QWORD*)&v57 = &off_140B5E640;
				DWORD2(v58) = v35;
				v71 = v57;
				v27 = (void*)v58;
				v72 = v58;
				sub_1400035B0();
				*(_QWORD*)&v57 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, v27);
				return 0i64;
			}
		}
	}
	LODWORD(v35) = v36 + v6 * *((_DWORD*)a1 + 11);
	if (v12 && a1[15] != a1[14])
	{
		sub_14003D8F0(&v61, a1[2] + 6368);
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64, _DWORD, _QWORD))(**(_QWORD**)(a1[2] + 6352) + 368i64))(
			*(_QWORD*)(a1[2] + 6352),
			a1[15],
			(unsigned int)v35,
			0i64,
			0,
			0,
			a1[14],
			v35,
			0i64);
		sub_14003D880(&v61);
	}
	if (*((_DWORD*)a1 + 13) != 4)
	{
		if (v12)
		{
			v21 = 1;
			if (v13)
				v21 = 3;
		}
		else
		{
			v21 = 2;
		}
	}
	sub_14003D8F0(&v37, a1[2] + 6368);
	v29 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, __int64*))(**(_QWORD**)(a1[2] + 6352)
		+ 112i64))(
			*(_QWORD*)(a1[2] + 6352),
			a1[15],
			(unsigned int)v35,
			v21,
			0,
			&v53);
	if (v29 < 0)
	{
		*(_QWORD*)&v55 = &off_140B5E648;
		*((_QWORD*)&v55 + 1) = L"Result";
		*(_QWORD*)&v56 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v55);
		*(_QWORD*)&v55 = &off_140B5E640;
		DWORD2(v56) = v29;
		v30 = (void*)v56;
		v73 = v55;
		v74 = v56;
		sub_1400035B0();
		*(_QWORD*)&v55 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v30);
		sub_14003D880(&v37);
		return 0i64;
	}
	sub_14003D880(&v37);
	*((_DWORD*)a1 + v6 + 112) |= v12;
	*((_DWORD*)a1 + v6 + 118) |= v13;
	if (v12)
	{
		v31 = 3i64 * (unsigned int)v36;
		++* (_DWORD*)(a1[2 * v6 + 44] + 8 * v31);
		v32 = a1[2 * v6 + 44] + 8 * v31;
		*(_QWORD*)(v32 + 8) = v53;
		*(_QWORD*)(v32 + 16) = v54;
	}
	v33 = (volatile signed __int32*)(48i64 * *((int*)a1 + 13) + a1[2] + 724);
	if ((_DWORD)v38)
	{
		_InterlockedIncrement(v33 + 6);
		_InterlockedExchangeAdd(v33 + 7, *((_DWORD*)a1 + 124));
	}
	if ((a5 & 2) != 0)
	{
		_InterlockedIncrement(v33 + 8);
		_InterlockedExchangeAdd(v33 + 9, *((_DWORD*)a1 + 124));
	}
	*v50 = v54;
	return v53;
}
// 1402A7EA2: variable 'v11' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE7EB0: using guessed type int dword_140AE7EB0[];
// 140AE8120: using guessed type int dword_140AE8120[28];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4FC: using guessed type _DWORD dword_140C8A4FC;
// 140C8A500: using guessed type _DWORD dword_140C8A500;
// 140C8A504: using guessed type _DWORD dword_140C8A504;
// 140C8A508: using guessed type _DWORD dword_140C8A508;
// 1402A7940: using guessed type int var_D0[4];

