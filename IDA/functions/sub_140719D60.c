#include "../winhttp.h"

//----- (0000000140719D60) ----------------------------------------------------
void __fastcall sub_140719D60(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx
	_QWORD* v7; // rcx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx

	*(_QWORD*)a1 = off_140B744B0;
	v2 = *(_QWORD*)(a1 + 208);
	if (v2)
	{
		*(_QWORD*)(v2 + 16) = 0i64;
		if (!*(_DWORD*)(v2 + 688) && (*(_QWORD*)(v2 + 640) || *(_QWORD*)(v2 + 632)))
			sub_1407191F0(v2);
		v3 = *(_QWORD*)(a1 + 208);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 208) = 0i64;
		}
	}
	sub_1400035B0();
	v4 = *(_QWORD*)(a1 + 208);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	sub_140195D70(a1 + 128);
	*(_DWORD*)(a1 + 128) = 0;
	v5 = *(_QWORD**)(a1 + 144);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 152);
	v6 = *(_QWORD**)(a1 + 152);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 144);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	sub_140195D70(a1 + 56);
	*(_DWORD*)(a1 + 56) = 0;
	v7 = *(_QWORD**)(a1 + 72);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 80);
	v8 = *(_QWORD**)(a1 + 80);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	v9 = *(_QWORD**)(a1 + 40);
	if (v9)
		*v9 = *(_QWORD*)(a1 + 48);
	v10 = *(_QWORD*)(a1 + 48);
	if (v10)
		*(_QWORD*)(v10 + 40) = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v11 = *(_QWORD**)(a1 + 24);
	if (v11)
		*v11 = *(_QWORD*)(a1 + 32);
	v12 = *(_QWORD*)(a1 + 32);
	if (v12)
		*(_QWORD*)(v12 + 24) = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v13 = *(_QWORD**)(a1 + 8);
	if (v13)
		*v13 = *(_QWORD*)(a1 + 16);
	v14 = *(_QWORD*)(a1 + 16);
	if (v14)
		*(_QWORD*)(v14 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
}
// 140B744B0: using guessed type __int64 (__fastcall *off_140B744B0[2])();

