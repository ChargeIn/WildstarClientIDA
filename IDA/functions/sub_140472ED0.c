//----- (0000000140472ED0) ----------------------------------------------------
__int64 __fastcall sub_140472ED0(__int64 a1, unsigned int a2)
{
	_DWORD* v3; // rax
	int v4; // ebx

	v3 = (_DWORD*)sub_140211280(a2);
	if (!v3)
		return 0i64;
	if ((*(_DWORD*)(qword_140C63628 + 1524) & v3[6]) == 0
		|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
		|| (v4 = v3[2]) == 0)
	{
		v4 = v3[1];
		if (!v4)
			return 0i64;
	}
	if (*(_QWORD*)(a1 + 5528) || (int)sub_1407129A0((__int64*)(a1 + 5528)) >= 0)
		sub_140712C00(*(void(__fastcall****)(_QWORD))(a1 + 5528), v4, (__int64)sub_140472EB0, 0i64);
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;

