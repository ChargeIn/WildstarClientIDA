#include "../winhttp.h"

//----- (0000000140273760) ----------------------------------------------------
void __fastcall sub_140273760(__int64 a1, char a2, __m128* a3, __int64 a4, int a5)
{
	int v8; // r9d
	__int64 v9; // rdi
	int v10; // ebp
	__int64* v11; // r11
	_DWORD* v12; // r10
	__int64 i; // r8
	int v14; // ecx
	int v15; // ecx
	__int64 v16; // rcx
	__int64 v17; // rdx
	int v18; // eax
	int v19; // ecx
	int v20; // ecx
	__int64 v21; // rcx
	__int64 v22; // rdx
	bool v23; // zf
	__int64 v24; // rcx
	int v25; // eax
	__int64* v26; // r9
	_DWORD* v27; // r8
	int v28; // ecx
	int v29; // ecx
	__int64 v30; // rcx
	__int64 v31; // rdx
	int v32; // eax
	int v33; // ecx
	int v34; // ecx
	__int64 v35; // rcx
	__int64 v36; // rdx
	__int64 v37; // rcx
	int v38; // eax
	int v39; // r9d
	__int64* v40; // rcx
	__int64 v41; // r10
	__int64 v42; // rcx
	unsigned int v43; // r12d
	unsigned int v44; // r15d
	unsigned int v45; // r14d
	unsigned int v46; // ebp
	__int64 v47; // rsi
	unsigned int v48; // r13d
	__int64 v49; // r8
	__int64 v50; // rcx
	unsigned int v51; // [rsp+40h] [rbp-68h]
	unsigned int v52; // [rsp+44h] [rbp-64h]
	int v53[6]; // [rsp+48h] [rbp-60h] BYREF
	unsigned int v54; // [rsp+B0h] [rbp+8h]
	unsigned int v55; // [rsp+B8h] [rbp+10h]

	v8 = 0;
	v9 = 4i64;
	v10 = a2 & 1;
	if ((a2 & 1) != 0)
	{
		v11 = (__int64*)(a1 + 7544);
		v12 = (_DWORD*)(a1 + 7592);
		for (i = 4i64; i; --i)
		{
			v14 = *(v12 - 16);
			if (!v14)
			{
				v18 = *(_DWORD*)(a1 + 240);
				if (*v11)
				{
					if (*(_DWORD*)(*v11 + 88) != v18)
						v8 = 1;
				}
				else if (*(_DWORD*)(a1 + 7664) != v18)
				{
					v8 = 1;
				}
				goto LABEL_19;
			}
			v15 = v14 - 1;
			if (v15)
			{
				if (v15 == 1)
				{
					v16 = *v11;
					if (*v11)
					{
						if (*(_DWORD*)(v16 + 52) == 5)
						{
							v17 = (unsigned int)(*v12 + *(v12 - 4) * *(_DWORD*)(v16 + 44));
							goto LABEL_12;
						}
					}
				}
			}
			else
			{
				v16 = *v11;
				if (*v11 && *(_DWORD*)(v16 + 52) == 5)
				{
					v17 = (unsigned int)*v12;
				LABEL_12:
					if (*(_DWORD*)(*(_QWORD*)(v16 + 152) + 4 * v17) != *(_DWORD*)(a1 + 240))
						v8 = 1;
				}
			}
		LABEL_19:
			++v12;
			++v11;
		}
	}
	if (*(_QWORD*)(a1 + 7712) && (a2 & 6) != 0)
	{
		v19 = *(_DWORD*)(a1 + 7684);
		if (!v19)
		{
			v24 = *(_QWORD*)(a1 + 7688);
			v25 = *(_DWORD*)(a1 + 240);
			if (v24)
				v23 = *(_DWORD*)(v24 + 104) == v25;
			else
				v23 = *(_DWORD*)(a1 + 7728) == v25;
		LABEL_35:
			if (!v23)
				goto LABEL_37;
			goto LABEL_36;
		}
		v20 = v19 - 1;
		if (v20)
		{
			if (v20 == 1)
			{
				v21 = *(_QWORD*)(a1 + 7688);
				if (v21)
				{
					if (*(_DWORD*)(v21 + 52) == 5)
					{
						v22 = (unsigned int)(*(_DWORD*)(a1 + 7700) + *(_DWORD*)(v21 + 44) * *(_DWORD*)(a1 + 7696));
					LABEL_28:
						v23 = *(_DWORD*)(*(_QWORD*)(v21 + 152) + 4 * v22) == *(_DWORD*)(a1 + 240);
						goto LABEL_35;
					}
				}
			}
		}
		else
		{
			v21 = *(_QWORD*)(a1 + 7688);
			if (v21 && *(_DWORD*)(v21 + 52) == 5)
			{
				v22 = *(unsigned int*)(a1 + 7700);
				goto LABEL_28;
			}
		}
	}
LABEL_36:
	if (!v8)
	{
		if (*(_DWORD*)(a1 + 10424))
		{
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 376i64))(*(_QWORD*)(a1 + 6608), a1 + 10400);
			*(_DWORD*)(a1 + 10424) = 0;
		}
		goto LABEL_68;
	}
