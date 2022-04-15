//----- (0000000140344240) ----------------------------------------------------
void __fastcall sub_140344240(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	v2 = a1 + 32;
	*(_QWORD*)(v2 - 32) = off_140B64FC0;
	sub_1403499E0(v2);
	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	if (*(int*)(a1 + 96) >= 0)
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65858 + 352i64))(
			qword_140C65858,
			*(unsigned int*)(a1 + 8));
	v4 = *(_QWORD**)(a1 + 160);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 168);
	v5 = *(_QWORD*)(a1 + 168);
	if (v5)
		*(_QWORD*)(v5 + 160) = *(_QWORD*)(a1 + 160);
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	sub_140349D80(a1 + 88);
	v6 = *(_QWORD**)(a1 + 48);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 56);
	v7 = *(_QWORD*)(a1 + 56);
	if (v7)
		*(_QWORD*)(v7 + 16) = *(_QWORD*)(a1 + 48);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
}
// 140B64FC0: using guessed type __int64 (__fastcall *off_140B64FC0[22])();
// 140C65858: using guessed type __int64 qword_140C65858;

