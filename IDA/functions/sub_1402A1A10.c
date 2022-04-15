#include "../winhttp.h"

//----- (00000001402A1A10) ----------------------------------------------------
__int64 __fastcall sub_1402A1A10(__int64* a1, unsigned int a2, _DWORD* a3, char a4)
{
	__int64 v4; // rax
	unsigned __int64 v5; // r13
	unsigned int v9; // edi
	__int64 v10; // rdx
	int v11; // r14d
	int v12; // r12d
	int v13; // r15d
	__int64 v14; // rbx
	int v15; // ebx
	int v16; // ebx
	int v17; // ecx
	__int64 v18; // r8
	__int64 v19; // rax
	int v20; // ecx
	int v21; // eax
	int v22; // eax
	int v23; // eax
	int v24; // eax
	void* v25; // xmm1_8
	__int64 v26; // rcx
	void* v27; // xmm1_8
	__int64 v28; // rcx
	__int64 v29; // rcx
	volatile signed __int32* v30; // rdx
	int v31; // ebx
	__int64 v32; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v33; // [rsp+58h] [rbp-A8h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+60h] [rbp-A0h] BYREF
	__int64 v35; // [rsp+68h] [rbp-98h]
	LPVOID Value; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v37)(); // [rsp+78h] [rbp-88h] BYREF
	__int128 v38; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v39)(); // [rsp+90h] [rbp-70h] BYREF
	__int128 v40; // [rsp+98h] [rbp-68h]
	__int64(__fastcall * *v41)(); // [rsp+A8h] [rbp-58h] BYREF
	__int128 v42; // [rsp+B0h] [rbp-50h]
	__int64(__fastcall * *v43)(); // [rsp+C0h] [rbp-40h] BYREF
	const wchar_t* v44; // [rsp+C8h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+D0h] [rbp-30h]
	__int64 v46; // [rsp+D8h] [rbp-28h]
	_DWORD* v47; // [rsp+E0h] [rbp-20h]
	__int64 v48; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v49; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v50; // [rsp+F8h] [rbp-8h]
	__int128 v51; // [rsp+100h] [rbp+0h] BYREF
	__int128 v52; // [rsp+110h] [rbp+10h]
	__int128 v53; // [rsp+120h] [rbp+20h] BYREF
	__int128 v54; // [rsp+130h] [rbp+30h]
	__int64 v55; // [rsp+140h] [rbp+40h] BYREF
	__int64 v56; // [rsp+148h] [rbp+48h] BYREF
	__int64 v57; // [rsp+150h] [rbp+50h] BYREF
	__int64 v58; // [rsp+158h] [rbp+58h] BYREF
	__int64(__fastcall * *v59)(); // [rsp+160h] [rbp+60h] BYREF
	__int128 v60; // [rsp+168h] [rbp+68h]
	__int64 v61[4]; // [rsp+180h] [rbp+80h] BYREF
	__int64(__fastcall * *v62)(); // [rsp+1A0h] [rbp+A0h] BYREF
	__int128 v63; // [rsp+1A8h] [rbp+A8h]
	__int64(__fastcall * *v64)(); // [rsp+1C0h] [rbp+C0h] BYREF
	__int128 v65; // [rsp+1C8h] [rbp+C8h]
	__int64 v66[4]; // [rsp+1E0h] [rbp+E0h] BYREF
	int v67[4]; // [rsp+200h] [rbp+100h] BYREF
	__int128 v68; // [rsp+210h] [rbp+110h]
	__int128 v69; // [rsp+220h] [rbp+120h]
	__int128 v70; // [rsp+230h] [rbp+130h]
	__int128 v71; // [rsp+240h] [rbp+140h]
	int v72[5]; // [rsp+250h] [rbp+150h] BYREF
	__int64 v73; // [rsp+264h] [rbp+164h]
	__int64 v74; // [rsp+26Ch] [rbp+16Ch]
	__int64 v75; // [rsp+274h] [rbp+174h]

	v4 = *a1;
	v5 = a2;
	v47 = a3;
	v67[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v4 + 32))(a1, v67);
	if (!a1[14] || (a4 & 3) == 0)
		return 0i64;
	v9 = 1;
	v10 = (unsigned int)(1 << v5);
	LODWORD(v33) = a4 & 1;
	v11 = 0;
	if ((a4 & 1) != 0)
	{
		if (*((_DWORD*)a1 + 13) == 1)
		{
			*(_QWORD*)&v42 = 0i64;
			v41 = &off_140B5E648;
			*((_QWORD*)&v42 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v41);
			v64 = v41;
			v32 = 0x141DE5BC0i64;
			v65 = v42;
			v16 = sub_1401971E0(&dword_140C8A4A0, 14, &v32, &v64);
			v41 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v42 + 1));
			if (v16)
				DebugBreak();
		}
		else
		{
			if (*((_DWORD*)a1 + 13) != 4)
			{
				v11 = 1 << v5;
				goto LABEL_8;
			}
			*(_QWORD*)&v40 = 0i64;
			v39 = &off_140B5E648;
			*((_QWORD*)&v40 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v39);
			v59 = v39;
			v33 = 0x141DE5B50i64;
			v60 = v40;
			v15 = sub_1401971E0(&dword_140C8A490, 14, &v33, &v59);
			v39 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v40 + 1));
			if (v15)
			{
				DebugBreak();
				return 0i64;
			}
		}
		return 0i64;
	}
