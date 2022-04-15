//----- (0000000140141600) ----------------------------------------------------
__int64 __fastcall sub_140141600(__int64 a1, int* a2, int* a3, int* a4)
{
	__int64 v4; // rsi
	__int64 v9; // rcx
	__int64 v10; // r14
	__int64 v11; // rdi
	__int64 v12; // rax
	_QWORD* v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rax
	_QWORD* v16; // rax

	v4 = a1 + 24;
	sub_1401A59A0(a1 + 24);
	*(_DWORD*)(v4 + 92) = 0;
	v9 = *(_QWORD*)(v4 + 104);
	*(_QWORD*)(v4 + 104) = 0i64;
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	sub_14018B900(*(_QWORD*)(v4 + 112), 0);
	v10 = v4 + 128;
	*(_QWORD*)(v4 + 112) = 0i64;
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v4 + 128) + 16i64))(v4 + 128);
	if (v11)
	{
		*(_QWORD*)(v11 + 8) = v4;
		*(_QWORD*)(v11 + 16) = 0i64;
		*(_DWORD*)(v11 + 24) = 0;
		*(_QWORD*)(v11 + 32) = 0i64;
		*(_QWORD*)(v11 + 40) = 0i64;
		*(_QWORD*)(v11 + 48) = 0i64;
		*(_QWORD*)(v11 + 56) = 0i64;
		*(_QWORD*)(v11 + 64) = 0i64;
		*(_QWORD*)(v11 + 72) = 0i64;
		*(_QWORD*)(v11 + 80) = 0i64;
		*(_QWORD*)v11 = off_140B5EBA0;
		*(_DWORD*)(v11 + 88) = 0;
		*(_QWORD*)(v11 + 96) = 0i64;
	}
	else
	{
		v11 = 0i64;
	}
	*(_QWORD*)(v11 + 80) = v10;
	sub_1401A4C50(v11 + 24, (int*)L"MLDoc");
	sub_1401A5A70((_QWORD*)v4, (_QWORD*)v11);
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v4 + 128);
	v13 = (_QWORD*)v12;
	if (v12)
	{
		*(_QWORD*)(v12 + 8) = v4;
		*(_QWORD*)(v12 + 16) = 0i64;
		*(_DWORD*)(v12 + 24) = 0;
		*(_QWORD*)(v12 + 32) = 0i64;
		*(_QWORD*)(v12 + 40) = 0i64;
		*(_QWORD*)(v12 + 48) = 0i64;
		*(_QWORD*)(v12 + 56) = 0i64;
		*(_QWORD*)(v12 + 64) = 0i64;
		*(_QWORD*)(v12 + 72) = 0i64;
		*(_QWORD*)(v12 + 80) = 0i64;
		*(_QWORD*)v12 = off_140B5EBA0;
		*(_DWORD*)(v12 + 88) = 0;
		*(_QWORD*)(v12 + 96) = 0i64;
	}
	else
	{
		v13 = 0i64;
	}
	v13[10] = v10;
	sub_1401A4C50((__int64)(v13 + 3), (int*)word_1409DB474);
	sub_1401A5A70((_QWORD*)v11, v13);
	if (a3 && *(_WORD*)a3)
	{
		v14 = sub_1401A6C70((__int64)v13, (int*)L"Font");
		sub_1401A4C50(v14 + 32, a3);
	}
	if (a4 && *(_WORD*)a4)
	{
		v15 = sub_1401A6C70((__int64)v13, (int*)&word_140A31AB8);
		sub_1401A4C50(v15 + 32, a4);
	}
	v16 = (_QWORD*)sub_1401A7880(v4, a2);
	sub_1401A5A70(v13, v16);
	return sub_1401411C0(a1);
}
// 1409DB474: using guessed type __int16 word_1409DB474[];
// 140A23888: using guessed type wchar_t aMldoc_0[6];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();

