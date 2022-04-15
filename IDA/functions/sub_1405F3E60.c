//----- (00000001405F3E60) ----------------------------------------------------
__int64 __fastcall sub_1405F3E60(_QWORD* a1, int a2)
{
	_QWORD* v3; // rcx
	unsigned __int64 v5; // r8
	__int64 v6; // rdx
	_DWORD* i; // rax
	__int64 v9; // rbx
	__int64 v10; // rax

	v3 = a1 + 15;
	v5 = v3[1];
	v6 = 0i64;
	if (!v5)
		return 2147500037i64;
	for (i = (_DWORD*)*v3; *i != a2; ++i)
	{
		if (++v6 >= v5)
			return 2147500037i64;
	}
	sub_1401C2F20((__int64)v3, v6);
	if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 176i64))(a1))
	{
		v9 = *(_QWORD*)(qword_140C65898 + 29504);
		v10 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 24i64))(a1);
		sub_1400EA3E0(v9, "PublicEventLocationRemoved", byte_1409ED1FC, v10);
	}
	return 0i64;
}
// 1409ED1FC: using guessed type _BYTE byte_1409ED1FC[4];
// 140C65898: using guessed type __int64 qword_140C65898;

