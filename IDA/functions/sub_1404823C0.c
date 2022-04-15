//----- (00000001404823C0) ----------------------------------------------------
__int64 __fastcall sub_1404823C0(__int64 a1)
{
	__int64 v1; // rdx
	_DWORD* v2; // rax
	_DWORD* i; // rcx
	__int64 v4; // rdx
	_DWORD* j; // rcx
	unsigned __int64 v6; // rcx

	v1 = 0i64;
	v2 = (_DWORD*)(*(_QWORD*)(a1 + 112) + 408i64);
	for (i = v2; *i != 1; ++i)
	{
		if ((unsigned __int64)++v1 >= 5)
		{
			v4 = 0i64;
			for (j = v2; *j != 2; ++j)
			{
				if ((unsigned __int64)++v4 >= 5)
				{
					v6 = 0i64;
					while (*v2 != 7)
					{
						++v6;
						++v2;
						if (v6 >= 5)
							return 0i64;
					}
					return 1i64;
				}
			}
			return 1i64;
		}
	}
	return 1i64;
}

