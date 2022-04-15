//----- (00000001404BFE50) ----------------------------------------------------
__int64 __fastcall sub_1404BFE50(__int64 a1)
{
	unsigned __int64 v1; // r8
	__int64 v2; // rdx
	__int64* i; // rcx
	__int64 v4; // rax

	v1 = *(_QWORD*)(a1 + 312);
	v2 = 0i64;
	if (!v1)
		return 1i64;
	for (i = *(__int64**)(a1 + 304); ; ++i)
	{
		v4 = *i;
		if (*i)
		{
			if (!*(_DWORD*)(v4 + 644) || !*(_DWORD*)(v4 + 648))
				break;
		}
		if (++v2 >= v1)
			return 1i64;
	}
	return 0i64;
}

