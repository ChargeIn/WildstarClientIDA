#include "../winhttp.h"

//----- (00000001404EA950) ----------------------------------------------------
_QWORD* __fastcall sub_1404EA950(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	unsigned __int16* v11; // r11
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	int v19; // r11d
	int v20; // ecx
	struct _FILETIME v21; // rbp
	struct _FILETIME v22; // rdi
	int v23; // ecx
	int v24; // ecx
	int v25; // ecx
	_QWORD* result; // rax
	__int64 v27; // r9
	struct _FILETIME** v28; // r8
	struct _FILETIME* v29; // rcx
	_QWORD* v30; // rax
	__int64 v31; // r10
	int v32; // r11d
	unsigned __int16* v33; // r8
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	unsigned __int16* v37; // r11
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	unsigned __int16* v41; // r11
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	unsigned __int16* v46; // r11
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	unsigned __int16* v50; // r11
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	int v54; // r11d
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v6, L"nStoreBannerId", v7);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v10, L"strBannerAsset", v11);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v14, L"eLocation", v15);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v18, L"eBannerProductType", v19);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v20 = *(_DWORD*)(a2 + 48);
	v21 = SystemTimeAsFileTime;
	v22 = SystemTimeAsFileTime;
	if (!v20)
	{
		result = (_QWORD*)sub_14044F8C0(qword_140C65908, *(_DWORD*)(a2 + 56));
		if (!result)
			return result;
		v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v33 = L"nBannerProduct";
		goto LABEL_20;
	}
	v23 = v20 - 1;
	if (!v23)
	{
		v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v40 = *(_QWORD*)(v39 + 16);
		*(_QWORD*)v40 = *v38;
		*(_DWORD*)(v40 + 8) = *((_DWORD*)v38 + 2);
		*(_QWORD*)(v39 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v40, L"strBannerProduct", v41);
		goto LABEL_21;
	}
	v24 = v23 - 1;
	if (!v24)
	{
		result = (_QWORD*)sub_14044F870(qword_140C65908, *(_DWORD*)(a2 + 56));
		if (!result)
			return result;
		v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v33 = L"nBannerProduct";
		goto LABEL_20;
	}
	v25 = v24 - 1;
	if (!v25)
	{
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v36 = *(_QWORD*)(v35 + 16);
		*(_QWORD*)v36 = *v34;
		*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(v35 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v36, L"strBannerProduct", v37);
	LABEL_21:
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		goto LABEL_22;
	}
	if (v25 != 1)
	{
	LABEL_22:
		v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v45 = *(_QWORD*)(v44 + 16);
		*(_QWORD*)v45 = *v43;
		*(_DWORD*)(v45 + 8) = *((_DWORD*)v43 + 2);
		*(_QWORD*)(v44 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v45, L"strTitle", v46);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v49 = *(_QWORD*)(v48 + 16);
		*(_QWORD*)v49 = *v47;
		*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
		*(_QWORD*)(v48 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v49, L"strBody", v50);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v53 = *(_QWORD*)(v52 + 16);
		*(_QWORD*)v53 = *v51;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v51 + 2);
		*(_QWORD*)(v52 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v53, L"nOrder", v54);
		result = *(_QWORD**)(a1 + 16);
		result[2] -= 16i64;
		return result;
	}
	result = (_QWORD*)sub_14044F8C0(qword_140C65908, *(_DWORD*)(a2 + 56));
	if (result)
	{
		v27 = result[9];
		if (v27)
		{
			v28 = (struct _FILETIME**)result[8];
			do
			{
				v29 = *v28++;
				if (*(unsigned __int64*)&v22 > *(_QWORD*)&v29[7])
					v22 = v29[7];
				--v27;
			} while (v27);
		}
		if (*(_QWORD*)&v22 < *(unsigned __int64*)&v21)
		{
			v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
			v33 = L"nBannerProduct";
		LABEL_20:
			v42 = *(_QWORD*)(v31 + 16);
			*(_QWORD*)v42 = *v30;
			*(_DWORD*)(v42 + 8) = *((_DWORD*)v30 + 2);
			*(_QWORD*)(v31 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a1 + 16), v42, v33, v32);
			goto LABEL_21;
		}
	}
	return result;
}
// 1404EA984: variable 'v5' is possibly undefined
// 1404EA9A7: variable 'v7' is possibly undefined
// 1404EA9DF: variable 'v9' is possibly undefined
// 1404EAA02: variable 'v11' is possibly undefined
// 1404EAA2B: variable 'v13' is possibly undefined
// 1404EAA4E: variable 'v15' is possibly undefined
// 1404EAA77: variable 'v17' is possibly undefined
// 1404EAA9A: variable 'v19' is possibly undefined
// 1404EAB6F: variable 'v35' is possibly undefined
// 1404EAB92: variable 'v37' is possibly undefined
// 1404EABF2: variable 'v39' is possibly undefined
// 1404EAC15: variable 'v41' is possibly undefined
// 1404EAC58: variable 'v31' is possibly undefined
// 1404EAC71: variable 'v32' is possibly undefined
// 1404EAC9A: variable 'v44' is possibly undefined
// 1404EACBD: variable 'v46' is possibly undefined
// 1404EACE6: variable 'v48' is possibly undefined
// 1404EAD09: variable 'v50' is possibly undefined
// 1404EAD32: variable 'v52' is possibly undefined
// 1404EAD55: variable 'v54' is possibly undefined
// 140B0D1A0: using guessed type wchar_t aNbannerproduct_0[15];
// 140B0D1C0: using guessed type wchar_t aNbannerproduct_1[15];
// 140B0D1E0: using guessed type wchar_t aStrbannerprodu_0[17];
// 140B0D208: using guessed type wchar_t aStrbannerprodu[17];
// 140B0D230: using guessed type wchar_t aStrbannerasset[15];
// 140B0D250: using guessed type wchar_t aElocation[10];
// 140B0D268: using guessed type wchar_t aEbannerproduct[19];
// 140B0D290: using guessed type wchar_t aNbannerproduct[15];
// 140B0D2E8: using guessed type wchar_t aNstorebannerid[15];
// 140B0D498: using guessed type wchar_t aStrtitle_0[9];
// 140B0D4B0: using guessed type wchar_t aStrbody[8];
// 140B0D4C0: using guessed type wchar_t aNorder[7];
// 140C65908: using guessed type __int64 qword_140C65908;

