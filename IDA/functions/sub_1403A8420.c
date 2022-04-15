//----- (00000001403A8420) ----------------------------------------------------
__int64 sub_1403A8420()
{
	__int64 v0; // r9
	__int64 v1; // rcx
	int v2; // edx
	int v3; // r8d
	__int64 v4; // rcx

	v0 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v0)
		return 0i64;
	if (!*(_QWORD*)(v0 + 728))
		return 0i64;
	v1 = **(_QWORD**)(v0 + 720);
	if (!v1)
		return 0i64;
	v2 = *(_DWORD*)(v1 + 28);
	v3 = *(_DWORD*)(v1 + 24);
	v4 = *(_QWORD*)(v0 + 5584);
	if (v4)
	{
		while (v3 && *(_DWORD*)(*(_QWORD*)(v4 + 80) + 92i64) != v3 || v2 && *(_DWORD*)(v4 + 100) != v2)
		{
			v4 = *(_QWORD*)(v4 + 48);
			if (!v4)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v4 = *(_QWORD*)(v0 + 5592);
		if (!v4)
			return 0i64;
		while (v3 && *(_DWORD*)(*(_QWORD*)(v4 + 80) + 92i64) != v3 || v2 && *(_DWORD*)(v4 + 100) != v2)
		{
			v4 = *(_QWORD*)(v4 + 64);
			if (!v4)
				return 0i64;
		}
	}
	if (!*(_QWORD*)(v4 + 208))
		return 0i64;
	return sub_140195F70(v4 + 192);
}
// 1403A84B7: conditional instruction was optimized away because rcx.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

