#include "../winhttp.h"

//----- (000000014028D530) ----------------------------------------------------
__int64 __fastcall sub_14028D530(__int64* a1, unsigned int a2, _DWORD* a3, int a4)
{
	__int64 v4; // rax
	unsigned __int64 v5; // rdi
	int v9; // r14d
	int v10; // r15d
	int v11; // ebx
	int v12; // r13d
	__int64 v13; // rbx
	int v14; // ecx
	__int64 v15; // r8
	__int64 v16; // rax
	int v17; // ecx
	__int64 v18; // rsi
	__int64 v19; // rcx
	int v20; // r14d
	void* v21; // xmm1_8
	__int64 v22; // rbx
	__int64 v23; // rcx
	__int64 v24; // rbx
	__int64 v25; // rcx
	__int64 v26; // rcx
	volatile signed __int32* v27; // rdx
	int v28; // esi
	void* v29; // xmm1_8
	int v30; // ebx
	__int64 v31; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v32; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v33; // [rsp+50h] [rbp-B0h] BYREF
	int v34; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v35)(); // [rsp+60h] [rbp-A0h] BYREF
	__int64 v36; // [rsp+68h] [rbp-98h]
	LPVOID Value; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *TlsValue)(); // [rsp+78h] [rbp-88h] BYREF
	__int128 v39; // [rsp+80h] [rbp-80h]
	__int64 v40; // [rsp+90h] [rbp-70h] BYREF
	__int64 v41; // [rsp+98h] [rbp-68h] BYREF
	__int64 v42; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v43)(); // [rsp+A8h] [rbp-58h] BYREF
	__int128 v44; // [rsp+B0h] [rbp-50h]
	__int64(__fastcall * *v45)(); // [rsp+C0h] [rbp-40h] BYREF
	const wchar_t* v46; // [rsp+C8h] [rbp-38h]
	LPVOID v47; // [rsp+D0h] [rbp-30h]
	__int64 v48; // [rsp+D8h] [rbp-28h]
	_DWORD* v49; // [rsp+E0h] [rbp-20h]
	__int128 v50; // [rsp+E8h] [rbp-18h] BYREF
	__int128 v51; // [rsp+F8h] [rbp-8h]
	__int128 v52; // [rsp+108h] [rbp+8h] BYREF
	__int128 v53; // [rsp+118h] [rbp+18h]
	__int64 v54; // [rsp+128h] [rbp+28h] BYREF
	__int64 v55; // [rsp+130h] [rbp+30h] BYREF
	__int64(__fastcall * *v56)(); // [rsp+140h] [rbp+40h] BYREF
	__int128 v57; // [rsp+148h] [rbp+48h]
	__int64(__fastcall * *v58)(); // [rsp+160h] [rbp+60h] BYREF
	__int128 v59; // [rsp+168h] [rbp+68h]
	__int64 v60[4]; // [rsp+180h] [rbp+80h] BYREF
	__int64 v61[4]; // [rsp+1A0h] [rbp+A0h] BYREF
	int v62[4]; // [rsp+1C0h] [rbp+C0h] BYREF
	__int128 v63; // [rsp+1D0h] [rbp+D0h]
	__int128 v64; // [rsp+1E0h] [rbp+E0h]
	__int128 v65; // [rsp+1F0h] [rbp+F0h]
	__int128 v66; // [rsp+200h] [rbp+100h]
	int v67; // [rsp+210h] [rbp+110h] BYREF
	char v68; // [rsp+218h] [rbp+118h]
	unsigned int v69; // [rsp+228h] [rbp+128h]
	unsigned int v70; // [rsp+22Ch] [rbp+12Ch]

	v4 = *a1;
	v5 = a2;
	v49 = a3;
	v62[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v4 + 32))(a1, v62);
	if (!a1[15])
		return 0i64;
	v9 = 0;
	if ((a4 & 3) == 0)
		return 0i64;
	LODWORD(v33) = a4 & 1;
	v10 = 0;
	if ((a4 & 1) != 0)
	{
		if (*((_DWORD*)a1 + 13) == 1)
		{
			*(_QWORD*)&v39 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v39 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v56 = TlsValue;
			v33 = 0x141DE4170i64;
			v57 = v39;
			v11 = sub_1401971E0(&dword_140C8A3E4, 14, &v33, &v56);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v39 + 1));
			if (v11)
				DebugBreak();
			return 0i64;
		}
		v10 = 1 << v5;
	}
	else if ((a4 & 4) != 0 && (*(_DWORD*)(*(_QWORD*)(a1[2] + 7032) + 4i64 * *((int*)a1 + 13)) & 0x200) != 0)
	{
		v9 = 0x2000;
	}
	v12 = 0;
	v34 = a4 & 2;
	if ((a4 & 2) != 0)
	{
		if (a1[9])
		{
			v36 = 0i64;
			v35 = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v35);
			v13 = a1[9];
			v60[0] = (__int64)v35;
			v60[1] = v36;
			v45 = &off_140B5E648;
			v60[2] = (__int64)Value;
			v46 = L"FileName";
			v47 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v45);
			v48 = v13;
			v61[1] = (__int64)v46;
			v45 = &off_140B5E638;
			v61[3] = v13;
			v61[0] = (__int64)&off_140B5E638;
			v54 = 0x141DE4100i64;
			v61[2] = (__int64)v47;
			LODWORD(v13) = sub_1401971E0(&dword_140C8A3E8, 14, &v54, v61, v60);
			v45 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v47);
			v35 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, Value);
			if ((_DWORD)v13)
			{
				DebugBreak();
				return 0i64;
			}
			return 0i64;
		}
		v12 = 1 << v5;
	}
	else
	{
		v9 |= 0x10u;
	}
	v14 = *((_DWORD*)a1 + 45);
	if (((v10 | v12) & v14) != 0 || ((*((_DWORD*)a1 + 44) | v14) & v12) != 0)
	{
		*(_QWORD*)&v44 = 0i64;
		v43 = &off_140B5E648;
		*((_QWORD*)&v44 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v43);
		v58 = v43;
		v55 = 0x141DE4080i64;
		v59 = v44;
		v30 = sub_1401971E0(&dword_140C8A3DC, 14, &v55, &v58);
		v43 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v44 + 1));
		if (v30)
			DebugBreak();
		return 0i64;
	}
	*((_DWORD*)a1 + 24) = 1;
	if (v10)
	{
		if (a1[21] <= v5)
			sub_14028F410(a1 + 20, (unsigned int)(v5 + 1));
		v15 = 24 * v5;
		v16 = a1[20];
		v17 = *(_DWORD*)(v16 + 24 * v5);
		if (v17)
		{
			*(_DWORD*)(v16 + 24 * v5) = v17 + 1;
			*v49 = *(_DWORD*)(v15 + a1[20] + 8);
			return *(_QWORD*)(v15 + a1[20] + 16);
		}
	}
	if (a1[18])
	{
		if ((unsigned int)v5 >= *((_DWORD*)a1 + 11))
			return 0i64;
		sub_14003D8F0(&v40, a1[2] + 24);
		v18 = 16 * v5;
		if (*(_QWORD*)(16 * v5 + a1[18])
			|| ((*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)a1[15] + 136i64))(a1[15], (unsigned int)v5, &v67),
				(int)D3DXCreateTexture(*(_QWORD*)(a1[2] + 6608), v69, v70, 1i64, 0, v67, 2, v18 + a1[18]) < 0))
		{
		LABEL_44:
			sub_14003D880(&v40);
			return 0i64;
		}
		if ((_DWORD)v33 && (v68 & 1) != 0)
		{
			v19 = a1[15];
			v32 = 0i64;
			v31 = 0i64;
			if ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v19 + 144i64))(v19, (unsigned int)v5, &v32) < 0
				|| (*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v18 + a1[18]) + 144i64))(
					*(_QWORD*)(v18 + a1[18]),
					0i64,
					&v31) < 0
				|| (*(int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1[2] + 6608) + 256i64))(
					*(_QWORD*)(a1[2] + 6608),
					v32,
					v31) < 0
				&& (int)D3DXLoadSurfaceFromSurface(v31, 0i64, 0i64, v32, 0i64, 0i64, 2, 0) < 0)
			{
				v24 = a1[18];
				v25 = *(_QWORD*)(v24 + 16 * v5);
				if (v25)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
					*(_QWORD*)(v24 + 16 * v5) = 0i64;
				}
				if (v31)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				if (v32)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32);
				goto LABEL_44;
			}
			if (v31)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
			if (v32)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32);
		}
		v20 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, _QWORD, int))(**(_QWORD**)(v18 + a1[18]) + 152i64))(
			*(_QWORD*)(v18 + a1[18]),
			0i64,
			&v41,
			0i64,
			v9);
		if (v20 < 0)
		{
			*((_QWORD*)&v52 + 1) = L"Result";
			*(_QWORD*)&v52 = &off_140B5E648;
			*(_QWORD*)&v53 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v52);
			*(_QWORD*)&v52 = &off_140B5E640;
			DWORD2(v53) = v20;
			v21 = (void*)v53;
			v65 = v52;
			v66 = v53;
			sub_1400035B0();
			*(_QWORD*)&v52 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v21);
			v22 = a1[18];
			v23 = *(_QWORD*)(v22 + 16 * v5);
			if (v23)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
				*(_QWORD*)(v22 + 16 * v5) = 0i64;
			}
			goto LABEL_44;
		}
		*(_DWORD*)(v18 + a1[18] + 8) = a4;
		sub_14003D880(&v40);
	}
	else
	{
		v28 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*, _QWORD, int))(*(_QWORD*)a1[15] + 152i64))(
			a1[15],
			(unsigned int)v5,
			&v41,
			0i64,
			v9);
		if (v28 < 0)
		{
			*((_QWORD*)&v50 + 1) = L"Result";
			*(_QWORD*)&v50 = &off_140B5E648;
			*(_QWORD*)&v51 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v50);
			*(_QWORD*)&v50 = &off_140B5E640;
			DWORD2(v51) = v28;
			v29 = (void*)v51;
			v63 = v50;
			v64 = v51;
			sub_1400035B0();
			*(_QWORD*)&v50 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v29);
			return 0i64;
		}
	}
	*((_DWORD*)a1 + 44) |= v10;
	*((_DWORD*)a1 + 45) |= v12;
	if (v10)
	{
		++* (_DWORD*)(a1[20] + 24 * v5);
		v26 = a1[20] + 24 * v5;
		*(_QWORD*)(v26 + 8) = v41;
		*(_QWORD*)(v26 + 16) = v42;
	}
	v27 = (volatile signed __int32*)(48i64 * *((int*)a1 + 13) + a1[2] + 724);
	if ((_DWORD)v33)
	{
		_InterlockedIncrement(v27 + 6);
		_InterlockedExchangeAdd(v27 + 7, *((_DWORD*)a1 + 34));
	}
	if (v34)
	{
		_InterlockedIncrement(v27 + 8);
		_InterlockedExchangeAdd(v27 + 9, *((_DWORD*)a1 + 34));
	}
	*v49 = v41;
	return v42;
}
// 140C65748: invalid function type has been ignored
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65710: using guessed type __int64 (__fastcall *D3DXLoadSurfaceFromSurface)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C65748: using guessed type __int64 (__fastcall *D3DXCreateTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140C8A3DC: using guessed type _DWORD dword_140C8A3DC;
// 140C8A3E4: using guessed type _DWORD dword_140C8A3E4;
// 140C8A3E8: using guessed type _DWORD dword_140C8A3E8;
// 14028D530: using guessed type int var_B0[4];

