//----- (000000014076F7C0) ----------------------------------------------------
void __fastcall sub_14076F7C0(__int64 a1, __int64 a2)
{
	void(__fastcall * **v3)(_QWORD, __int64); // rcx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	unsigned __int64 i; // rdi
	_QWORD* v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	v3 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 96);
	if (v3)
		(**v3)(v3, 1i64);
	v4 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 104);
	if (v4)
		(**v4)(v4, 1i64);
	for (i = 0i64; i < *(_QWORD*)(a1 + 56); ++i)
	{
		v6 = *(_QWORD**)(*(_QWORD*)(a1 + 48) + 8 * i);
		if (v6)
		{
			v7 = v6[4];
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			if (*v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v6 - 16i64) + 8i64))(*v6 - 16i64);
			sub_14018B900((__int64)v6, 0);
		}
	}
	*(_QWORD*)(a1 + 56) = 0i64;
	v8 = *(_QWORD*)(a1 + 208);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = *(_QWORD*)(a1 + 184);
	if (v9)
		sub_14018B900(v9, 0);
	v10 = *(_QWORD*)(a1 + 152);
	if (v10)
		sub_14018B900(v10, 0);
	v11 = *(_QWORD*)(a1 + 120);
	if (v11)
		sub_14018B900(v11, 0);
	v12 = *(_QWORD*)(a1 + 64);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	v13 = *(_QWORD*)(a1 + 48);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	v14 = *(_QWORD*)(a1 + 32);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	v15 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 8) = off_140B56A08;
	if (v15)
		sub_1400579E0(v15, a2, *(_DWORD*)(a1 + 16));
}
// 14076F8FB: variable 'a2' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

