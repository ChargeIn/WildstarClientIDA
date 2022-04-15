#include "../winhttp.h"

//----- (0000000140290600) ----------------------------------------------------
__int64 __fastcall sub_140290600(__int64* a1, unsigned int a2, _DWORD* a3, _DWORD* a4, int a5)
{
	__int64 v5; // rax
	unsigned __int64 v6; // rdi
	int v9; // r14d
	int v10; // r12d
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
	__int64 v31; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v32; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v33; // [rsp+60h] [rbp-A0h] BYREF
	int v34; // [rsp+68h] [rbp-98h]
	__int64 v35; // [rsp+70h] [rbp-90h] BYREF
	__int64 v36; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *TlsValue)(); // [rsp+80h] [rbp-80h] BYREF
	__int128 v38; // [rsp+88h] [rbp-78h]
	_DWORD* v39; // [rsp+98h] [rbp-68h]
	__int64(__fastcall * *v40)(); // [rsp+A0h] [rbp-60h] BYREF
	__int64 v41; // [rsp+A8h] [rbp-58h]
	LPVOID Value; // [rsp+B0h] [rbp-50h]
	__int64 v43; // [rsp+B8h] [rbp-48h] BYREF
	__int64(__fastcall * *v44)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v45; // [rsp+C8h] [rbp-38h]
	__int64(__fastcall * *v46)(); // [rsp+D8h] [rbp-28h] BYREF
	const wchar_t* v47; // [rsp+E0h] [rbp-20h]
	LPVOID v48; // [rsp+E8h] [rbp-18h]
	__int64 v49; // [rsp+F0h] [rbp-10h]
	_DWORD* v50; // [rsp+F8h] [rbp-8h]
	__int128 v51; // [rsp+100h] [rbp+0h] BYREF
	__int128 v52; // [rsp+110h] [rbp+10h]
	__int128 v53; // [rsp+120h] [rbp+20h] BYREF
	__int128 v54; // [rsp+130h] [rbp+30h]
	__int64 v55; // [rsp+140h] [rbp+40h] BYREF
	__int64 v56; // [rsp+148h] [rbp+48h] BYREF
	__int64(__fastcall * *v57)(); // [rsp+150h] [rbp+50h] BYREF
	__int128 v58; // [rsp+158h] [rbp+58h]
	__int64(__fastcall * *v59)(); // [rsp+170h] [rbp+70h] BYREF
	__int128 v60; // [rsp+178h] [rbp+78h]
	__int64 v61[4]; // [rsp+190h] [rbp+90h] BYREF
	__int64 v62[4]; // [rsp+1B0h] [rbp+B0h] BYREF
	int v63[4]; // [rsp+1D0h] [rbp+D0h] BYREF
	__int128 v64; // [rsp+1E0h] [rbp+E0h]
	__int128 v65; // [rsp+1F0h] [rbp+F0h]
	__int128 v66; // [rsp+200h] [rbp+100h]
	__int128 v67; // [rsp+210h] [rbp+110h]
	int v68[8]; // [rsp+220h] [rbp+120h] BYREF

	v5 = *a1;
	v6 = a2;
	v50 = a4;
	v39 = a3;
	v63[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v5 + 32))(a1, v63);
	if (!a1[13])
		return 0i64;
	v9 = 0;
	if ((a5 & 3) == 0)
		return 0i64;
	LODWORD(v32) = a5 & 1;
	v10 = 0;
	if ((a5 & 1) != 0)
	{
		if (*((_DWORD*)a1 + 13) == 1)
		{
			*(_QWORD*)&v38 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v38 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v57 = TlsValue;
			v32 = 0x141DE4870i64;
			v58 = v38;
			v11 = sub_1401971E0(&dword_140C8A404, 14, &v32, &v57);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v38 + 1));
			if (v11)
				DebugBreak();
			return 0i64;
		}
		v10 = 1 << v6;
	}
	else if ((a5 & 4) != 0 && (*(_DWORD*)(*(_QWORD*)(a1[2] + 7032) + 4i64 * *((int*)a1 + 13)) & 0x200) != 0)
	{
		v9 = 0x2000;
	}
	v12 = 0;
	v34 = a5 & 2;
	if ((a5 & 2) != 0)
	{
		if (a1[9])
		{
			v41 = 0i64;
			v40 = &off_140B5E648;
			Value = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v40);
			v13 = a1[9];
			v61[0] = (__int64)v40;
			v61[1] = v41;
			v46 = &off_140B5E648;
			v61[2] = (__int64)Value;
			v47 = L"FileName";
			v48 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v46);
			v49 = v13;
			v62[1] = (__int64)v47;
			v46 = &off_140B5E638;
			v62[3] = v13;
			v62[0] = (__int64)&off_140B5E638;
			v55 = 0x141DE4800i64;
			v62[2] = (__int64)v48;
			LODWORD(v13) = sub_1401971E0(&dword_140C8A408, 14, &v55, v62, v61);
			v46 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v48);
			v40 = &off_140B5E648;
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
	else
	{
		v9 |= 0x10u;
	}
	v14 = *((_DWORD*)a1 + 41);
	if (((v10 | v12) & v14) != 0 || ((*((_DWORD*)a1 + 40) | v14) & v12) != 0)
	{
		*(_QWORD*)&v45 = 0i64;
		v44 = &off_140B5E648;
		*((_QWORD*)&v45 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v44);
		v59 = v44;
		v56 = 0x141DE4770i64;
		v60 = v45;
		v30 = sub_1401971E0(&dword_140C8A40C, 14, &v56, &v59);
		v44 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v45 + 1));
		if (v30)
			DebugBreak();
		return 0i64;
	}
	*((_DWORD*)a1 + 24) = 1;
	if (v10)
	{
		if (a1[19] <= v6)
			sub_14028F410(a1 + 18, (unsigned int)(v6 + 1));
		v15 = 24 * v6;
		v16 = a1[18];
		v17 = *(_DWORD*)(v16 + 24 * v6);
		if (v17)
		{
			*(_DWORD*)(v16 + 24 * v6) = v17 + 1;
			*v39 = *(_DWORD*)(v15 + a1[18] + 8);
			*v50 = *(_DWORD*)(v15 + a1[18] + 12);
			return *(_QWORD*)(v15 + a1[18] + 16);
		}
	}
	if (a1[17])
	{
		if ((unsigned int)v6 >= *((_DWORD*)a1 + 11))
			return 0i64;
		sub_14003D8F0(&v43, a1[2] + 24);
		v18 = 16 * v6;
		if (*(_QWORD*)(16 * v6 + a1[17])
			|| ((*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)a1[13] + 136i64))(a1[13], (unsigned int)v6, v68),
				(int)D3DXCreateVolumeTexture(
					*(_QWORD*)(a1[2] + 6608),
					(unsigned int)v68[4],
					(unsigned int)v68[5],
					(unsigned int)v68[6],
					1,
					0,
					v68[0],
					2,
					v18 + a1[17]) < 0))
		{
		LABEL_42:
			sub_14003D880(&v43);
			return 0i64;
		}
		if ((_DWORD)v32)
		{
			v19 = a1[13];
			v33 = 0i64;
			v31 = 0i64;
			if ((*(int(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v19 + 144i64))(v19, (unsigned int)v6, &v33) < 0
				|| (*(int(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v18 + a1[17]) + 144i64))(
					*(_QWORD*)(v18 + a1[17]),
					0i64,
					&v31) < 0
				|| (int)D3DXLoadVolumeFromVolume(v31, 0i64, 0i64, v33, 0i64, 0i64, 2, 0) < 0)
			{
				v24 = a1[17];
				v25 = *(_QWORD*)(v24 + 16 * v6);
				if (v25)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
					*(_QWORD*)(v24 + 16 * v6) = 0i64;
				}
				if (v31)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				if (v33)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
				goto LABEL_42;
			}
			if (v31)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
			if (v33)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
		}
		v20 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*, _QWORD, int))(**(_QWORD**)(v18 + a1[17]) + 152i64))(
			*(_QWORD*)(v18 + a1[17]),
			0i64,
			&v35,
			0i64,
			v9);
		if (v20 < 0)
		{
			*((_QWORD*)&v53 + 1) = L"Result";
			*(_QWORD*)&v53 = &off_140B5E648;
			*(_QWORD*)&v54 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v53);
			*(_QWORD*)&v53 = &off_140B5E640;
			DWORD2(v54) = v20;
			v21 = (void*)v54;
			v66 = v53;
			v67 = v54;
			sub_1400035B0();
			*(_QWORD*)&v53 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v21);
			v22 = a1[17];
			v23 = *(_QWORD*)(v22 + 16 * v6);
			if (v23)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
				*(_QWORD*)(v22 + 16 * v6) = 0i64;
			}
			goto LABEL_42;
		}
		*(_DWORD*)(v18 + a1[17] + 8) = a5;
		sub_14003D880(&v43);
	}
	else
	{
		v28 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*, _QWORD, int))(*(_QWORD*)a1[13] + 152i64))(
			a1[13],
			(unsigned int)v6,
			&v35,
			0i64,
			v9);
		if (v28 < 0)
		{
			*((_QWORD*)&v51 + 1) = L"Result";
			*(_QWORD*)&v51 = &off_140B5E648;
			*(_QWORD*)&v52 = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v51);
			*(_QWORD*)&v51 = &off_140B5E640;
			DWORD2(v52) = v28;
			v29 = (void*)v52;
			v64 = v51;
			v65 = v52;
			sub_1400035B0();
			*(_QWORD*)&v51 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, v29);
			return 0i64;
		}
	}
	*((_DWORD*)a1 + 40) |= v10;
	*((_DWORD*)a1 + 41) |= v12;
	if (v10)
	{
		++* (_DWORD*)(a1[18] + 24 * v6);
		v26 = a1[18] + 24 * v6;
		*(_QWORD*)(v26 + 8) = v35;
		*(_QWORD*)(v26 + 16) = v36;
	}
	v27 = (volatile signed __int32*)(48i64 * *((int*)a1 + 13) + a1[2] + 724);
	if ((_DWORD)v32)
	{
		_InterlockedIncrement(v27 + 6);
		_InterlockedExchangeAdd(v27 + 7, *((_DWORD*)a1 + 32));
	}
	if (v34)
	{
		_InterlockedIncrement(v27 + 8);
		_InterlockedExchangeAdd(v27 + 9, *((_DWORD*)a1 + 32));
	}
	*v39 = v35;
	*v50 = HIDWORD(v35);
	return v36;
}
// 140C65768: invalid function type has been ignored
// 140C65720: invalid function type has been ignored
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65720: using guessed type __int64 (__fastcall *D3DXLoadVolumeFromVolume)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C65768: using guessed type __int64 (__fastcall *D3DXCreateVolumeTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140C8A404: using guessed type _DWORD dword_140C8A404;
// 140C8A408: using guessed type _DWORD dword_140C8A408;
// 140C8A40C: using guessed type _DWORD dword_140C8A40C;
// 140290600: using guessed type int var_C0[4];

