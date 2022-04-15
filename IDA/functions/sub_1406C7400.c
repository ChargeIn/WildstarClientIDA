#include "../winhttp.h"

//----- (00000001406C7400) ----------------------------------------------------
void __fastcall sub_1406C7400(__int64 a1)
{
	void(__fastcall * **v2)(_QWORD, __int64); // r12
	__int64 v3; // rcx
	__int64 v4; // rcx
	char v5; // dl
	int v6; // eax
	__int64 v7; // r8
	unsigned int v8; // r11d
	__int64 v9; // rdi
	int v10; // r15d
	const wchar_t* v11; // r9
	unsigned int v12; // r13d
	unsigned __int64 v13; // rcx
	__int64 i; // rsi
	__int64 v15; // r10
	__int64 v16; // rdx
	__int64 v17; // r10
	unsigned __int64 j; // rcx
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // r10
	unsigned __int64 k; // rcx
	__int64 v23; // r9
	__int64 v24; // r9
	char v25; // al
	__m128* v26; // rdx
	float v27; // xmm0_4
	_QWORD* v28; // rcx
	int* v29; // rdi
	__m128* v30; // rsi
	__int64 v31; // r14
	__m128 v32; // xmm0
	_QWORD* v33; // rcx
	__m128 v34; // xmm2
	_QWORD* v35; // rcx
	_QWORD* v36; // rcx
	int v37; // xmm0_4
	unsigned int* v38; // rdi
	_QWORD* v39; // rcx
	_QWORD* v40; // rcx
	_QWORD* v41; // rcx
	__m128 v42; // [rsp+30h] [rbp-D0h] BYREF
	unsigned int v43; // [rsp+40h] [rbp-C0h]
	unsigned int v44; // [rsp+44h] [rbp-BCh]
	__m128 v45[2]; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v46[2]; // [rsp+70h] [rbp-90h] BYREF
	int v47[12]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v48[9]; // [rsp+C0h] [rbp-40h] BYREF

	if ((*(_DWORD*)(a1 + 664) & 0x800i64) != 0)
	{
		sub_140130420(a1);
		return;
	}
	v2 = sub_1406C5440(a1);
	if (!v2)
	{
		sub_1406C72A0(a1);
		return;
	}
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 2896i64);
	v5 = 1;
	if (v3 != a1 && (!v3 || (v4 = *(_QWORD*)(v3 + 16)) == 0 || v4 != a1 && !sub_1400D1A90(v4, a1)))
		v5 = 0;
	v6 = sub_1400C39E0(a1 + 1024, v5);
	v8 = *(_DWORD*)(a1 + 1496);
	v9 = 0i64;
	v10 = v6;
	v44 = v8;
	v11 = L"ABar";
	v12 = v8 / 0xC;
	v13 = 0i64;
	v43 = v8 % 0xC;
	for (i = *(_QWORD*)(qword_140C65898 + 30088); aAbar[v13]; ++v13)
		;
	v15 = *(_QWORD*)(a1 + 1472);
	if ((*(_QWORD*)(a1 + 1480) - v15) >> 1 == v13)
	{
		v16 = 0i64;
		if (v13)
		{
			v17 = v15 - (_QWORD)L"ABar";
			while (1)
			{
				v7 = *(wchar_t*)((char*)&aAbar[v16] + v17);
				v11 = (const wchar_t*)aAbar[v16];
				if ((_WORD)v7 != (_WORD)v11)
					break;
				if (++v16 >= v13)
					goto LABEL_21;
			}
		}
		else
		{
		LABEL_21:
			if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD, __int64, const wchar_t*))(*(_QWORD*)i + 200i64))(
				*(_QWORD*)(qword_140C65898 + 30088),
				v8 + 49,
				v7,
				L"ABar"))
			{
				v10 = 1;
				goto LABEL_66;
			}
		}
	}
	for (j = 0i64; aLasbar[j]; ++j)
		;
	v19 = *(_QWORD*)(a1 + 1472);
	if ((*(_QWORD*)(a1 + 1480) - v19) >> 1 != j)
	{
	LABEL_31:
		if (!sub_14002C740(a1 + 1464, L"RMSBar"))
			goto LABEL_34;
		goto LABEL_32;
	}
	v20 = 0i64;
	if (j)
	{
		v21 = v19 - (_QWORD)L"LASBar";
		do
		{
			v11 = (const wchar_t*)aLasbar[v20];
			v7 = *(wchar_t*)((char*)&aLasbar[v20] + v21);
			if ((_WORD)v7 != (_WORD)v11)
				goto LABEL_31;
		} while (++v20 < j);
	}
LABEL_32:
	if ((*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, const wchar_t*))(*(_QWORD*)i + 200i64))(
		i,
		v43 + 49,
		v7,
		v11))
	{
		v10 = 1;
		goto LABEL_66;
	}
