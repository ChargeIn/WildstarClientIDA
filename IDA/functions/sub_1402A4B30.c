#include "../winhttp.h"

//----- (00000001402A4B30) ----------------------------------------------------
__int64 __fastcall sub_1402A4B30(__int64* a1, unsigned int a2, _DWORD* a3, _DWORD* a4, char a5)
{
	__int64 v5; // rax
	unsigned __int64 v6; // r13
	unsigned int v9; // r14d
	int v10; // edi
	__int64 v11; // rdx
	int v12; // r12d
	__int64 v13; // rbx
	int v14; // ebx
	int v15; // ebx
	int v16; // ecx
	__int64 v17; // r8
	__int64 v18; // rax
	int v19; // ecx
	int v20; // eax
	int v21; // eax
	void* v22; // xmm1_8
	__int64 v23; // rcx
	int v24; // r14d
	void* v25; // xmm1_8
	__int64 v26; // rcx
	__int64 v27; // rcx
	volatile signed __int32* v28; // rdx
	int v29; // ebx
	__int64 v30; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v31; // [rsp+58h] [rbp-A8h] BYREF
	__int64(__fastcall * *v32)(); // [rsp+60h] [rbp-A0h] BYREF
	__int128 v33; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v34)(); // [rsp+78h] [rbp-88h] BYREF
	__int128 v35; // [rsp+80h] [rbp-80h]
	_DWORD* v36; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v37)(); // [rsp+98h] [rbp-68h] BYREF
	__int128 v38; // [rsp+A0h] [rbp-60h]
	__int64 v39; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v40; // [rsp+B8h] [rbp-48h]
	__int64(__fastcall * *v41)(); // [rsp+C0h] [rbp-40h] BYREF
	const wchar_t* v42; // [rsp+C8h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+D0h] [rbp-30h]
	__int64 v44; // [rsp+D8h] [rbp-28h]
	__int64(__fastcall * *TlsValue)(); // [rsp+E0h] [rbp-20h] BYREF
	__int64 v46; // [rsp+E8h] [rbp-18h]
	LPVOID Value; // [rsp+F0h] [rbp-10h]
	__int128 v48; // [rsp+F8h] [rbp-8h] BYREF
	__int128 v49; // [rsp+108h] [rbp+8h]
	__int128 v50; // [rsp+118h] [rbp+18h] BYREF
	__int128 v51; // [rsp+128h] [rbp+28h]
	__int64 v52; // [rsp+138h] [rbp+38h] BYREF
	__int64 v53; // [rsp+140h] [rbp+40h] BYREF
	__int64 v54; // [rsp+148h] [rbp+48h] BYREF
	_DWORD* v55; // [rsp+150h] [rbp+50h]
	__int64 v56; // [rsp+158h] [rbp+58h] BYREF
	__int64 v57; // [rsp+160h] [rbp+60h] BYREF
	__int64(__fastcall * *v58)(); // [rsp+170h] [rbp+70h] BYREF
	__int128 v59; // [rsp+178h] [rbp+78h]
	__int64 v60[4]; // [rsp+190h] [rbp+90h] BYREF
	__int64(__fastcall * *v61)(); // [rsp+1B0h] [rbp+B0h] BYREF
	__int128 v62; // [rsp+1B8h] [rbp+B8h]
	__int64(__fastcall * *v63)(); // [rsp+1D0h] [rbp+D0h] BYREF
	__int128 v64; // [rsp+1D8h] [rbp+D8h]
	__int64 v65[4]; // [rsp+1F0h] [rbp+F0h] BYREF
	int v66[4]; // [rsp+210h] [rbp+110h] BYREF
	__int128 v67; // [rsp+220h] [rbp+120h]
	__int128 v68; // [rsp+230h] [rbp+130h]
	__int128 v69; // [rsp+240h] [rbp+140h]
	__int128 v70; // [rsp+250h] [rbp+150h]
	int v71[5]; // [rsp+260h] [rbp+160h] BYREF
	__int64 v72; // [rsp+274h] [rbp+174h]
	__int64 v73; // [rsp+27Ch] [rbp+17Ch]

	v5 = *a1;
	v6 = a2;
	v55 = a4;
	v36 = a3;
	v66[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 32))(a1, v66);
	if (!a1[14])
		return 0i64;
	if ((a5 & 3) == 0)
		return 0i64;
	v9 = 1;
	v10 = 0;
	v11 = (unsigned int)(1 << v6);
	LODWORD(v31) = a5 & 1;
	if ((a5 & 1) != 0)
	{
		if (*((_DWORD*)a1 + 13) == 1)
		{
			*(_QWORD*)&v33 = 0i64;
			v32 = &off_140B5E648;
			*((_QWORD*)&v33 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v32);
			v61 = v32;
			v52 = 0x141DE5FB0i64;
			v62 = v33;
			v15 = sub_1401971E0(&dword_140C8A4C8, 14, &v52, &v61);
			v32 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v33 + 1));
			if (v15)
				DebugBreak();
		}
		else
		{
			if (*((_DWORD*)a1 + 13) != 4)
			{
				v10 = 1 << v6;
				goto LABEL_9;
			}
			*(_QWORD*)&v38 = 0i64;
			v37 = &off_140B5E648;
			*((_QWORD*)&v38 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v37);
			v63 = v37;
			v31 = 0x141DE5F40i64;
			v64 = v38;
			v14 = sub_1401971E0(&dword_140C8A4CC, 14, &v31, &v63);
			v37 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v38 + 1));
			if (v14)
			{
				DebugBreak();
				return 0i64;
			}
		}
		return 0i64;
	}
