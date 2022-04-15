//----- (0000000140293280) ----------------------------------------------------
__int64 __fastcall sub_140293280(__int64* a1, int a2, unsigned int a3, _DWORD* a4, int a5)
{
	__int64 v5; // rax
	__int64 v6; // r12
	unsigned __int64 v7; // rsi
	int v10; // edi
	int v11; // r13d
	int v12; // ebx
	int v13; // edx
	__int64 v14; // rbx
	int v15; // ecx
	__int64 v16; // r14
	__int64 v17; // r9
	__int64 v18; // rax
	int v19; // ecx
	__int64 v20; // r12
	__int64 v21; // rcx
	__int64 v22; // rdx
	int v23; // r12d
	void* v24; // xmm1_8
	_QWORD* v25; // rdi
	__int64 v26; // rbx
	__int64 v27; // rcx
	int v28; // eax
	__int64 v29; // rdx
	volatile signed __int32* v30; // rdx
	int v31; // r15d
	void* v32; // xmm1_8
	int v33; // ebx
	__int64 v34; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v35; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v36; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v37; // [rsp+58h] [rbp-A8h] BYREF
	int v38; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v39)(); // [rsp+68h] [rbp-98h] BYREF
	__int64 v40; // [rsp+70h] [rbp-90h]
	LPVOID Value; // [rsp+78h] [rbp-88h]
	__int64 v42; // [rsp+80h] [rbp-80h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+88h] [rbp-78h] BYREF
	__int128 v44; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *v45)(); // [rsp+A0h] [rbp-60h] BYREF
	const wchar_t* v46; // [rsp+A8h] [rbp-58h]
	LPVOID v47; // [rsp+B0h] [rbp-50h]
	__int64 v48; // [rsp+B8h] [rbp-48h]
	__int64(__fastcall * *v49)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v50; // [rsp+C8h] [rbp-38h]
	__int64 v51; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v52; // [rsp+E0h] [rbp-20h]
	_DWORD* v53; // [rsp+E8h] [rbp-18h]
	__int128 v54; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v55; // [rsp+100h] [rbp+0h]
	__int128 v56; // [rsp+110h] [rbp+10h] BYREF
	__int128 v57; // [rsp+120h] [rbp+20h]
	__int64 v58; // [rsp+130h] [rbp+30h] BYREF
	__int64 v59[4]; // [rsp+140h] [rbp+40h] BYREF
	__int64(__fastcall * *v60)(); // [rsp+160h] [rbp+60h] BYREF
	__int128 v61; // [rsp+168h] [rbp+68h]
	__int64(__fastcall * *v62)(); // [rsp+180h] [rbp+80h] BYREF
	__int128 v63; // [rsp+188h] [rbp+88h]
	__int64 v64[4]; // [rsp+1A0h] [rbp+A0h] BYREF
	int v65[4]; // [rsp+1C0h] [rbp+C0h] BYREF
	__int128 v66; // [rsp+1D0h] [rbp+D0h]
	__int128 v67; // [rsp+1E0h] [rbp+E0h]
	__int128 v68; // [rsp+1F0h] [rbp+F0h]
	__int128 v69; // [rsp+200h] [rbp+100h]
	int v70; // [rsp+210h] [rbp+110h] BYREF
	char v71; // [rsp+218h] [rbp+118h]
	unsigned int v72; // [rsp+228h] [rbp+128h]
	unsigned int v73; // [rsp+22Ch] [rbp+12Ch]

	v5 = *a1;
	v6 = a2;
	v53 = a4;
	v7 = a3;
	v65[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 32))(a1, v65);
	if (!a1[15])
		return 0i64;
	v10 = 0;
	if ((a5 & 3) == 0)
		return 0i64;
	LODWORD(v37) = a5 & 1;
	v11 = 0;
	if ((a5 & 1) != 0)
	{
		if (*((_DWORD*)a1 + 13) == 1)
		{
			*(_QWORD*)&v44 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v44 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v60 = TlsValue;
			v37 = 0x141DE4AA0i64;
			v61 = v44;
			v12 = sub_1401971E0(&dword_140C8A43C, 14, &v37, &v60);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v44 + 1));
			if (v12)
			{
				DebugBreak();
				return 0i64;
			}
			return 0i64;
		}
		v11 = 1 << v7;
	}
	else if ((a5 & 4) != 0 && (*(_DWORD*)(*(_QWORD*)(a1[2] + 7032) + 4i64 * *((int*)a1 + 13)) & 0x200) != 0)
	{
		v10 = 0x2000;
	}
	v13 = 0;
	LODWORD(v36) = 0;
	v38 = a5 & 2;
	if ((a5 & 2) != 0)
	{
		if (a1[9])
		{
			v40 = 0i64;
			v39 = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v39);
			v14 = a1[9];
			v59[0] = (__int64)v39;
			v59[1] = v40;
			v45 = &off_140B5E648;
			v59[2] = (__int64)Value;
			v46 = L"FileName";
			v47 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v45);
			v48 = v14;
			v64[1] = (__int64)v46;
			v45 = &off_140B5E638;
			v64[3] = v14;
			v64[0] = (__int64)&off_140B5E638;
			v36 = 0x141DE4A30i64;
			v64[2] = (__int64)v47;
			LODWORD(v14) = sub_1401971E0(&dword_140C8A440, 14, &v36, v64, v59);
			v45 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v47);
			v39 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v14)
				DebugBreak();
			return 0i64;
		}
		v13 = 1 << v7;
		LODWORD(v36) = 1 << v7;
	}
	else
	{
		v10 |= 0x10u;
	}
	v15 = *((_DWORD*)a1 + v6 + 70);
	v16 = v6;
	if (((v11 | v13) & v15) != 0 || ((*((_DWORD*)a1 + v6 + 64) | v15) & v13) != 0)
	{
		*(_QWORD*)&v50 = 0i64;
		v49 = &off_140B5E648;
		*((_QWORD*)&v50 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v49);
		v62 = v49;
		v58 = 0x141DE4F50i64;
		v63 = v50;
		v33 = sub_1401971E0(&dword_140C8A434, 14, &v58, &v62);
		v49 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v50 + 1));
		if (v33)
			DebugBreak();
		return 0i64;
	}
	*((_DWORD*)a1 + 24) = 1;
	if (v11)
	{
		if (a1[2 * v6 + 21] <= v7)
			sub_14028F410(&a1[2 * v6 + 20], (unsigned int)(v7 + 1));
		v17 = 24 * v7;
		v18 = a1[2 * v6 + 20];
		v19 = *(_DWORD*)(v18 + 24 * v7);
		if (v19)
		{
			*(_DWORD*)(v18 + 24 * v7) = v19 + 1;
			*v53 = *(_DWORD*)(v17 + a1[2 * v6 + 20] + 8);
			return *(_QWORD*)(v17 + a1[2 * v6 + 20] + 16);
		}
	}
	if (a1[18])
	{
		if ((unsigned int)v7 >= *((_DWORD*)a1 + 11))
			return 0i64;
		sub_14003D8F0(&v42, a1[2] + 24);
		v20 = 16i64 * (unsigned int)(v6 + 6 * v7);
		if (*(_QWORD*)(v20 + a1[18])
			|| ((*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)a1[15] + 136i64))(a1[15], (unsigned int)v7, &v70),
				(int)D3DXCreateTexture(*(_QWORD*)(a1[2] + 6608), v72, v73, 1i64, 0, v70, 2, v20 + a1[18]) < 0))
		{
		LABEL_44:
			sub_14003D880(&v42);
			return 0i64;
		}
		if ((_DWORD)v37 && (v71 & 1) != 0)
		{
			v21 = a1[15];
			v22 = (unsigned int)dword_140AE7B00[v16];
			v35 = 0i64;
			v34 = 0i64;
			if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)v21 + 144i64))(
				v21,
				v22,
				(unsigned int)v7,
				&v35) < 0
				|| (*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v20 + a1[18]) + 144i64))(
					*(_QWORD*)(v20 + a1[18]),
					0i64,
					&v34) < 0
				|| (*(int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1[2] + 6608) + 256i64))(
					*(_QWORD*)(a1[2] + 6608),
					v35,
					v34) < 0
				&& (int)D3DXLoadSurfaceFromSurface(v34, 0i64, 0i64, v35, 0i64, 0i64, 2, 0) < 0)
			{
				v26 = a1[18];
				v27 = *(_QWORD*)(v26 + v20);
				if (v27)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
					*(_QWORD*)(v26 + v20) = 0i64;
				}
				if (v34)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 16i64))(v34);
				if (v35)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
					sub_14003D880(&v42);
					return 0i64;
				}
				goto LABEL_44;
			}
			if (v34)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 16i64))(v34);
			if (v35)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
		}
		v23 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, _QWORD, int))(**(_QWORD**)(v20 + a1[18]) + 152i64))(
			*(_QWORD*)(v20 + a1[18]),
			0i64,
			&v51,
			0i64,
			v10);
		if (v23 < 0)
		{
			*((_QWORD*)&v56 + 1) = L"Result";
			*(_QWORD*)&v56 = &off_140B5E648;
			*(_QWORD*)&v57 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v56);
			*(_QWORD*)&v56 = &off_140B5E640;
			DWORD2(v57) = v23;
			v24 = (void*)v57;
			v68 = v56;
			v69 = v57;
			sub_1400035B0();
			*(_QWORD*)&v56 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v24);
			v25 = (_QWORD*)(a1[18] + 16 * v7);
			if (*v25)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v25 + 16i64))(*v25);
				*v25 = 0i64;
			}
			goto LABEL_44;
		}
		*(_DWORD*)(a1[18] + 16 * v7 + 8) = a5;
		sub_14003D880(&v42);
	}
	else
	{
		v31 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64*, _QWORD, int))(*(_QWORD*)a1[15] + 152i64))(
			a1[15],
			(unsigned int)dword_140AE7B00[v6],
			(unsigned int)v7,
			&v51,
			0i64,
			v10);
		if (v31 < 0)
		{
			*((_QWORD*)&v54 + 1) = L"Result";
			*(_QWORD*)&v54 = &off_140B5E648;
			*(_QWORD*)&v55 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v54);
			*(_QWORD*)&v54 = &off_140B5E640;
			DWORD2(v55) = v31;
			v32 = (void*)v55;
			v66 = v54;
			v67 = v55;
			sub_1400035B0();
			*(_QWORD*)&v54 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v32);
			return 0i64;
		}
	}
	v28 = v36;
	*((_DWORD*)a1 + v16 + 64) |= v11;
	*((_DWORD*)a1 + v16 + 70) |= v28;
	if (v11)
	{
		++* (_DWORD*)(a1[2 * v16 + 20] + 24 * v7);
		v29 = a1[2 * v16 + 20] + 24 * v7;
		*(_QWORD*)(v29 + 8) = v51;
		*(_QWORD*)(v29 + 16) = v52;
	}
	v30 = (volatile signed __int32*)(48i64 * *((int*)a1 + 13) + a1[2] + 724);
	if ((_DWORD)v37)
	{
		_InterlockedIncrement(v30 + 6);
		_InterlockedExchangeAdd(v30 + 7, *((_DWORD*)a1 + 34));
	}
	if (v38)
	{
		_InterlockedIncrement(v30 + 8);
		_InterlockedExchangeAdd(v30 + 9, *((_DWORD*)a1 + 34));
	}
	*v53 = v51;
	return v52;
}
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C65748: using guessed type __int64 (__fastcall *D3DXCreateTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140C8A434: using guessed type _DWORD dword_140C8A434;
// 140C8A43C: using guessed type _DWORD dword_140C8A43C;
// 140C8A440: using guessed type _DWORD dword_140C8A440;
// 140293280: using guessed type int var_C0[4];

