//----- (00000001402E93B0) ----------------------------------------------------
int __fastcall sub_1402E93B0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax

	*(_QWORD*)a1 = off_140B63840;
	if (*(_QWORD*)(a1 + 16))
	{
		v2 = *(_QWORD**)(a1 + 2120);
		if (v2)
			*v2 = *(_QWORD*)(a1 + 2128);
		v3 = *(_QWORD*)(a1 + 2128);
		if (v3)
			*(_QWORD*)(v3 + 2120) = *(_QWORD*)(a1 + 2120);
		v4 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 2120) = 0i64;
		*(_QWORD*)(a1 + 2128) = 0i64;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 40i64, v5);
		v6 = *(_QWORD*)(a1 + 16);
		if (!_InterlockedDecrement((volatile signed __int32*)(v6 + 12)) && v6)
		{
			sub_1402E1540(v6);
			sub_14018B900(v6, 0);
		}
	}
	v7 = *(_QWORD*)(a1 + 24);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v8 = *(_QWORD**)(a1 + 2120);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 2128);
	v9 = *(_QWORD*)(a1 + 2128);
	if (v9)
		*(_QWORD*)(v9 + 2120) = *(_QWORD*)(a1 + 2120);
	*(_QWORD*)(a1 + 2120) = 0i64;
	*(_QWORD*)(a1 + 2128) = 0i64;
	v10 = *(_QWORD*)(a1 + 2112);
	if (v10)
		LODWORD(v10) = CloseHandle(*(HANDLE*)(a1 + 2112));
	if (*(_QWORD*)(a1 + 2080))
		LODWORD(v10) = (unsigned int)sub_1401A4A00((const void***)(a1 + 2080));
	return v10;
}
// 140B63840: using guessed type __int64 (__fastcall *off_140B63840[29])();