LABEL_34:
	for (k = 0i64; aTsqbar[k]; ++k)
		;
	v23 = *(_QWORD*)(a1 + 1472);
	if ((*(_QWORD*)(a1 + 1480) - v23) >> 1 != k)
		goto LABEL_42;
	if (k)
	{
		v24 = v23 - (_QWORD)L"TSQBar";
		while (*(wchar_t*)((char*)&aTsqbar[v9] + v24) == aTsqbar[v9])
		{
			if (++v9 >= k)
				goto LABEL_45;
		}
	LABEL_42:
		if (!sub_14002C740(a1 + 1464, L"TSQOBar")
			&& !sub_14002C740(a1 + 1464, L"TSPEOBar")
			&& !sub_14002C740(a1 + 1464, L"TSCBar"))
		{
			goto LABEL_47;
		}
	}
LABEL_45:
	if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)i + 200i64))(i, 48i64))
	{
		v10 = 1;
		goto LABEL_66;
	}
LABEL_47:
	if (sub_14002C740(a1 + 1464, L"TSMBar")
		&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)i + 200i64))(i, 35i64))
	{
		v10 = 1;
	}
	else if (sub_14002C740(a1 + 1464, L"GCBar")
		&& v44 == 5
		&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)i + 200i64))(i, 33i64))
	{
		v10 = 1;
	}
	else if (sub_14002C740(a1 + 1464, L"SBar")
		&& v12 != 1
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)i + 200i64))(i, v43 + 134))
	{
		v10 = 1;
	}
	else if (sub_14002C740(a1 + 1464, L"SBar")
		&& v12 == 1
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)i + 200i64))(i, v43 + 190))
	{
		v10 = 1;
	}
	else if (sub_14002C740(a1 + 1464, L"GCBar")
		&& *(_DWORD*)(a1 + 1496) == 2
		&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)i + 200i64))(i, 123i64))
	{
		v10 = 1;
	}
LABEL_66:
	if ((*(_BYTE*)(a1 + 28) & 8) == 0)
		v10 = 4;
	sub_1406C5D70(a1, v45);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 2i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 64i64))(qword_140C65680, 24i64);
	((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v2)[15])(v2);
	(*(void (**)(void))(*(_QWORD*)qword_140C65680 + 160i64))();
	v25 = *(_BYTE*)(a1 + 28);
	if ((v25 & 8) == 0)
	{
		v26 = &v42;
		v42 = (__m128)xmmword_140B7B050;
	LABEL_74:
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 176i64))(qword_140C65680, v26);
		goto LABEL_75;
	}
	if (v25 < 0)
	{
		v42 = (__m128)xmmword_140B7B260;
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)qword_140C65680 + 176i64))(qword_140C65680, &v42);
	}
	if (*(_DWORD*)(((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v2)[15])(v2) + 244))
	{
		v26 = (__m128*)(((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v2)[15])(v2) + 208);
		goto LABEL_74;
	}
LABEL_75:
	v27 = (**(float(__fastcall***)(__int64))(a1 + 1696))(a1 + 1696);
	v28 = *(_QWORD**)(a1 + 1800);
	v42 = (__m128)xmmword_140B7B240;
	if (v27 <= 0.0)
	{
		if (v28)
			sub_140103E60(
				v28,
				v45,
				&v42,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1808)) * *(float*)(a1 + 1812)));
	}
	else
	{
		v47[0] = 1031798784;
		v47[1] = 1040187392;
		v47[2] = 1031798784;
		v47[3] = 1040187392;
		v47[5] = 1040187392;
		v47[6] = 1031798784;
		v48[0] = xmmword_140B7A600;
		v48[1] = xmmword_140B7A5E0;
		v47[7] = 1040187392;
		v47[8] = 1031798784;
		v48[2] = xmmword_140B7A5F0;
		v48[4] = 0i64;
		v48[3] = xmmword_140B7A3B0;
		v48[6] = xmmword_140B7A510;
		v48[5] = xmmword_140B7A340;
		v48[8] = xmmword_140B7A500;
		v47[4] = 1048576000;
		v48[7] = xmmword_140B7A4F0;
		if (v28)
			sub_140103E60(
				v28,
				v45,
				&v42,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1808)) * *(float*)(a1 + 1812)));
		v29 = v47;
		v30 = (__m128*)v48;
		v31 = 9i64;
		do
		{
			v32 = (__m128)(unsigned int) * v29;
			v33 = *(_QWORD**)(a1 + 1800);
			v34 = _mm_add_ps(v45[1], *v30);
			v46[0] = _mm_add_ps(v45[0], *v30);
			v46[1] = v34;
			v42 = _mm_unpacklo_ps((__m128)xmmword_140B7A4C0, _mm_unpacklo_ps((__m128)0x3F800000u, v32));
			if (v33)
				sub_140103E60(
					v33,
					v46,
					&v42,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1808)) * *(float*)(a1 + 1812)));
			++v30;
			++v29;
			--v31;
		} while (v31);
	}
	if (((v10 - 1) & 0xFFFFFFFD) == 0)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v35 = *(_QWORD**)(a1 + 1944);
		v42 = (__m128)xmmword_140B7B240;
		if (v35)
			sub_140103E60(
				v35,
				v45,
				&v42,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1952)) * *(float*)(a1 + 1956)));
	}
	if (*(_DWORD*)(((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v2)[15])(v2) + 144)
		|| *(_DWORD*)(((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v2)[15])(v2) + 148))
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v36 = *(_QWORD**)(a1 + 1896);
		v42 = (__m128)xmmword_140B7B240;
		if (!v36)
			goto LABEL_96;
		*(float*)&v37 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1904)) * *(float*)(a1 + 1908);
	}
	else
	{
		if ((**(float(__fastcall***)(__int64))(a1 + 1600))(a1 + 1600) <= 0.0)
			goto LABEL_96;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v36 = *(_QWORD**)(a1 + 1992);
		v42 = (__m128)xmmword_140B7B240;
		if (!v36)
			goto LABEL_96;
		*(float*)&v37 = (float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2000)) * *(float*)(a1 + 2004);
	}
	sub_140103E60(v36, v45, &v42, 0, v37);
