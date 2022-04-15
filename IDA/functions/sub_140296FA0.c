//----- (0000000140296FA0) ----------------------------------------------------
void __fastcall sub_140296FA0(__int64 a1)
{
	volatile signed __int32* v2; // rdx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx

	*(_QWORD*)a1 = off_140B61AA0;
	if (*(_QWORD*)(a1 + 120))
	{
		v2 = (volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 1012i64);
		_InterlockedDecrement(v2);
		_InterlockedExchangeAdd(v2 + 1, -*(_DWORD*)(a1 + 56));
		_InterlockedIncrement(v2 + 4);
		_InterlockedExchangeAdd(v2 + 5, *(_DWORD*)(a1 + 56));
		if (*(_QWORD*)(a1 + 24))
			sub_1400B6120(*(_QWORD*)(a1 + 16) + 7488i64, a1 + 24);
		v3 = *(_QWORD**)(a1 + 120);
		if (v3)
			*v3 = *(_QWORD*)(a1 + 128);
		v4 = *(_QWORD*)(a1 + 128);
		if (v4)
			*(_QWORD*)(v4 + 120) = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(a1 + 120) = 0i64;
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	if (*(int*)(a1 + 32) >= 1)
	{
		v5 = *(_QWORD*)(a1 + 48);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 48) = 0i64;
		}
		v6 = *(_QWORD*)(a1 + 40);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 112) = -2147483638;
	}
	v7 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 32) = 0;
	sub_14018B900(v7, 0);
	v8 = *(_QWORD**)(a1 + 120);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 128);
	v9 = *(_QWORD*)(a1 + 128);
	if (v9)
		*(_QWORD*)(v9 + 120) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	v10 = *(_QWORD**)(a1 + 96);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 104);
	v11 = *(_QWORD*)(a1 + 104);
	if (v11)
		*(_QWORD*)(v11 + 32) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	v12 = *(_QWORD**)(a1 + 80);
	if (v12)
		*v12 = *(_QWORD*)(a1 + 88);
	v13 = *(_QWORD*)(a1 + 88);
	if (v13)
		*(_QWORD*)(v13 + 16) = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
}
// 140B61AA0: using guessed type __int64 (__fastcall *off_140B61AA0[25])();

