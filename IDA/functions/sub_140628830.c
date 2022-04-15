#include "../winhttp.h"

//----- (0000000140628830) ----------------------------------------------------
void __fastcall sub_140628830(__int64 a1)
{
	__int128 v1; // xmm6
	__int128 v2; // xmm7
	__int64 v3; // rdx
	__int128 v5; // xmm3
	__int128 v6; // xmm0
	__int64 v7; // rcx
	__m128 v8; // xmm4
	__int128 v9; // xmm2
	_QWORD* v10; // r12
	_QWORD* v11; // rdi
	_QWORD* v12; // rsi
	_QWORD* v13; // r15
	_QWORD* v14; // rbp
	_QWORD* v15; // r14
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int128 v19[4]; // [rsp+40h] [rbp-E8h] BYREF
	__int64 v20; // [rsp+80h] [rbp-A8h]
	__int128 v21[4]; // [rsp+90h] [rbp-98h] BYREF
	__int64 v22; // [rsp+D0h] [rbp-58h]
	__int128 v23; // [rsp+E0h] [rbp-48h]
	__int128 v24; // [rsp+F0h] [rbp-38h]

	v3 = *(_QWORD*)(a1 + 256);
	if (v3)
	{
		v5 = *(_OWORD*)(v3 + 4528);
		v6 = *(_OWORD*)(v3 + 4576);
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		v8 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v3 + 4576), (__m128) * (unsigned int*)(v3 + 4584)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v3 + 4580), (__m128)0x3F800000u));
		v9 = *(_OWORD*)(v3 + 4544);
		v19[2] = *(_OWORD*)(v3 + 4560);
		v19[1] = v9;
		v19[0] = v5;
		v19[3] = v6;
		v20 = v7 + 4576;
		v10 = (_QWORD*)(a1 + 96);
		v24 = v1;
		v23 = v2;
		v21[1] = xmmword_140C78420;
		v21[0] = xmmword_140C78410;
		v21[2] = xmmword_140C78430;
		v22 = v7 + 4576;
		v21[3] = (__int128)v8;
		*(_OWORD*)(a1 + 288) = *(_OWORD*)(v3 + 4576);
		*(_OWORD*)(a1 + 272) = xmmword_140C78450;
		if (!*(_QWORD*)(a1 + 96) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 1i64))
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v21,
					L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_X.m3",
					1,
					0,
					a1 + 96);
		v11 = (_QWORD*)(a1 + 104);
		if (!*(_QWORD*)(a1 + 104) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 2i64))
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v21,
					L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Y.m3",
					1,
					0,
					a1 + 104);
		v12 = (_QWORD*)(a1 + 112);
		if (!*(_QWORD*)(a1 + 112) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 3i64))
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v21,
					L"Art\\FX\\Housing\\Transform_UI\\Translate\\TranslateAxis_Z.m3",
					1,
					0,
					a1 + 112);
		v13 = (_QWORD*)(a1 + 120);
		if (!*(_QWORD*)(a1 + 120) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 4i64))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v19,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X.m3",
					1,
					0,
					a1 + 120);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v19,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_X_noSelect.m3",
					1,
					0,
					a1 + 144);
		}
		v14 = (_QWORD*)(a1 + 128);
		if (!*(_QWORD*)(a1 + 128) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 5i64))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v19,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y.m3",
					1,
					0,
					a1 + 128);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v19,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Y_noSelect.m3",
					1,
					0,
					a1 + 152);
		}
		v15 = (_QWORD*)(a1 + 136);
		if (!*(_QWORD*)(a1 + 136) && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 6i64))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v19,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z.m3",
					1,
					0,
					a1 + 136);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, const wchar_t*, int, _DWORD, __int64))(**(_QWORD**)(qword_140C65898 + 29256)
				+ 176i64))(
					*(_QWORD*)(qword_140C65898 + 29256),
					0i64,
					v19,
					L"Art\\FX\\Housing\\Transform_UI\\Rotate\\RotateAxis_Z_noSelect.m3",
					1,
					0,
					a1 + 160);
		}
		if (*v10 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 1i64) && *v10)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 8i64))(*v10);
			*v10 = 0i64;
		}
		if (*v11 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 2i64) && *v11)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
			*v11 = 0i64;
		}
		if (*v12 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 3i64) && *v12)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
			*v12 = 0i64;
		}
		if (*v13 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 4i64))
		{
			if (*v13)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v13 + 8i64))(*v13);
				*v13 = 0i64;
			}
			v16 = *(_QWORD*)(a1 + 144);
			if (v16)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
				*(_QWORD*)(a1 + 144) = 0i64;
			}
		}
		if (*v14 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 5i64))
		{
			if (*v14)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 8i64))(*v14);
				*v14 = 0i64;
			}
			v17 = *(_QWORD*)(a1 + 152);
			if (v17)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
				*(_QWORD*)(a1 + 152) = 0i64;
			}
		}
		if (*v15 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 112i64))(a1, 6i64))
		{
			if (*v15)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v15 + 8i64))(*v15);
				*v15 = 0i64;
			}
			v18 = *(_QWORD*)(a1 + 160);
			if (v18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
				*(_QWORD*)(a1 + 160) = 0i64;
			}
		}
	}
}
// 1406288EA: variable 'v1' is possibly undefined
// 1406288F6: variable 'v2' is possibly undefined
// 140B27A80: using guessed type wchar_t aArtFxHousingTr_19[57];
// 140B27B30: using guessed type wchar_t aArtFxHousingTr_20[51];
// 140B27BD0: using guessed type wchar_t aArtFxHousingTr_17[57];
// 140B27C70: using guessed type wchar_t aArtFxHousingTr_18[57];
// 140B282C0: using guessed type wchar_t aArtFxHousingTr_25[60];
// 140B28350: using guessed type wchar_t aArtFxHousingTr_23[60];
// 140B283F0: using guessed type wchar_t aArtFxHousingTr_24[51];
// 140B28470: using guessed type wchar_t aArtFxHousingTr_21[60];
// 140B28500: using guessed type wchar_t aArtFxHousingTr_22[51];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78450: using guessed type __int128 xmmword_140C78450;

