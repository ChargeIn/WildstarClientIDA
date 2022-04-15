#include "../winhttp.h"

//----- (0000000140270760) ----------------------------------------------------
void __fastcall sub_140270760(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __m128* a5)
{
	__int64 v7; // rdi
	_DWORD* v9; // r14
	int v10; // ebx
	__int64 v11; // rcx
	int v12; // eax
	void* v13; // rdx
	int v14; // ebx
	int v15; // eax
	__int64 v16; // rax
	__int64 v17; // r8
	int v18; // ebx
	int v19; // eax
	__int64 v20; // rax
	__m128* v21; // r13
	int v22; // r9d
	__int64 v23; // rsi
	int v24; // r9d
	int v25; // r9d
	__m128i v26; // xmm1
	__m128i v27; // xmm1
	int v28; // r9d
	int v29; // r9d
	int v30; // r9d
	unsigned int v31; // edx
	__int32 v32; // r9d
	__int32 v33; // r9d
	__int64 v34; // rax
	__int32 v35; // r9d
	__int64 v36; // r8
	int v37; // ecx
	__int64 v38; // rsi
	int v39; // r9d
	int v40; // r9d
	int v41; // r9d
	int v42; // r9d
	__int64 v43; // rsi
	int v44; // eax
	int v45; // r9d
	int v46; // r9d
	int v47; // r9d
	__int64(__fastcall * *v48)(); // [rsp+20h] [rbp-E0h] BYREF
	__int128 v49; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+38h] [rbp-C8h] BYREF
	__int128 v51; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v52)(); // [rsp+50h] [rbp-B0h] BYREF
	__int128 v53; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v54)(); // [rsp+68h] [rbp-98h] BYREF
	__int128 v55; // [rsp+70h] [rbp-90h]
	__int64 v56; // [rsp+80h] [rbp-80h] BYREF
	__int64 v57; // [rsp+88h] [rbp-78h] BYREF
	__int64 v58; // [rsp+90h] [rbp-70h] BYREF
	__int64(__fastcall * *v59)(); // [rsp+A0h] [rbp-60h] BYREF
	__int128 v60; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v61)(); // [rsp+C0h] [rbp-40h] BYREF
	__int128 v62; // [rsp+C8h] [rbp-38h]
	__int64(__fastcall * *v63)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v64; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v65)(); // [rsp+100h] [rbp+0h] BYREF
	__int128 v66; // [rsp+108h] [rbp+8h]
	__int64 v67; // [rsp+160h] [rbp+60h] BYREF

	v7 = a2;
	if (!a3)
	{
		if (*(_QWORD*)(a1 + 8i64 * a2 + 10048))
		{
			*(_QWORD*)(a1 + 8i64 * a2 + 10048) = 0i64;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 520i64))(*(_QWORD*)(a1 + 6608), a2);
		}
		return;
	}
	v9 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	if (!v9[7])
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v51 = 0i64;
		*((_QWORD*)&v51 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v59 = TlsValue;
		v67 = 0x141DE1610i64;
		v60 = v51;
		v10 = sub_1401971E0(&dword_140C8A320, 14, &v67, &v59);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v51 + 1));
		if (v10)
			DebugBreak();
		return;
	}
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 48i64))(a3))
		return;
	v11 = 6i64 * (int)v9[7];
	if (*v9)
	{
		if (*v9 == 1)
		{
			if (!*(_QWORD*)(a3 + 104))
			{
				v48 = &off_140B5E648;
				*(_QWORD*)&v49 = 0i64;
				*((_QWORD*)&v49 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &v48);
				v61 = v48;
				v57 = 0x141DE1510i64;
				v62 = v49;
				v14 = sub_1401971E0(&dword_140C8A310, 14, &v57, &v61);
				v48 = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v49 + 1));
				if (v14)
					DebugBreak();
				return;
			}
			v15 = *(_DWORD*)(a1 + 240);
			if (*(_DWORD*)(a3 + 132) != v15)
			{
				*(_DWORD*)(a3 + 132) = v15;
				_InterlockedIncrement((volatile signed __int32*)(a1 + 8 * v11 + 764));
				_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v11 + 768), *(_DWORD*)(a3 + 128));
			}
			v16 = 56 * (v7 + 154);
			if (*(_DWORD*)(v16 + a1) != a4)
			{
				*(_DWORD*)(v16 + a1) = a4;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)v7,
					9i64,
					a4);
			}
			v17 = *(_QWORD*)(a3 + 104);
			goto LABEL_30;
		}
		if (*v9 != 2)
			goto LABEL_31;
		if (!*(_QWORD*)(a3 + 120))
		{
			v54 = &off_140B5E648;
			*(_QWORD*)&v55 = 0i64;
			*((_QWORD*)&v55 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v54);
			v63 = v54;
			v56 = 0x141DE14A0i64;
			v64 = v55;
			v12 = sub_1401971E0(&dword_140C8A314, 14, &v56, &v63);
			v13 = (void*)*((_QWORD*)&v55 + 1);
			v54 = &off_140B5E648;
			goto LABEL_23;
		}
	}
	else if (!*(_QWORD*)(a3 + 120))
	{
		v52 = &off_140B5E648;
		*(_QWORD*)&v53 = 0i64;
		*((_QWORD*)&v53 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v52);
		v65 = v52;
		v58 = 0x141DE1590i64;
		v66 = v53;
		v12 = sub_1401971E0(&dword_140C8A324, 14, &v58, &v65);
		v13 = (void*)*((_QWORD*)&v53 + 1);
		v52 = &off_140B5E648;
	LABEL_23:
		v18 = v12;
		TlsSetValue(dwTlsIndex, v13);
		if (v18)
			DebugBreak();
		return;
	}
	v19 = *(_DWORD*)(a1 + 240);
	if (*(_DWORD*)(a3 + 140) != v19)
	{
		*(_DWORD*)(a3 + 140) = v19;
		_InterlockedIncrement((volatile signed __int32*)(a1 + 8 * v11 + 764));
		_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8 * v11 + 768), *(_DWORD*)(a3 + 136));
	}
	v20 = 56 * (v7 + 154);
	if (*(_DWORD*)(v20 + a1) != a4)
	{
		*(_DWORD*)(v20 + a1) = a4;
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 552i64))(
			*(_QWORD*)(a1 + 6608),
			(unsigned int)v7,
			9i64,
			a4);
	}
	v17 = *(_QWORD*)(a3 + 120);