LABEL_37:
	if (v10)
	{
		v26 = (__int64*)(a1 + 7544);
		v27 = (_DWORD*)(a1 + 7592);
		while (1)
		{
			v28 = *(v27 - 16);
			if (!v28)
			{
				v32 = *(_DWORD*)(a1 + 240);
				if (*v26)
					*(_DWORD*)(*v26 + 88) = v32;
				else
					*(_DWORD*)(a1 + 7664) = v32;
				goto LABEL_50;
			}
			v29 = v28 - 1;
			if (v29)
				break;
			v30 = *v26;
			if (*v26)
			{
				v31 = (unsigned int)*v27;
			LABEL_46:
				*(_DWORD*)(*(_QWORD*)(v30 + 152) + 4 * v31) = *(_DWORD*)(a1 + 240);
			}
		LABEL_50:
			++v27;
			++v26;
			if (!--v9)
			{
				*(_DWORD*)(a1 + 7680) = 0;
				goto LABEL_52;
			}
		}
		if (v29 != 1)
			goto LABEL_50;
		v30 = *v26;
		if (!*v26)
			goto LABEL_50;
		v31 = (unsigned int)(*v27 + *(v27 - 4) * *(_DWORD*)(v30 + 44));
		goto LABEL_46;
	}
LABEL_52:
	if (*(_QWORD*)(a1 + 7712) && (a2 & 6) != 0)
	{
		v33 = *(_DWORD*)(a1 + 7684);
		if (v33)
		{
			v34 = v33 - 1;
			if (v34)
			{
				if (v34 == 1)
				{
					v35 = *(_QWORD*)(a1 + 7688);
					if (v35)
					{
						v36 = (unsigned int)(*(_DWORD*)(a1 + 7700) + *(_DWORD*)(v35 + 44) * *(_DWORD*)(a1 + 7696));
					LABEL_61:
						*(_DWORD*)(*(_QWORD*)(v35 + 152) + 4 * v36) = *(_DWORD*)(a1 + 240);
						*(_DWORD*)(a1 + 7744) = 0;
						goto LABEL_68;
					}
				}
			}
			else
			{
				v35 = *(_QWORD*)(a1 + 7688);
				if (v35)
				{
					v36 = *(unsigned int*)(a1 + 7700);
					goto LABEL_61;
				}
			}
		}
		else
		{
			v37 = *(_QWORD*)(a1 + 7688);
			v38 = *(_DWORD*)(a1 + 240);
			if (v37)
			{
				*(_DWORD*)(v37 + 104) = v38;
				*(_DWORD*)(a1 + 7744) = 0;
				goto LABEL_68;
			}
			*(_DWORD*)(a1 + 7728) = v38;
		}
		*(_DWORD*)(a1 + 7744) = 0;
	}
