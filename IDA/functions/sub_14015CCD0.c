//----- (000000014015CCD0) ----------------------------------------------------
__int64 __fastcall sub_14015CCD0(__int64 a1, __int64 a2, void* a3, __m128i* a4)
{
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	__int64 v11; // rcx
	_QWORD* v12; // rsi
	__int64 v13; // rdx
	void* v14; // rdx
	__m128 v16[2]; // [rsp+30h] [rbp-28h] BYREF

	*(_QWORD*)a1 = a2;
	*(_BYTE*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v8;
	*(_QWORD*)(a1 + 32) = v8;
	*(_QWORD*)(a1 + 40) = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 56) = v9;
	*(_QWORD*)(a1 + 64) = v9;
	*(_QWORD*)(a1 + 72) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 88) = v10;
	*(_QWORD*)(a1 + 96) = v10;
	*(_QWORD*)(a1 + 104) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	sub_1401095E0(a1 + 112);
	v11 = qword_140C63678;
	v16[0] = (__m128)xmmword_140B7B240;
	*(_DWORD*)(a1 + 160) = 0;
	v12 = (_QWORD*)(a1 + 192);
	*(_DWORD*)(a1 + 164) = sub_140141F10(v11, v16);
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_DWORD*)(a1 + 176) = -2;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	v13 = *(_QWORD*)(a2 + 32);
	if (v13)
		sub_140109710((__int64*)(a1 + 112), v13 + 240, a4, 0);
	if (*v12)
	{
		v14 = a3;
		if (!a3)
			v14 = &unk_1409DC304;
		(*(void(__fastcall**)(_QWORD, void*, __int64))(*(_QWORD*)*v12 + 56i64))(*v12, v14, -1i64);
	}
	else
	{
		(*(void(__fastcall**)(__int64, _QWORD, void*, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
			qword_140C65680,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 696i64) + 96i64),
			a3,
			-1i64,
			a1 + 192);
	}
	return a1;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 14015CCD0: using guessed type __m128 var_28[2];

