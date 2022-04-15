//----- (000000014046A190) ----------------------------------------------------
__int64 __fastcall sub_14046A190(__int64 a1, int a2, int a3)
{
	_QWORD* v6; // rbx

	if (!a2)
		return 0i64;
	v6 = *(_QWORD**)(a1 + 5584);
	if (!v6)
		return 0i64;
	while ((*(unsigned int(__fastcall**)(_QWORD*))(*v6 + 48i64))(v6) != a3
		|| (*(unsigned int(__fastcall**)(_QWORD*))(*v6 + 32i64))(v6) != a2)
	{
		v6 = (_QWORD*)v6[6];
		if (!v6)
			return 0i64;
	}
	return 1i64;
}

