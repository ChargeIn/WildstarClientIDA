//----- (00000001407E42F0) ----------------------------------------------------
__int64 sub_1407E42F0()
{
	unsigned __int16* v0; // rbx
	__int64 v1; // rsi
	SIZE_T v2; // rcx
	_QWORD* v3; // rax
	__int64 v4; // rdi
	int v6; // [rsp+50h] [rbp+8h] BYREF
	int v7; // [rsp+58h] [rbp+10h] BYREF

	word_140C60818 = 0;
	GetModuleFileNameW(0i64, &word_140C60610, 0x104u);
	v0 = (unsigned __int16*)qword_140DC6340;
	qword_140C5F518 = (__int64)&word_140C60610;
	if (!qword_140DC6340 || !*(_WORD*)qword_140DC6340)
		v0 = &word_140C60610;
	sub_1407E43E0(v0, 0i64, 0i64, &v6, &v7);
	v1 = v6;
	if ((unsigned __int64)v6 >= 0x1FFFFFFFFFFFFFFFi64)
		return 0xFFFFFFFFi64;
	if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFFFi64)
		return 0xFFFFFFFFi64;
	v2 = 2 * (v7 + 4i64 * v6);
	if (v2 < 2i64 * v7)
		return 0xFFFFFFFFi64;
	v3 = sub_1407E2C30(v2);
	v4 = (__int64)v3;
	if (!v3)
		return 0xFFFFFFFFi64;
	sub_1407E43E0(v0, v3, &v3[v1], &v6, &v7);
	qword_140C5F4F8 = v4;
	dword_140C5F4EC = v6 - 1;
	return 0i64;
}
// 140C5F4EC: using guessed type int dword_140C5F4EC;
// 140C5F4F8: using guessed type __int64 qword_140C5F4F8;
// 140C5F518: using guessed type __int64 qword_140C5F518;
// 140C60818: using guessed type __int16 word_140C60818;
// 140DC6340: using guessed type __int64 qword_140DC6340;