LABEL_68:
	v39 = v10 != 0;
	if (*(_QWORD*)(a1 + 7712))
	{
		if ((a2 & 2) != 0)
			v39 |= 2u;
		if ((a2 & 4) != 0)
			v39 |= dword_140AE7BA0[*(int*)(a1 + 7704)] & 4;
	}
	if ((v39 & 1) == 0)
	{
		if ((v39 & 6) == 0)
			goto LABEL_120;
		v40 = *(__int64**)(a1 + 6608);
		v41 = *v40;
	LABEL_119:
		(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(v41 + 344))(v40, 0i64, 0i64);
		goto LABEL_120;
	}
	v40 = *(__int64**)(a1 + 6608);
	v41 = *v40;
	if (!_mm_movemask_ps(_mm_cmpneq_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a3), (__m128)xmmword_140B7B240), *a3)))
		goto LABEL_119;
	(*(void(__fastcall**)(__int64*, _QWORD, _QWORD))(v41 + 344))(v40, 0i64, 0i64);
	if (!*(_QWORD*)(a1 + 7024))
	{
		if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)a1 + 152i64))(
			a1,
			L"Shaders\\DefaultPS.sho",
			a1 + 7024) < 0)
			return;
		v42 = *(_QWORD*)(a1 + 7024);
		v53[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v42 + 32i64))(v42, v53);
	}
	v43 = *(_DWORD*)(a1 + 8508);
	v44 = *(_DWORD*)(a1 + 8512);
	v45 = *(_DWORD*)(a1 + 8516);
	v46 = *(_DWORD*)(a1 + 7856);
	v47 = *(_QWORD*)(a1 + 10040);
	v55 = *(_DWORD*)(a1 + 7836);
	v54 = *(_DWORD*)(a1 + 7780);
	v48 = *(_DWORD*)(a1 + 8420);
	v51 = *(_DWORD*)(a1 + 7776);
	v52 = *(_DWORD*)(a1 + 7956);
	if (v55 != 1)
	{
		*(_DWORD*)(a1 + 7836) = 1;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			22i64,
			1i64);
	}
	if (*(_DWORD*)(a1 + 7780) != 3)
	{
		*(_DWORD*)(a1 + 7780) = 3;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			8i64,
			3i64);
	}
	if (*(_DWORD*)(a1 + 7776))
	{
		*(_DWORD*)(a1 + 7776) = 0;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 7i64);
	}
	if (*(_DWORD*)(a1 + 7956))
	{
		*(_DWORD*)(a1 + 7956) = 0;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 52i64);
	}
	if (*(_DWORD*)(a1 + 8420) != 15)
	{
		*(_DWORD*)(a1 + 8420) = 15;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			168i64,
			15i64);
	}
	if (*(_DWORD*)(a1 + 8508) != 15)
	{
		*(_DWORD*)(a1 + 8508) = 15;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			190i64,
			15i64);
	}
	if (*(_DWORD*)(a1 + 8512) != 15)
	{
		*(_DWORD*)(a1 + 8512) = 15;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			191i64,
			15i64);
	}
	if (*(_DWORD*)(a1 + 8516) != 15)
	{
		*(_DWORD*)(a1 + 8516) = 15;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			192i64,
			15i64);
	}
	if (*(_DWORD*)(a1 + 7856))
	{
		*(_DWORD*)(a1 + 7856) = 0;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 27i64);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 376i64))(a1, *(_QWORD*)(a1 + 7024), 0i64);
	(*(void(__fastcall**)(_QWORD, _QWORD, __m128*, __int64))(**(_QWORD**)(a1 + 6608) + 872i64))(
		*(_QWORD*)(a1 + 6608),
		0i64,
		a3,
		1i64);
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)a1 + 664i64))(
		a1,
		0xFFFFFFFFi64,
		v49,
		0i64,
		0i64,
		0i64,
		a5);
	if (*(_DWORD*)(a1 + 7836) != v55)
	{
		*(_DWORD*)(a1 + 7836) = v55;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			22i64,
			v55);
	}
	if (*(_DWORD*)(a1 + 7780) != v54)
	{
		*(_DWORD*)(a1 + 7780) = v54;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			8i64,
			v54);
	}
	if (*(_DWORD*)(a1 + 7776) != v51)
	{
		*(_DWORD*)(a1 + 7776) = v51;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			7i64,
			v51);
	}
	if (*(_DWORD*)(a1 + 7956) != v52)
	{
		*(_DWORD*)(a1 + 7956) = v52;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			52i64,
			v52);
	}
	if (*(_DWORD*)(a1 + 8420) != v48)
	{
		*(_DWORD*)(a1 + 8420) = v48;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			168i64,
			v48);
	}
	if (*(_DWORD*)(a1 + 8508) != v43)
	{
		*(_DWORD*)(a1 + 8508) = v43;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			190i64,
			v43);
	}
	if (*(_DWORD*)(a1 + 8512) != v44)
	{
		*(_DWORD*)(a1 + 8512) = v44;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			191i64,
			v44);
	}
	if (*(_DWORD*)(a1 + 8516) != v45)
	{
		*(_DWORD*)(a1 + 8516) = v45;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			192i64,
			v45);
	}
	if (*(_DWORD*)(a1 + 7856) != v46)
	{
		*(_DWORD*)(a1 + 7856) = v46;
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			27i64,
			v46);
	}
	if (*(_QWORD*)(a1 + 10040) != v47)
	{
		v50 = *(_QWORD*)(a1 + 6608);
		*(_QWORD*)(a1 + 10040) = v47;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v50 + 856i64))(v50, v47);
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 872i64))(
		*(_QWORD*)(a1 + 6608),
		0i64,
		*(_QWORD*)(a1 + 7160),
		1i64);
LABEL_120:
	++* (_DWORD*)(a1 + 1060);
}
// 140273D65: variable 'v49' is possibly undefined
// 140AE7118: using guessed type wchar_t aShadersDefault[22];
// 140AE7BA0: using guessed type int dword_140AE7BA0[28];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140273760: using guessed type int var_60[6];