LABEL_96:
	if ((**(float(__fastcall***)(__int64))(a1 + 1632))(a1 + 1632) > 0.0)
	{
		v38 = *(unsigned int**)(((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v2)[15])(v2) + 232);
		if (v38)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			v39 = *(_QWORD**)(a1 + 1848);
			v42 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128)v38[4], (__m128)v38[6]),
				_mm_unpacklo_ps((__m128)v38[5], (__m128)v38[7]));
			if (v39)
				sub_140103E60(
					v39,
					v45,
					&v42,
					0,
					COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1856)) * *(float*)(a1 + 1860)));
		}
	}
	if ((**(float(__fastcall***)(__int64))(a1 + 1664))(a1 + 1664) > 0.0)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v40 = *(_QWORD**)(a1 + 2040);
		v42 = (__m128)xmmword_140B7B240;
		if (v40)
			sub_140103E60(
				v40,
				v45,
				&v42,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2048)) * *(float*)(a1 + 2052)));
	}
	if ((**(float(__fastcall***)(__int64))(a1 + 1760))(a1 + 1760) > 0.0)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
		v41 = *(_QWORD**)(a1 + 2136);
		v42 = (__m128)xmmword_140B7B240;
		if (v41)
			sub_140103E60(
				v41,
				v45,
				&v42,
				0,
				COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 2144)) * *(float*)(a1 + 2148)));
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
	sub_1406C6DB0(a1);
	sub_1406C7370(a1);
	sub_1406C72A0(a1);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 72i64))(qword_140C65680);
	sub_1400CEB90(a1);
}
// 1406C7598: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C7631: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C76E1: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1406C75A4: variable 'v7' is possibly undefined
// 1406C7653: variable 'v11' is possibly undefined
// 140B39730: using guessed type wchar_t aGcbar[6];
// 140B39758: using guessed type wchar_t aRmsbar[7];
// 140B39778: using guessed type wchar_t aAbar[5];
// 140B39788: using guessed type wchar_t aSbar[5];
// 140B397A8: using guessed type wchar_t aLasbar[7];
// 140B399F0: using guessed type wchar_t aTscbar[7];
// 140B39A10: using guessed type wchar_t aTspeobar[9];
// 140B39A28: using guessed type wchar_t aTsmbar[7];
// 140B39A38: using guessed type wchar_t aTsqbar[7];
// 140B39A48: using guessed type wchar_t aTsqobar[8];
// 140B7A340: using guessed type __int128 xmmword_140B7A340;
// 140B7A3B0: using guessed type __int128 xmmword_140B7A3B0;
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7A4F0: using guessed type __int128 xmmword_140B7A4F0;
// 140B7A500: using guessed type __int128 xmmword_140B7A500;
// 140B7A510: using guessed type __int128 xmmword_140B7A510;
// 140B7A5E0: using guessed type __int128 xmmword_140B7A5E0;
// 140B7A5F0: using guessed type __int128 xmmword_140B7A5F0;
// 140B7A600: using guessed type __int128 xmmword_140B7A600;
// 140B7B050: using guessed type __int128 xmmword_140B7B050;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B260: using guessed type __int128 xmmword_140B7B260;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;

