//----- (00000001402C9680) ----------------------------------------------------
void __fastcall sub_1402C9680(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rsi
	_QWORD* i; // rdi
	__int64 v10; // rcx
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	*(_QWORD*)a1 = off_140B627F0;
	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = *(_QWORD*)(a1 + 32);
		v11[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v11);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 8i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 56);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	if (*(_DWORD*)(a1 + 48))
		sub_1400B6120(qword_140C657F0 + 56, a1 + 16);
	sub_14018B900(*(_QWORD*)(a1 + 16), 0);
	v6 = *(_QWORD**)(a1 + 112);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 120);
	v7 = *(_QWORD*)(a1 + 120);
	if (v7)
		*(_QWORD*)(v7 + 112) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v8 = *(_QWORD**)(a1 + 96);
	for (i = *(_QWORD**)(a1 + 88); i != v8; i += 22)
		sub_1402D3190(i);
	v10 = *(_QWORD*)(a1 + 88);
	if (v10)
		sub_14018B900(v10, 0);
}
// 140B627F0: using guessed type __int64 (__fastcall *off_140B627F0[13])();
// 140C657F0: using guessed type __int64 qword_140C657F0;
// 1402C9680: using guessed type int var_18[6];

