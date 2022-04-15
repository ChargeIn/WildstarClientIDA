#include "../winhttp.h"

//----- (0000000140729890) ----------------------------------------------------
__int64 __fastcall sub_140729890(__int64 a1)
{
	__int64 v1; // rdx
	int* v3; // rax
	int v4; // edx
	int v5; // ecx
	int v6; // eax
	int v7; // ecx
	unsigned int v8; // eax
	unsigned int v9; // edx
	__int64 v10; // rbx
	__int64 v11; // r14
	__int64 v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int128 v16; // xmm0
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v28; // [rsp+20h] [rbp-20h] BYREF
	__int64 v29; // [rsp+28h] [rbp-18h]
	int v30; // [rsp+30h] [rbp-10h]
	__int64 v31; // [rsp+34h] [rbp-Ch]
	int v32; // [rsp+3Ch] [rbp-4h]

	v1 = (unsigned int)dword_140C636A8;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 1144) + 48i64))(*(_QWORD*)(a1 + 1144), v1, 0i64);
	v3 = (int*)qword_140C63750;
	v4 = dword_140C636A8;
	*(_DWORD*)(a1 + 20) = 4;
	*(_DWORD*)(a1 + 1360) = 0;
	v5 = *v3;
	v6 = dword_140C54730;
	if (v5 < dword_140C54730)
		v6 = v5;
	v7 = dword_140C54740[v6];
	v8 = *(_DWORD*)(a1 + 1192);
	v9 = v7 + v4;
	if (v8 == -1)
	{
		*(_DWORD*)(a1 + 1192) = v9;
	}
	else
	{
		if (v8 < v9)
			v8 = v9;
		*(_DWORD*)(a1 + 1192) = v8;
	}
	v10 = 0i64;
	v11 = 3i64;
	do
	{
		v12 = *(_QWORD*)(a1 + 1272);
		v13 = *(_QWORD*)(v10 + v12 + 136);
		*(_QWORD*)(v10 + v12 + 88) = 0i64;
		*(_QWORD*)(v10 + v12 + 80) = 0i64;
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 936i64))(v13);
			*(_QWORD*)(v10 + v12 + 136) = 0i64;
		}
		v10 += 152i64;
		--v11;
	} while (v11);
	v14 = *(_QWORD*)(a1 + 1160);
	*(_DWORD*)(a1 + 1256) = 0;
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v14 + 872i64))(v14, 23i64, a1 + 1376, 0i64);
	v15 = *(_QWORD*)(a1 + 1368);
	v28 = 1213i64;
	v16 = *(_OWORD*)(a1 + 1376);
	v29 = 1065353216i64;
	v30 = 0;
	v31 = 3i64;
	*(_OWORD*)(v15 + 64) = v16;
	v17 = *(_QWORD*)(a1 + 1368);
	v32 = 0;
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(v17 + 88) + 584i64))(
		*(_QWORD*)(v17 + 88),
		0i64,
		&v28);
	v18 = *(_QWORD*)(v17 + 24);
	*(_DWORD*)(v17 + 80) = 0;
	*(_BYTE*)(v18 + 1232) = 1;
	*(_DWORD*)(v17 + 84) = 1;
	v19 = *(_QWORD*)(a1 + 1176);
	*(_DWORD*)(v19 + 104) = 0;
	v20 = *(_QWORD*)(v19 + 96);
	v28 = 1118i64;
	v29 = 1065353216i64;
	v30 = 0;
	v31 = 2i64;
	v32 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v20 + 584i64))(v20, 0i64, &v28);
	v21 = *(_QWORD*)(a1 + 1400);
	v28 = 1118i64;
	*(_DWORD*)(v21 + 48) = 0;
	v22 = *(_QWORD*)(v21 + 56);
	v29 = 1065353216i64;
	v30 = 0;
	v31 = 3i64;
	v32 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v22 + 584i64))(v22, 0i64, &v28);
	v23 = *(_QWORD*)(a1 + 1408);
	v28 = 1118i64;
	*(_DWORD*)(v23 + 48) = 0;
	v24 = *(_QWORD*)(v23 + 56);
	v29 = 1065353216i64;
	v30 = 0;
	v31 = 3i64;
	v32 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v24 + 584i64))(v24, 0i64, &v28);
	v25 = *(_QWORD*)(a1 + 1416);
	v28 = 1118i64;
	*(_DWORD*)(v25 + 48) = 0;
	v26 = *(_QWORD*)(v25 + 56);
	v29 = 1065353216i64;
	v30 = 0;
	v31 = 3i64;
	v32 = 0;
	return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v26 + 584i64))(v26, 0i64, &v28);
}
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

