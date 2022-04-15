//----- (000000014047C1E0) ----------------------------------------------------
__int64 __fastcall sub_14047C1E0(__int64 a1, int a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // r8
	_DWORD* i; // rax

	v2 = *(_QWORD*)(a1 + 704);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	for (i = *(_DWORD**)(a1 + 696); *i != a2; ++i)
	{
		if (++v3 >= v2)
			return 0i64;
	}
	return 1i64;
}

