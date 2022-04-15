//----- (000000014001E8F0) ----------------------------------------------------
__int64 __fastcall sub_14001E8F0(__int64 a1, int* a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // r8
	int v4; // edx
	_DWORD* i; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	v4 = *a2;
	for (i = *(_DWORD**)a1; *i != v4; ++i)
	{
		if (++v3 >= v2)
			return 0i64;
	}
	return 1i64;
}

