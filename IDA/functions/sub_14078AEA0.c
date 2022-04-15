#include "../winhttp.h"

//----- (000000014078AEA0) ----------------------------------------------------
__int64 __fastcall sub_14078AEA0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	_QWORD* v5; // rdx
	bool v6; // zf
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned int v11; // ebx
	__int64 v12; // r13
	__int64 v13; // rcx
	int v14; // xmm1_4
	int* v15; // r9
	__int64 v16; // rsi
	unsigned int v17; // ecx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v21[2]; // [rsp+30h] [rbp-50h] BYREF
	int v22; // [rsp+40h] [rbp-40h]
	__int64 v23; // [rsp+44h] [rbp-3Ch]
	int v24; // [rsp+4Ch] [rbp-34h]
	__int64 v25; // [rsp+50h] [rbp-30h] BYREF
	__int64 v26; // [rsp+58h] [rbp-28h]
	int v27; // [rsp+60h] [rbp-20h]
	__int64 v28; // [rsp+64h] [rbp-1Ch]
	int v29; // [rsp+6Ch] [rbp-14h]
	int v30; // [rsp+B0h] [rbp+30h] BYREF
	int v31; // [rsp+B4h] [rbp+34h]
	int v32; // [rsp+B8h] [rbp+38h] BYREF
	int v33; // [rsp+BCh] [rbp+3Ch]

	*(_QWORD*)(a1 + 24) = a2;
	v5 = (_QWORD*)(a2 + 1208);
	v6 = *(_QWORD*)(a1 + 8) == 0i64;
	*(_QWORD*)(a1 + 32) = a3;
	if (v6)
	{
		*(_QWORD*)(a1 + 8) = v5;
		v8 = a1 + 16;
		*(_QWORD*)v8 = *v5;
		*v5 = a1;
		if (*(_QWORD*)v8)
			*(_QWORD*)(*(_QWORD*)v8 + 8i64) = v8;
	}
	v9 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 48) = *a4;
	*(_QWORD*)(a1 + 56) = a4[1];
	*(_QWORD*)(a1 + 64) = a4[2];
	if ((*(int(__fastcall**)(__int64, const wchar_t*, __int64, _QWORD))(*(_QWORD*)v9 + 40i64))(
		v9,
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_CurtainBG_000.m3",
		a1 + 80,
		0i64) < 0
		|| (v10 = *(_QWORD*)(a1 + 80),
			v21[0] = 150i64,
			v21[1] = 1065353216i64,
			v22 = 0,
			v23 = 2i64,
			v24 = 0,
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v10 + 584i64))(v10, 0i64, v21),
			(*(int(__fastcall**)(_QWORD, const wchar_t*, __int64, _QWORD))(**(_QWORD**)(a1 + 32) + 40i64))(
				*(_QWORD*)(a1 + 32),
				L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_CurtainFG_000.m3",
				a1 + 88,
				0i64) < 0))
	{
		*(_QWORD*)(a1 + 40) = 1i64;
	}
	else
	{
		v11 = 0;
		v12 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 88) + 424i64))(
			*(_QWORD*)(a1 + 88),
			1112i64,
			0i64);
		do
		{
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 88) + 296i64))(*(_QWORD*)(a1 + 88), 1i64);
			v13 = *(_QWORD*)(a1 + 88);
			v25 = 1112i64;
			LODWORD(v26) = 0;
			HIDWORD(v26) = v11;
			v27 = 0;
			v28 = 3i64;
			v29 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v13 + 584i64))(v13, 0i64, &v25);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 32) + 48i64))(
				*(_QWORD*)(a1 + 32),
				(unsigned int)dword_140C636A8,
				1i64);
			if (a2)
			{
				v14 = *(_DWORD*)(a2 + 1140);
				v15 = &v30;
				v30 = *(_DWORD*)(a2 + 1136);
				v31 = v14;
			}
			else
			{
				v32 = 1008981770;
				v33 = 1125515264;
				v15 = &v32;
			}
			(*(void(__fastcall**)(_QWORD, __m256*, __m256*, int*, _DWORD))(**(_QWORD**)(a1 + 32) + 80i64))(
				*(_QWORD*)(a1 + 32),
				&ymmword_140C78390,
				&ymmword_140C78390,
				v15,
				0);
			(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 88) + 872i64))(
				*(_QWORD*)(a1 + 88),
				21i64,
				v21);
			v16 = *(_QWORD*)(a1 + 104);
			if (!v16 || *(float*)v21 < *(float*)(*(_QWORD*)(a1 + 96) + 8 * v16 - 8))
			{
				sub_14004EED0((__int64*)(a1 + 96), v16 + 1);
				*(_DWORD*)(*(_QWORD*)(a1 + 96) + 8 * v16) = v21[0];
				*(_DWORD*)(*(_QWORD*)(a1 + 96) + 8 * v16 + 4) = v11;
			}
			v17 = *(_DWORD*)(v12 + 20);
			v11 += 100;
			if (v17 && v11 + 1 >= v17)
				v11 = v17 - 1;
		} while (v11 + 1 < v17);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 88) + 648i64))(
			*(_QWORD*)(a1 + 88),
			sub_14078B240,
			a1);
		v18 = *(_QWORD*)(a1 + 88);
		v25 = 150i64;
		v26 = 1065353216i64;
		v27 = 0;
		v28 = 2i64;
		v29 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v18 + 584i64))(v18, 0i64, &v25);
		if (a2)
		{
			v19 = *(_QWORD*)(a2 + 1160);
			if (v19)
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v19 + 896i64))(v19, 73i64, *(_QWORD*)(a1 + 80));
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a2 + 1160) + 896i64))(
					*(_QWORD*)(a2 + 1160),
					119i64,
					*(_QWORD*)(a1 + 88));
			}
		}
	}
	return 0i64;
}
// 140B50500: using guessed type wchar_t aArtPropMffortu_8[52];
// 140B50590: using guessed type wchar_t aArtPropMffortu_7[52];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C78390: using guessed type __m256 ymmword_140C78390;

