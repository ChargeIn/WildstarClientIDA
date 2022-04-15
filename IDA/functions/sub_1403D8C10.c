#include "../winhttp.h"

//----- (00000001403D8C10) ----------------------------------------------------
__int64 __fastcall sub_1403D8C10(__int64 a1)
{
	__int64 v1; // rdx
	_DWORD* v2; // rax
	_DWORD* i; // rcx
	__int64 v4; // rdx
	_DWORD* j; // rcx
	__int64 v6; // rdx
	_DWORD* k; // rcx
	unsigned __int64 v8; // rcx

	v1 = 0i64;
	v2 = (_DWORD*)(*(_QWORD*)(a1 + 112) + 408i64);
	for (i = v2; *i != 5; ++i)
	{
		if ((unsigned __int64)++v1 >= 5)
		{
			v4 = 0i64;
			for (j = v2; *j != 4; ++j)
			{
				if ((unsigned __int64)++v4 >= 5)
				{
					v6 = 0i64;
					for (k = v2; *k != 3; ++k)
					{
						if ((unsigned __int64)++v6 >= 5)
						{
							v8 = 0i64;
							while (*v2 != 10)
							{
								++v8;
								++v2;
								if (v8 >= 5)
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
	}
	return 1i64;
}

