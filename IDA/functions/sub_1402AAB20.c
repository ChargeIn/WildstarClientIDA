#include "../winhttp.h"

//----- (00000001402AAB20) ----------------------------------------------------
int __fastcall sub_1402AAB20(__int64 a1)
{
	volatile signed __int32* v2; // rdx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx

	*(_QWORD*)a1 = &off_140B61F10;
	if (*(_QWORD*)(a1 + 136))
	{
		v2 = (volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 1012i64);
		_InterlockedDecrement(v2);
		_InterlockedExchangeAdd(v2 + 1, 0xFFFFF000);
		_InterlockedIncrement(v2 + 4);
		_InterlockedExchangeAdd(v2 + 5, 0x1000u);
		if (*(_QWORD*)(a1 + 24))
			sub_1400B6120(*(_QWORD*)(a1 + 16) + 7136i64, a1 + 24);
		v3 = *(_QWORD**)(a1 + 136);
		if (v3)
			*v3 = *(_QWORD*)(a1 + 144);
		v4 = *(_QWORD*)(a1 + 144);
		if (v4)
			*(_QWORD*)(v4 + 136) = *(_QWORD*)(a1 + 136);
		*(_QWORD*)(a1 + 136) = 0i64;
		*(_QWORD*)(a1 + 144) = 0i64;
	}
	if (*(int*)(a1 + 32) >= 1)
	{
		v5 = *(_QWORD*)(a1 + 40);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 128) = -2147483638;
	}
	v6 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 32) = 0;
	sub_14018B900(v6, 0);
	DeleteObject(*(HGDIOBJ*)(a1 + 48));
	LODWORD(v7) = DeleteObject(*(HGDIOBJ*)(a1 + 56));
	v8 = *(_QWORD**)(a1 + 136);
	if (v8)
	{
		v7 = *(_QWORD*)(a1 + 144);
		*v8 = v7;
	}
	v9 = *(_QWORD*)(a1 + 144);
	if (v9)
	{
		v7 = *(_QWORD*)(a1 + 136);
		*(_QWORD*)(v9 + 136) = v7;
	}
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v10 = *(_QWORD**)(a1 + 112);
	if (v10)
	{
		v7 = *(_QWORD*)(a1 + 120);
		*v10 = v7;
	}
	v11 = *(_QWORD*)(a1 + 120);
	if (v11)
	{
		v7 = *(_QWORD*)(a1 + 112);
		*(_QWORD*)(v11 + 32) = v7;
	}
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v12 = *(_QWORD**)(a1 + 96);
	if (v12)
	{
		v7 = *(_QWORD*)(a1 + 104);
		*v12 = v7;
	}
	v13 = *(_QWORD*)(a1 + 104);
	if (v13)
	{
		v7 = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(v13 + 16) = v7;
	}
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	return v7;
}
// 140B61F10: using guessed type __int64 (__fastcall *off_140B61F10)();

