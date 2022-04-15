//----- (00000001405F7D30) ----------------------------------------------------
__int64 __fastcall sub_1405F7D30(_QWORD* a1, int a2)
{
	unsigned __int64 v2; // r8
	_QWORD* v4; // rcx
	__int64 v6; // rdx
	_DWORD* i; // rax

	v2 = a1[10];
	v4 = a1 + 9;
	v6 = 0i64;
	if (!v2)
		return 2147500037i64;
	for (i = (_DWORD*)*v4; *i != a2; ++i)
	{
		if (++v6 >= v2)
			return 2147500037i64;
	}
	sub_1401C2F20((__int64)v4, v6);
	(*(void(__fastcall**)(_QWORD*))(*a1 + 344i64))(a1);
	return 0i64;
}