LABEL_30:
	if (!(unsigned int)sub_14026C130(a1, v7, v17))
		return;
LABEL_31:
	v21 = a5;
	if (a5)
	{
		v22 = dword_140AE7AF0[a5[3].m128_i32[1]];
		v23 = 56 * v7;
		if (*(_DWORD*)(56 * v7 + a1 + 8592) != v22)
		{
			*(_DWORD*)(v23 + a1 + 8592) = v22;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				1i64);
		}
		v24 = dword_140AE7AF0[v21[3].m128_i32[2]];
		if (*(_DWORD*)(v23 + a1 + 8596) != v24)
		{
			*(_DWORD*)(v23 + a1 + 8596) = v24;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				2i64);
		}
		v25 = dword_140AE7AF0[v21[3].m128_i32[3]];
		if (*(_DWORD*)(v23 + a1 + 8600) != v25)
		{
			*(_DWORD*)(v23 + a1 + 8600) = v25;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				3i64);
		}
		v26 = _mm_shuffle_epi32(
			_mm_cvttps_epi32(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_min_ps(_mm_max_ps((__m128)0i64, v21[6]), (__m128)xmmword_140B7B240),
						(__m128)xmmword_140B7B470),
					(__m128)xmmword_140B7AC50)),
			198);
		v27 = _mm_packus_epi16(v26, v26);
		v28 = _mm_cvtsi128_si32(_mm_packus_epi16(v27, v27));
		if (*(_DWORD*)(v23 + a1 + 8604) != v28)
		{
			*(_DWORD*)(v23 + a1 + 8604) = v28;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				4i64);
		}
		v29 = dword_140AE7AD0[v21[3].m128_i32[0]];
		if (*(_DWORD*)(v23 + a1 + 8608) != v29)
		{
			*(_DWORD*)(v23 + a1 + 8608) = v29;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				5i64);
		}
		v30 = dword_140AE7928[v21[3].m128_i32[0]];
		if (*(_DWORD*)(v23 + a1 + 8612) != v30)
		{
			*(_DWORD*)(v23 + a1 + 8612) = v30;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				6i64);
		}
		if (v9[5] == 1)
			v31 = 0;
		else
			v31 = dword_140AE7948[v21[3].m128_i32[0]];
		if (*(_DWORD*)(v23 + a1 + 8616) != v31)
		{
			*(_DWORD*)(v23 + a1 + 8616) = v31;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				7i64,
				v31);
		}
		*(_DWORD*)(a1 + 4 * v7 + 10240) = 8;
		v32 = v21[4].m128_i32[2];
		if (*(_DWORD*)(v23 + a1 + 8620) != v32)
		{
			*(_DWORD*)(v23 + a1 + 8620) = v32;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				8i64);
		}
		v33 = v21[4].m128_i32[1];
		v34 = 56 * (v7 + 154);
		if (*(_DWORD*)(v34 + a1) != v33)
		{
			*(_DWORD*)(v34 + a1) = v33;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				9i64);
		}
		v35 = v21[4].m128_i32[3];
		if (*(_DWORD*)(v23 + a1 + 8628) != v35)
		{
			*(_DWORD*)(v23 + a1 + 8628) = v35;
			v36 = 10i64;
		LABEL_71:
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				v36);
		}
	}
	else
	{
		v37 = v9[9];
		if ((((unsigned __int8)v37 ^ *(_BYTE*)(a1 + 4 * v7 + 10176)) & 0x3F) != 0)
		{
			*(_DWORD*)(a1 + 4 * v7 + 10176) = v37;
			v38 = 56 * v7;
			v39 = dword_140AE7AF0[v9[9] & 3];
			if (*(_DWORD*)(56 * v7 + a1 + 8592) != v39)
			{
				*(_DWORD*)(v38 + a1 + 8592) = v39;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)v7,
					1i64);
			}
			v40 = dword_140AE7AF0[(v9[9] >> 2) & 3];
			if (*(_DWORD*)(v38 + a1 + 8596) != v40)
			{
				*(_DWORD*)(v38 + a1 + 8596) = v40;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)v7,
					2i64);
			}
			v41 = dword_140AE7AF0[(v9[9] >> 4) & 3];
			if (*(_DWORD*)(v38 + a1 + 8600) != v41)
			{
				*(_DWORD*)(v38 + a1 + 8600) = v41;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)v7,
					3i64);
			}
		}
		v42 = v9[10];
		v43 = 56 * v7;
		if (*(_DWORD*)(56 * v7 + a1 + 8604) != v42)
		{
			*(_DWORD*)(v43 + a1 + 8604) = v42;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
				*(_QWORD*)(a1 + 6608),
				(unsigned int)v7,
				4i64);
		}
		v44 = v9[8];
		if (*(_DWORD*)(a1 + 4 * v7 + 10240) != v44)
		{
			*(_DWORD*)(a1 + 4 * v7 + 10240) = v44;
			v45 = dword_140AE7AD0[v9[8]];
			if (*(_DWORD*)(v43 + a1 + 8608) != v45)
			{
				*(_DWORD*)(v43 + a1 + 8608) = v45;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)v7,
					5i64);
			}
			v46 = dword_140AE7928[v9[8]];
			if (*(_DWORD*)(v43 + a1 + 8612) != v46)
			{
				*(_DWORD*)(v43 + a1 + 8612) = v46;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 552i64))(
					*(_QWORD*)(a1 + 6608),
					(unsigned int)v7,
					6i64);
			}
			v47 = dword_140AE7948[v9[8]];
			if (*(_DWORD*)(v43 + a1 + 8616) != v47)
			{
				*(_DWORD*)(v43 + a1 + 8616) = v47;
				v36 = 7i64;
				goto LABEL_71;
			}
		}
	}
}
// 140AE7928: using guessed type int dword_140AE7928[8];
// 140AE7948: using guessed type int dword_140AE7948[8];
// 140AE7AD0: using guessed type int dword_140AE7AD0[8];
// 140AE7AF0: using guessed type int dword_140AE7AF0[4];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C8A310: using guessed type _DWORD dword_140C8A310;
// 140C8A314: using guessed type _DWORD dword_140C8A314;
// 140C8A320: using guessed type _DWORD dword_140C8A320;
// 140C8A324: using guessed type _DWORD dword_140C8A324;

