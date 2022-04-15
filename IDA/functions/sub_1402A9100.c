//----- (00000001402A9100) ----------------------------------------------------
void __fastcall sub_1402A9100(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx

	*(_QWORD*)a1 = off_140B61EA8;
	v2 = *(_QWORD*)(a1 + 96);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	if (*(_QWORD*)(a1 + 152))
	{
		if (*(_QWORD*)(a1 + 32))
			sub_1400B6120(*(_QWORD*)(a1 + 16) + 7056i64, a1 + 32);
		v3 = *(_QWORD**)(a1 + 152);
		if (v3)
			*v3 = *(_QWORD*)(a1 + 160);
		v4 = *(_QWORD*)(a1 + 160);
		if (v4)
			*(_QWORD*)(v4 + 152) = *(_QWORD*)(a1 + 152);
		*(_QWORD*)(a1 + 152) = 0i64;
		*(_QWORD*)(a1 + 160) = 0i64;
	}
	if (*(int*)(a1 + 40) < 1 || (int)sub_1402A9480(a1) >= 0)
		*(_DWORD*)(a1 + 40) = 0;
	sub_14018B900(*(_QWORD*)(a1 + 32), 0);
	v5 = *(_QWORD**)(a1 + 152);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 160);
	v6 = *(_QWORD*)(a1 + 160);
	if (v6)
		*(_QWORD*)(v6 + 152) = *(_QWORD*)(a1 + 152);
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	v7 = *(_QWORD**)(a1 + 136);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 144);
	v8 = *(_QWORD*)(a1 + 144);
	if (v8)
		*(_QWORD*)(v8 + 32) = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v9 = *(_QWORD**)(a1 + 120);
	if (v9)
		*v9 = *(_QWORD*)(a1 + 128);
	v10 = *(_QWORD*)(a1 + 128);
	if (v10)
		*(_QWORD*)(v10 + 16) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	v11 = *(_QWORD*)(a1 + 64);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v12 = *(_QWORD*)(a1 + 56);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
}
// 140B61EA8: using guessed type __int64 (__fastcall *off_140B61EA8[12])();

