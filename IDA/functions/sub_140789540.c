#include "../winhttp.h"

//----- (0000000140789540) ----------------------------------------------------
__int64 __fastcall sub_140789540(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // eax
	int v4; // ecx
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v7; // eax
	unsigned int v8; // eax
	__int64 v9; // rcx
	__m128 v10; // xmm3
	__int64 v11; // rcx
	__m128 v12; // xmm3
	__int128 v14; // [rsp+20h] [rbp-40h] BYREF
	__int128 v15; // [rsp+30h] [rbp-30h]
	__int128 v16; // [rsp+40h] [rbp-20h]
	__m128 v17; // [rsp+50h] [rbp-10h]

	if (*(_DWORD*)(a1 + 84))
	{
		v2 = *(_QWORD*)(a1 + 24);
		if (*(_QWORD*)(*(_QWORD*)(v2 + 1424) + 2896i64) || *(_QWORD*)(v2 + 1224) != a1)
		{
			if ((unsigned int)(*(_DWORD*)(a1 + 80) - 3) <= 1)
			{
				v6 = *(_QWORD*)(a1 + 88);
				*(_QWORD*)&v14 = 1112i64;
				*((_QWORD*)&v14 + 1) = 1065353216i64;
				v15 = 0ui64;
				(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v6 + 584i64))(v6, 0i64, &v14);
				*(_DWORD*)(a1 + 80) = 5;
			}
		}
		else
		{
			v3 = *(_DWORD*)(a1 + 80);
			if (v3 <= 8)
			{
				v4 = 292;
				if (_bittest(&v4, v3))
				{
					v5 = *(_QWORD*)(a1 + 88);
					*(_QWORD*)&v14 = 1109i64;
					*((_QWORD*)&v14 + 1) = 1065353216i64;
					v15 = 0ui64;
					(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v14);
					*(_DWORD*)(a1 + 80) = 3;
				}
			}
		}
	}
	v7 = *(_DWORD*)(a1 + 80);
	switch (v7)
	{
	case 0:
		v8 = 1213;
		goto LABEL_17;
	case 2:
		v8 = 1118;
		goto LABEL_17;
	case 4:
		v8 = 1120;
		goto LABEL_17;
	case 7:
		v8 = 1122;
	LABEL_17:
		v9 = *(_QWORD*)(a1 + 88);
		*(_QWORD*)&v14 = v8;
		*((_QWORD*)&v14 + 1) = 1065353216i64;
		v15 = 0ui64;
		(*(void(__fastcall**)(__int64, _QWORD, __int128*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v14);
		break;
	}
	v10 = (__m128) * (unsigned int*)(a1 + 64);
	v11 = *(_QWORD*)(a1 + 88);
	v14 = xmmword_140C78410;
	v15 = xmmword_140C78420;
	v12 = _mm_unpacklo_ps(v10, (__m128) * (unsigned int*)(a1 + 72));
	v16 = xmmword_140C78430;
	v17 = _mm_unpacklo_ps(v12, _mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 68), (__m128)0x3F800000u));
	(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v11 + 72i64))(v11, &v14);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 88) + 296i64))(*(_QWORD*)(a1 + 88), 1i64);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 88) + 320i64))(*(_QWORD*)(a1 + 88), 1i64);
	return 0i64;
}
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