LABEL_9:
	v12 = 0;
	if ((a5 & 2) != 0)
	{
		if (a1[9])
		{
			v46 = 0i64;
			TlsValue = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v13 = a1[9];
			v60[0] = (__int64)TlsValue;
			v60[1] = v46;
			v41 = &off_140B5E648;
			v60[2] = (__int64)Value;
			v42 = L"FileName";
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v41);
			v44 = v13;
			v65[1] = (__int64)v42;
			v41 = &off_140B5E638;
			v65[3] = v13;
			v65[0] = (__int64)&off_140B5E638;
			v53 = 0x141DE5ED0i64;
			v65[2] = (__int64)lpTlsValue;
			LODWORD(v13) = sub_1401971E0(&dword_140C8A4D0, 14, &v53, v65, v60);
			v41 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v13)
			{
				DebugBreak();
				return 0i64;
			}
			return 0i64;
		}
		v12 = 1 << v6;
	}
	v16 = *((_DWORD*)a1 + 53);
	if (((v10 | v12) & v16) != 0 || ((*((_DWORD*)a1 + 52) | v16) & v12) != 0)
	{
		*(_QWORD*)&v35 = 0i64;
		v34 = &off_140B5E648;
		*((_QWORD*)&v35 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v34);
		v58 = v34;
		v56 = 0x141DE63C0i64;
		v59 = v35;
		v29 = sub_1401971E0(&dword_140C8A4C4, 14, &v56, &v58);
		v34 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v35 + 1));
		if (v29)
			DebugBreak();
		return 0i64;
	}
	*((_DWORD*)a1 + 46) = 1;
	if (v10)
	{
		if (a1[25] <= v6)
			sub_14028F410(a1 + 24, (unsigned int)(v6 + 1));
		v17 = 24 * v6;
		v18 = a1[24];
		v19 = *(_DWORD*)(v18 + 24 * v6);
		if (v19)
		{
			*(_DWORD*)(v18 + 24 * v6) = v19 + 1;
			*v36 = *(_DWORD*)(v17 + a1[24] + 16);
			return *(_QWORD*)(v17 + a1[24] + 8);
		}
	}
	if (!a1[15])
	{
		if (dword_140AE7EB0[*((int*)a1 + 13)])
		{
			v23 = a1[14];
			a1[15] = v23;
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v23 + 8i64))(v23, v11);
		}
		else
		{
			v20 = *((_DWORD*)a1 + 7);
			v72 = 3i64;
			v73 = 196608i64;
			v71[0] = v20;
			v71[1] = *((_DWORD*)a1 + 8);
			v71[2] = *((_DWORD*)a1 + 9);
			v71[3] = *((_DWORD*)a1 + 11);
			v71[4] = dword_140AE8120[*((int*)a1 + 12)];
			v21 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64*))(**(_QWORD**)(a1[2] + 6336) + 48i64))(
				*(_QWORD*)(a1[2] + 6336),
				v71,
				0i64,
				a1 + 15);
			LODWORD(v30) = v21;
			if (v21 < 0)
			{
				v57 = 0x141DE5D08i64;
				sub_1401A3130(14, 2, &v57, (unsigned int)v21);
				*((_QWORD*)&v50 + 1) = L"Result";
				*(_QWORD*)&v50 = &off_140B5E648;
				*(_QWORD*)&v51 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v50);
				*(_QWORD*)&v50 = &off_140B5E640;
				DWORD2(v51) = v30;
				v67 = v50;
				v22 = (void*)v51;
				v68 = v51;
				sub_1400035B0();
				*(_QWORD*)&v50 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, v22);
				return 0i64;
			}
		}
	}
	if (v10 && a1[15] != a1[14])
	{
		sub_14003D8F0(&v54, a1[2] + 6368);
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64, _DWORD, _QWORD))(**(_QWORD**)(a1[2] + 6352) + 368i64))(
			*(_QWORD*)(a1[2] + 6352),
			a1[15],
			(unsigned int)v6,
			0i64,
			0,
			0,
			a1[14],
			v6,
			0i64);
		sub_14003D880(&v54);
	}
	if (*((_DWORD*)a1 + 13) == 4)
	{
		v9 = 4;
	}
	else if (v10)
	{
		if (v12)
			v9 = 3;
	}
	else
	{
		v9 = 2;
	}
	sub_14003D8F0(&v30, a1[2] + 6368);
	v24 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, __int64*))(**(_QWORD**)(a1[2] + 6352)
		+ 112i64))(
			*(_QWORD*)(a1[2] + 6352),
			a1[15],
			(unsigned int)v6,
			v9,
			0,
			&v39);
	if (v24 < 0)
	{
		*(_QWORD*)&v48 = &off_140B5E648;
		*((_QWORD*)&v48 + 1) = L"Result";
		*(_QWORD*)&v49 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v48);
		*(_QWORD*)&v48 = &off_140B5E640;
		DWORD2(v49) = v24;
		v25 = (void*)v49;
		v69 = v48;
		v70 = v49;
		sub_1400035B0();
		*(_QWORD*)&v48 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v25);
		if (!*((_DWORD*)a1 + 52) && !*((_DWORD*)a1 + 53))
		{
			v26 = a1[15];
			if (v26)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
				a1[15] = 0i64;
			}
		}
		sub_14003D880(&v30);
		return 0i64;
	}
	sub_14003D880(&v30);
	*((_DWORD*)a1 + 52) |= v10;
	*((_DWORD*)a1 + 53) |= v12;
	if (v10)
	{
		++* (_DWORD*)(a1[24] + 24 * v6);
		v27 = a1[24] + 24 * v6;
		*(_QWORD*)(v27 + 8) = v39;
		*(_QWORD*)(v27 + 16) = v40;
	}
	v28 = (volatile signed __int32*)(48i64 * *((int*)a1 + 13) + a1[2] + 724);
	if ((_DWORD)v31)
	{
		_InterlockedIncrement(v28 + 6);
		_InterlockedExchangeAdd(v28 + 7, *((_DWORD*)a1 + 54));
	}
	if ((a5 & 2) != 0)
	{
		_InterlockedIncrement(v28 + 8);
		_InterlockedExchangeAdd(v28 + 9, *((_DWORD*)a1 + 54));
	}
	*v36 = v40;
	*v55 = HIDWORD(v40);
	return v39;
}
// 1402A50CA: variable 'v11' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE7EB0: using guessed type int dword_140AE7EB0[];
// 140AE8120: using guessed type int dword_140AE8120[28];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A4C4: using guessed type _DWORD dword_140C8A4C4;
// 140C8A4C8: using guessed type _DWORD dword_140C8A4C8;
// 140C8A4CC: using guessed type _DWORD dword_140C8A4CC;
// 140C8A4D0: using guessed type _DWORD dword_140C8A4D0;
// 1402A4B30: using guessed type int var_C0[4];

