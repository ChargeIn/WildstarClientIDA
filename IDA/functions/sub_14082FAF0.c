//----- (000000014082FAF0) ----------------------------------------------------
__int64 __fastcall sub_14082FAF0(__int64 a1, int a2, __int64* a3)
{
	_DWORD* v3; // rax
	__int64 (**v5)(void); // rax
	__int64 v6; // rax

	*a3 = 0i64;
	v3 = (_DWORD*)qword_140C61C08;
	if (qword_140C61C08 == qword_140C61C10)
		return 2i64;
	do
	{
		if (*v3 == a2)
			break;
		v3 += 6;
	} while (v3 != (_DWORD*)qword_140C61C10);
	if (v3 == (_DWORD*)qword_140C61C10)
		return 2i64;
	v5 = (__int64 (**)(void))(v3 + 2);
	if (!v5)
		return 2i64;
	v6 = (*v5)();
	*a3 = v6;
	return 2 - (unsigned int)(v6 != 0);
}
// 140C61C08: using guessed type __int64 qword_140C61C08;
// 140C61C10: using guessed type __int64 qword_140C61C10;

