#include "../winhttp.h"

//----- (00000001402DED40) ----------------------------------------------------
int __fastcall sub_1402DED40(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rdi
	__int64 v6; // rsi
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdi
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	unsigned __int64 i; // rdi
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 j; // rdi
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	unsigned __int64 k; // rdi
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rax
	_QWORD* v29; // rcx
	__int64 v30; // rcx
	_QWORD* v31; // rcx
	__int64 v32; // rcx
	int v34[6]; // [rsp+20h] [rbp-18h] BYREF

	*(_QWORD*)a1 = off_140B62F60;
	v2 = *(_QWORD*)(a1 + 1184);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = *(_QWORD*)(a1 + 1184);
		v34[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v34);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1184) + 8i64))(*(_QWORD*)(a1 + 1184));
		*(_QWORD*)(a1 + 1184) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 1200);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 1200) = 0i64;
	}
	v5 = (_QWORD*)(a1 + 3256);
	v6 = 256i64;
	do
	{
		if (*v5)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
			*v5 = 0i64;
		}
		++v5;
		--v6;
	} while (v6);
	v7 = *(_QWORD**)(a1 + 5464);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 5472);
	v8 = *(_QWORD*)(a1 + 5472);
	if (v8)
		*(_QWORD*)(v8 + 5464) = *(_QWORD*)(a1 + 5464);
	v9 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 5464) = 0i64;
	*(_QWORD*)(a1 + 5472) = 0i64;
	if (v9)
	{
		sub_1400B6120(v9 + 1664, a1 + 32);
		v10 = *(_QWORD*)(a1 + 16);
		if (!_InterlockedDecrement((volatile signed __int32*)(v10 + 12)))
		{
			if (v10)
			{
				sub_1402DB550(v10);
				sub_14018B900(v10, 0);
			}
		}
	}
	v11 = *(_QWORD**)(a1 + 5464);
	if (v11)
		*v11 = *(_QWORD*)(a1 + 5472);
	v12 = *(_QWORD*)(a1 + 5472);
	if (v12)
		*(_QWORD*)(v12 + 5464) = *(_QWORD*)(a1 + 5464);
	*(_QWORD*)(a1 + 5464) = 0i64;
	*(_QWORD*)(a1 + 5472) = 0i64;
	for (i = 0i64; i < *(_QWORD*)(a1 + 5456); ++i)
	{
		v14 = *(_QWORD*)(*(_QWORD*)(a1 + 5448) + 8 * i);
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	}
	v15 = *(_QWORD*)(a1 + 5448);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	v16 = *(_QWORD*)(a1 + 5432);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	v17 = *(_QWORD*)(a1 + 5424);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	for (j = 0i64; j < *(_QWORD*)(a1 + 5416); ++j)
	{
		v19 = *(_QWORD*)(*(_QWORD*)(a1 + 5408) + 8 * j);
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	}
	v20 = *(_QWORD*)(a1 + 5408);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
	v21 = *(_QWORD*)(a1 + 5392);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
	v22 = *(_QWORD*)(a1 + 5384);
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	for (k = 0i64; k < *(_QWORD*)(a1 + 5376); ++k)
	{
		v24 = *(_QWORD*)(*(_QWORD*)(a1 + 5368) + 8 * k);
		if (v24)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	}
	v25 = *(_QWORD*)(a1 + 5368);
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
	v26 = *(_QWORD*)(a1 + 5352);
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
	v27 = *(_QWORD*)(a1 + 5344);
	if (v27)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	v28 = *(_QWORD*)(a1 + 5336);
	if (v28)
		LODWORD(v28) = CloseHandle(*(HANDLE*)(a1 + 5336));
	if (*(_QWORD*)(a1 + 5304))
		LODWORD(v28) = (unsigned int)sub_1401A4A00((const void***)(a1 + 5304));
	v29 = *(_QWORD**)(a1 + 1168);
	if (v29)
	{
		v28 = *(_QWORD*)(a1 + 1176);
		*v29 = v28;
	}
	v30 = *(_QWORD*)(a1 + 1176);
	if (v30)
	{
		v28 = *(_QWORD*)(a1 + 1168);
		*(_QWORD*)(v30 + 32) = v28;
	}
	*(_QWORD*)(a1 + 1168) = 0i64;
	*(_QWORD*)(a1 + 1176) = 0i64;
	v31 = *(_QWORD**)(a1 + 1152);
	if (v31)
	{
		v28 = *(_QWORD*)(a1 + 1160);
		*v31 = v28;
	}
	v32 = *(_QWORD*)(a1 + 1160);
	if (v32)
	{
		v28 = *(_QWORD*)(a1 + 1152);
		*(_QWORD*)(v32 + 16) = v28;
	}
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1152) = 0i64;
	return v28;
}
// 140B62F60: using guessed type __int64 (__fastcall *off_140B62F60[15])();
// 1402DED40: using guessed type int var_18[6];

