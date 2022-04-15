#include "../winhttp.h"

//----- (0000000140571400) ----------------------------------------------------
__int64 __fastcall sub_140571400(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // r15
	__int64 v4; // rbx
	__int64 v6; // rax
	_QWORD** v7; // rdi
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rsi
	unsigned int v13; // edx
	__int64 v14; // rbp
	__int64 v15; // r8
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rbx
	int v19; // eax
	unsigned int v20; // esi
	__int64 v21; // rax
	__int64 v22; // rsi
	unsigned int v23; // edx
	__int64 v24; // rbp
	__int64 v25; // r8
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64 v28; // rbx
	int v29; // eax
	__int64 v30; // rax
	unsigned int* v31; // rax
	__m128 v32; // xmm0
	__m128 v33; // xmm2
	__m128 v34; // xmm3
	__int64 v35; // rbx
	__int64 v36; // rdi
	int v37[4]; // [rsp+40h] [rbp-48h] BYREF
	__m128 v38; // [rsp+50h] [rbp-38h] BYREF
	__int64 v39; // [rsp+90h] [rbp+8h]
	__int64 v40; // [rsp+90h] [rbp+8h]

	v3 = qword_140C65970;
	v4 = a3;
	v6 = sub_1403D7BC0(qword_140C65970, a2);
	v7 = (_QWORD**)v6;
	if (!v6
		|| !*(_QWORD*)(qword_140C65898 + 25744)
		|| (*(int(__fastcall**)(__int64))(*(_QWORD*)v6 + 208i64))(v6) < 2
		|| ((unsigned int(__fastcall*)(_QWORD**, _QWORD))(*v7)[10])(v7, (unsigned int)v4))
	{
		return 2147500037i64;
	}
	v9 = *v7[6];
	v10 = *(_DWORD*)(v9 + 12);
	switch (v10)
	{
	case 20:
		v30 = sub_140220D40(*(_DWORD*)(v9 + 20));
		if (!v30 || (unsigned int)v4 >= 8)
			return 2147500037i64;
		v20 = *(_DWORD*)(v30 + 4 * v4 + 48);
		break;
	case 23:
		v21 = sub_140221180(*(_DWORD*)(v9 + 20));
		v22 = v21;
		if (!v21 || (unsigned int)v4 >= 0xA)
			return 2147500037i64;
		v23 = *(_DWORD*)(v21 + 4 * v4 + 124);
		v24 = v4;
		v25 = *(_QWORD*)(qword_140C65928 + 8);
		v26 = v25;
		v27 = *(_QWORD*)(v25 + 8);
		while (v27)
		{
			if (*(_DWORD*)(v27 + 32) < v23)
			{
				v27 = *(_QWORD*)(v27 + 24);
			}
			else
			{
				v26 = v27;
				v27 = *(_QWORD*)(v27 + 16);
			}
		}
		if (v26 == v25 || (v40 = v26, v23 < *(_DWORD*)(v26 + 32)))
			v40 = *(_QWORD*)(qword_140C65928 + 8);
		if (v40 == v25 || (v28 = *(_QWORD*)(v40 + 40)) == 0)
		{
			v20 = *(_DWORD*)(v22 + 4 * v24 + 44);
		}
		else
		{
			v29 = ((__int64(__fastcall*)(_QWORD**))(*v7)[26])(v7);
			v20 = sub_140487E40(v28, 0, (unsigned int*)(v22 + 4 * (v24 + 11)), 1u, v29 != 3, 0, 0i64);
		}
		break;
	case 25:
		v11 = sub_140222B00(*(_DWORD*)(v9 + 20));
		v12 = v11;
		if (!v11 || (unsigned int)v4 >= 8)
			return 2147500037i64;
		v13 = *(_DWORD*)(v11 + 4 * v4 + 68);
		v14 = v4;
		v15 = *(_QWORD*)(qword_140C65928 + 8);
		v16 = v15;
		v17 = *(_QWORD*)(v15 + 8);
		while (v17)
		{
			if (*(_DWORD*)(v17 + 32) < v13)
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v16 = v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v16 == v15 || (v39 = v16, v13 < *(_DWORD*)(v16 + 32)))
			v39 = *(_QWORD*)(qword_140C65928 + 8);
		if (v39 == v15 || (v18 = *(_QWORD*)(v39 + 40)) == 0)
		{
			v20 = *(_DWORD*)(v12 + 4 * v14 + 36);
		}
		else
		{
			v19 = ((__int64(__fastcall*)(_QWORD**))(*v7)[26])(v7);
			v20 = sub_140487E40(v18, 0, (unsigned int*)(v12 + 4 * (v14 + 9)), 1u, v19 != 3, 0, 0i64);
		}
		break;
	default:
		return 2147500037i64;
	}
	v31 = (unsigned int*)sub_14024B980(v20);
	if (!v31)
		return 2147500037i64;
	v32 = (__m128)v31[5];
	v33 = (__m128)v31[4];
	v34 = (__m128)v31[3];
	v37[0] = 0;
	v35 = *(_QWORD*)(qword_140C65920 + 8);
	v37[1] = a2;
	v37[2] = 0;
	v38 = _mm_unpacklo_ps(_mm_unpacklo_ps(v34, v32), _mm_unpacklo_ps(v33, (__m128)0i64));
	if (v35)
	{
		do
		{
			v36 = *(_QWORD*)(v35 + 32);
			if (*(_DWORD*)(v35 + 60) == a2 && !*(_DWORD*)(v35 + 56) && !*(_DWORD*)(v35 + 64))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
				(**(void(__fastcall***)(__int64, __int64))v35)(v35, 1i64);
			}
			v35 = v36;
		} while (v36);
	}
	if (sub_140485FA0(v20, 0))
	{
		v38 = 0ui64;
		if (*(_DWORD*)qword_140C65920)
			sub_140486F10(
				qword_140C65920,
				(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
				(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
				v37,
				(__int64*)&v38);
	}
	else
	{
		v38.m128_u64[0] = v3;
		v38.m128_u64[1] = (unsigned __int64)sub_140571790;
		if (*(_DWORD*)qword_140C65920)
			sub_140486DC0(
				qword_140C65920,
				(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
				v37,
				&v38,
				v20,
				0);
	}
	return 0i64;
}
// 140B1ECE0: using guessed type wchar_t aArtFxModelProp_16[72];
// 140B1ED70: using guessed type wchar_t aArtFxModelProp_15[66];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65928: using guessed type __int64 qword_140C65928;
// 140C65970: using guessed type __int64 qword_140C65970;

