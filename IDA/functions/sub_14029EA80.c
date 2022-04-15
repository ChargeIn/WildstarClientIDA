//----- (000000014029EA80) ----------------------------------------------------
__int64 __fastcall sub_14029EA80(__int64 a1, int a2, unsigned int a3, int a4)
{
	int v4; // eax
	unsigned int v5; // r14d
	int v7; // r15d
	int v9; // r13d
	int v10; // ecx
	int v11; // ebx
	int v12; // ebx
	int v13; // ebx
	int v14; // ebx
	__int64 v15; // rax
	unsigned int v16; // esi
	__int64 v17; // rax
	int v18; // eax
	void* v19; // xmm1_8
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rcx
	int v23; // r15d
	int v24; // r15d
	int v25; // r15d
	void* v26; // xmm1_8
	__int64 v27; // rcx
	volatile signed __int32* v28; // rdx
	char v29; // [rsp+50h] [rbp-B0h]
	__int64 v30; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v31; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v32; // [rsp+68h] [rbp-98h] BYREF
	__int64(__fastcall * *v33)(); // [rsp+70h] [rbp-90h] BYREF
	__int128 v34; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v35)(); // [rsp+88h] [rbp-78h] BYREF
	__int128 v36; // [rsp+90h] [rbp-70h]
	__int64(__fastcall * *TlsValue)(); // [rsp+A0h] [rbp-60h] BYREF
	__int128 v38; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v39)(); // [rsp+B8h] [rbp-48h] BYREF
	__int128 v40; // [rsp+C0h] [rbp-40h]
	__int128 v41; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v42; // [rsp+E0h] [rbp-20h]
	__int128 v43; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v44; // [rsp+100h] [rbp+0h]
	__int64 v45; // [rsp+110h] [rbp+10h] BYREF
	__int64 v46; // [rsp+118h] [rbp+18h] BYREF
	__int64 v47; // [rsp+120h] [rbp+20h] BYREF
	__int64 v48; // [rsp+128h] [rbp+28h] BYREF
	__int64(__fastcall * *v49)(); // [rsp+130h] [rbp+30h] BYREF
	__int128 v50; // [rsp+138h] [rbp+38h]
	__int64(__fastcall * *v51)(); // [rsp+150h] [rbp+50h] BYREF
	__int128 v52; // [rsp+158h] [rbp+58h]
	__int64(__fastcall * *v53)(); // [rsp+170h] [rbp+70h] BYREF
	__int128 v54; // [rsp+178h] [rbp+78h]
	__int64(__fastcall * *v55)(); // [rsp+190h] [rbp+90h] BYREF
	__int128 v56; // [rsp+198h] [rbp+98h]
	__int64 v57; // [rsp+1B0h] [rbp+B0h] BYREF
	__int128 v58; // [rsp+1C0h] [rbp+C0h]
	__int128 v59; // [rsp+1D0h] [rbp+D0h]
	__int128 v60; // [rsp+1E0h] [rbp+E0h]
	__int128 v61; // [rsp+1F0h] [rbp+F0h]
	unsigned int v62; // [rsp+200h] [rbp+100h] BYREF
	__int64 v63; // [rsp+204h] [rbp+104h]
	__int64 v64; // [rsp+20Ch] [rbp+10Ch]
	int v65; // [rsp+214h] [rbp+114h]
	int v66; // [rsp+218h] [rbp+118h] BYREF
	__int64 v67; // [rsp+21Ch] [rbp+11Ch]
	int v68; // [rsp+224h] [rbp+124h]
	int v69; // [rsp+228h] [rbp+128h]
	int v70; // [rsp+22Ch] [rbp+12Ch]

	v4 = a4;
	v5 = a3;
	LODWORD(v31) = a2;
	v29 = a4;
	v7 = a4 & 3;
	if ((a4 & 3) == 0)
		return 0i64;
	v9 = a4 & 1;
	if ((a4 & 1) != 0)
	{
		v10 = *(_DWORD*)(a1 + 28) - 1;
		if (!v10)
		{
			v39 = &off_140B5E648;
			*(_QWORD*)&v40 = 0i64;
			*((_QWORD*)&v40 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v39);
			v49 = v39;
			v31 = 0x141DE54E0i64;
			v50 = v40;
			v12 = sub_1401971E0(&dword_140C8A458, 14, &v31, &v49);
			v39 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v40 + 1));
			if (v12)
			{
				DebugBreak();
				return 0i64;
			}
			return 0i64;
		}
		if (v10 == 2)
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v38 = 0i64;
			*((_QWORD*)&v38 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v53 = TlsValue;
			v32 = 0x141DE5650i64;
			v54 = v38;
			v11 = sub_1401971E0(&dword_140C8A45C, 14, &v32, &v53);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v38 + 1));
			if (v11)
			{
				DebugBreak();
				return 0i64;
			}
			return 0i64;
		}
		v4 = a4;
	}
	if (!a3)
		v5 = *(_DWORD*)(a1 + 24);
	LODWORD(v30) = v5 + a2;
	if (v5 + a2 > *(_DWORD*)(a1 + 24))
	{
		*(_QWORD*)&v34 = 0i64;
		v33 = &off_140B5E648;
		*((_QWORD*)&v34 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v33);
		v55 = v33;
		v48 = 0x141DE55F0i64;
		v56 = v34;
		v13 = sub_1401971E0(&dword_140C8A460, 14, &v48, &v55);
		v33 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v34 + 1));
		if (v13)
			DebugBreak();
		return 0i64;
	}
	if (*(_QWORD*)(a1 + 40))
	{
		*(_QWORD*)&v36 = 0i64;
		v35 = &off_140B5E648;
		*((_QWORD*)&v36 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v35);
		v51 = v35;
		v45 = 0x141DE5580i64;
		v52 = v36;
		v14 = sub_1401971E0(&dword_140C8A464, 14, &v45, &v51);
		v35 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v36 + 1));
		if (v14)
			DebugBreak();
		return 0i64;
	}
	else
	{
		*(_DWORD*)(a1 + 60) = v4;
		v15 = *(int*)(a1 + 28);
		*(_DWORD*)(a1 + 64) = 1;
		*(_DWORD*)(a1 + 52) = a2;
		*(_DWORD*)(a1 + 56) = v5;
		v16 = 3;
		if (dword_140AE7E90[v15])
		{
			v22 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 40) = v22;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
		}
		else
		{
			v17 = *(_QWORD*)(a1 + 16);
			v62 = v5;
			v63 = 3i64;
			v64 = 196608i64;
			v65 = 0;
			v18 = (*(__int64(__fastcall**)(_QWORD, unsigned int*, _QWORD, __int64))(**(_QWORD**)(v17 + 6336) + 24i64))(
				*(_QWORD*)(v17 + 6336),
				&v62,
				0i64,
				a1 + 40);
			LODWORD(v32) = v18;
			if (v18 < 0)
			{
				v46 = 0x141DE5550i64;
				sub_1401A3130(14, 2, &v46, (unsigned int)v18);
				*((_QWORD*)&v43 + 1) = L"Result";
				*(_QWORD*)&v43 = &off_140B5E648;
				*(_QWORD*)&v44 = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v43);
				*(_QWORD*)&v43 = &off_140B5E640;
				DWORD2(v44) = v32;
				v60 = v43;
				v19 = (void*)v44;
				v61 = v44;
				sub_1400035B0();
				*(_QWORD*)&v43 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, v19);
				return 0i64;
			}
			if (v9)
			{
				sub_14003D8F0(&v47, *(_QWORD*)(a1 + 16) + 6368i64);
				v20 = *(_QWORD*)(a1 + 40);
				v21 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64);
				if (*(_DWORD*)(a1 + 56) == *(_DWORD*)(a1 + 24))
				{
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v21 + 376i64))(v21, v20, *(_QWORD*)(a1 + 32));
				}
				else
				{
					v67 = 0i64;
					v69 = 1;
					v66 = v31;
					v70 = 1;
					v68 = v30;
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _DWORD, int*))(*(_QWORD*)v21 + 368i64))(
						v21,
						v20,
						0i64,
						0i64,
						0,
						0,
						*(_QWORD*)(a1 + 32),
						0,
						&v66);
				}
				sub_14003D880(&v47);
			}
		}
		if (*(_DWORD*)(a1 + 28) == 3)
		{
			v16 = ((_DWORD)v31 != 0) + 4;
		}
		else
		{
			v23 = v7 - 1;
			if (v23)
			{
				v24 = v23 - 1;
				if (v24)
				{
					if (v24 != 1)
						v16 = v30;
				}
				else
				{
					v16 = 2;
				}
			}
			else
			{
				v16 = 1;
			}
		}
		sub_14003D8F0(&v30, *(_QWORD*)(a1 + 16) + 6368i64);
		v25 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64)
			+ 112i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
				*(_QWORD*)(a1 + 40),
				0i64,
				v16,
				0,
				&v57);
		if (v25 >= 0)
		{
			sub_14003D880(&v30);
			v28 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 28) + *(_QWORD*)(a1 + 16) + 340i64);
			if (v9)
			{
				_InterlockedIncrement(v28 + 6);
				_InterlockedExchangeAdd(v28 + 7, v5);
			}
			if ((v29 & 2) != 0)
			{
				_InterlockedIncrement(v28 + 8);
				_InterlockedExchangeAdd(v28 + 9, v5);
			}
			return v57;
		}
		else
		{
			*(_QWORD*)&v41 = &off_140B5E648;
			*((_QWORD*)&v41 + 1) = L"Result";
			*(_QWORD*)&v42 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v41);
			*(_QWORD*)&v41 = &off_140B5E640;
			DWORD2(v42) = v25;
			v26 = (void*)v42;
			v58 = v41;
			v59 = v42;
			sub_1400035B0();
			*(_QWORD*)&v41 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v26);
			v27 = *(_QWORD*)(a1 + 40);
			if (v27)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 16i64))(v27);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			sub_14003D880(&v30);
			return 0i64;
		}
	}
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140AE7E90: using guessed type _DWORD dword_140AE7E90[4];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A458: using guessed type _DWORD dword_140C8A458;
// 140C8A45C: using guessed type _DWORD dword_140C8A45C;
// 140C8A460: using guessed type _DWORD dword_140C8A460;
// 140C8A464: using guessed type _DWORD dword_140C8A464;