LABEL_8:
	v12 = 0;
	v13 = a4 & 2;
	if (v13)
	{
		if (a1[9])
		{
			v35 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = a1[9];
			v61[0] = (__int64)TlsValue;
			v61[1] = v35;
			v43 = &off_140B5E648;
			v61[2] = (__int64)Value;
			v44 = L"FileName";
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v43);
			v46 = v14;
			v66[1] = (__int64)v44;
			v43 = &off_140B5E638;
			v66[3] = v14;
			v66[0] = (__int64)&off_140B5E638;
			v57 = 0x141DE5AE0i64;
			v66[2] = (__int64)lpTlsValue;
			LODWORD(v14) = sub_1401971E0(&dword_140C8A494, 14, &v57, v66, v61);
			v43 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v14)
			{
				DebugBreak();
				return 0i64;
			}
			return 0i64;
		}
		v12 = 1 << v5;
	}
	v17 = *((_DWORD*)a1 + 53);
	if (((v11 | v12) & v17) != 0 || ((*((_DWORD*)a1 + 52) | v17) & v12) != 0)
	{
		*(_QWORD*)&v38 = 0i64;
		v37 = &off_140B5E648;
		*((_QWORD*)&v38 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v37);
		v62 = v37;
		v56 = 0x141DE5A80i64;
		v63 = v38;
		v31 = sub_1401971E0(&dword_140C8A498, 14, &v56, &v62);
		v37 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v38 + 1));
		if (v31)
			DebugBreak();
		return 0i64;
	}
	*((_DWORD*)a1 + 46) = 1;
	if (v11)
	{
		if (a1[25] <= v5)
			sub_14028F410(a1 + 24, (unsigned int)(v5 + 1));
		v18 = 24 * v5;
		v19 = a1[24];
		v20 = *(_DWORD*)(v19 + 24 * v5);
		if (v20)
		{
			*(_DWORD*)(v19 + 24 * v5) = v20 + 1;
			*v47 = *(_DWORD*)(v18 + a1[24] + 16);
			return *(_QWORD*)(v18 + a1[24] + 8);
		}
	}
	if (!a1[15])
	{
		if (dword_140AE7EB0[*((int*)a1 + 13)])
		{
			v26 = a1[14];
			a1[15] = v26;
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v26 + 8i64))(v26, v10);
		}
		else
		{
			v21 = *((_DWORD*)a1 + 7);
			v72[3] = 1;
			v73 = 1i64;
			v72[0] = v21;
			v22 = *((_DWORD*)a1 + 8);
			v74 = 3i64;
			v72[1] = v22;
			v23 = *((_DWORD*)a1 + 11);
			v75 = 196608i64;
			v72[2] = v23;
			v72[4] = dword_140AE8120[*((int*)a1 + 12)];
			v24 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64*))(**(_QWORD**)(a1[2] + 6336) + 40i64))(
				*(_QWORD*)(a1[2] + 6336),
				v72,
				0i64,
				a1 + 15);
			LODWORD(v32) = v24;
			if (v24 < 0)
			{
				v55 = 0x141DE58F8i64;
				sub_1401A3130(14, 2, &v55, (unsigned int)v24);
				*((_QWORD*)&v53 + 1) = L"Result";
				*(_QWORD*)&v53 = &off_140B5E648;
				*(_QWORD*)&v54 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v53);
				*(_QWORD*)&v53 = &off_140B5E640;
				DWORD2(v54) = v32;
				v68 = v53;
				v25 = (void*)v54;
				v69 = v54;
				sub_1400035B0();
				*(_QWORD*)&v53 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, v25);
				return 0i64;
			}
		}
	}
	if (v11 && a1[15] != a1[14])
	{
		sub_14003D8F0(&v58, a1[2] + 6368);
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64, _DWORD, _QWORD))(**(_QWORD**)(a1[2] + 6352) + 368i64))(
			*(_QWORD*)(a1[2] + 6352),
			a1[15],
			(unsigned int)v5,
			0i64,
			0,
			0,
			a1[14],
			v5,
			0i64);
		sub_14003D880(&v58);
	}
	if (*((_DWORD*)a1 + 13) == 4)
	{
		v9 = 4;
	}
	else if (v11)
	{
		if (v12)
			v9 = 3;
	}
	else
	{
		v9 = 2;
	}
	sub_14003D8F0(&v48, a1[2] + 6368);
	LODWORD(v32) = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, __int64*))(**(_QWORD**)(a1[2] + 6352)
		+ 112i64))(
			*(_QWORD*)(a1[2] + 6352),
			a1[15],
			(unsigned int)v5,
			v9,
			0,
			&v49);
	if ((int)v32 < 0)
	{
		*(_QWORD*)&v51 = &off_140B5E648;
		*((_QWORD*)&v51 + 1) = L"Result";
		*(_QWORD*)&v52 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v51);
		*(_QWORD*)&v51 = &off_140B5E640;
		DWORD2(v52) = v32;
		v70 = v51;
		v27 = (void*)v52;
		v71 = v52;
		sub_1400035B0();
		*(_QWORD*)&v51 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v27);
		if (!*((_DWORD*)a1 + 52) && !*((_DWORD*)a1 + 53))
		{
			v28 = a1[15];
			if (v28)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
				a1[15] = 0i64;
			}
		}
		sub_14003D880(&v48);
		return 0i64;
	}
	sub_14003D880(&v48);
	*((_DWORD*)a1 + 52) |= v11;
	*((_DWORD*)a1 + 53) |= v12;
	if (v11)
	{
		++* (_DWORD*)(a1[24] + 24 * v5);
		v29 = a1[24] + 24 * v5;
		*(_QWORD*)(v29 + 8) = v49;
		*(_QWORD*)(v29 + 16) = v50;
	}
	v30 = (volatile signed __int32*)(48i64 * *((int*)a1 + 13) + a1[2] + 724);
	if ((_DWORD)v33)
	{
		_InterlockedIncrement(v30 + 6);
		_InterlockedExchangeAdd(v30 + 7, *((_DWORD*)a1 + 54));
	}
	if (v13)
	{
		_InterlockedIncrement(v30 + 8);
		_InterlockedExchangeAdd(v30 + 9, *((_DWORD*)a1 + 54));
	}
	*v47 = v50;
	return v49;
}
// 1402A1F88: variable 'v10' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE7EB0: using guessed type int dword_140AE7EB0[];
// 140AE8120: using guessed type int dword_140AE8120[28];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A490: using guessed type _DWORD dword_140C8A490;
// 140C8A494: using guessed type _DWORD dword_140C8A494;
// 140C8A498: using guessed type _DWORD dword_140C8A498;
// 140C8A4A0: using guessed type _DWORD dword_140C8A4A0;
// 1402A1A10: using guessed type int var_C0[4];

