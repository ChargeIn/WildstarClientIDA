//----- (0000000140369870) ----------------------------------------------------
__int64 __fastcall sub_140369870(__int64 a1, int a2, _QWORD* a3)
{
	_QWORD* v6; // rbx

	if (!a3)
		return 2147942487i64;
	v6 = *(_QWORD**)(a1 + 5248);
	if (!v6)
		return 2147500037i64;
	while ((*(unsigned int(__fastcall**)(_QWORD*))(*v6 + 48i64))(v6) != a2)
	{
		v6 = (_QWORD*)v6[127];
		if (!v6)
			return 2147500037i64;
	}
	(*(void(__fastcall**)(_QWORD*)) * v6)(v6);
	*a3 = v6;
	return 0i64;
}

