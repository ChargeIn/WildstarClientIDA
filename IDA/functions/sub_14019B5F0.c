#include "../winhttp.h"

//----- (000000014019B5F0) ----------------------------------------------------
__int64 __fastcall sub_14019B5F0(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v3; // rbx
	WCHAR* v6; // rax
	__int128 v8; // [rsp+20h] [rbp-18h] BYREF
	WCHAR* v9; // [rsp+50h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(a3 + 16);
	v9 = *(WCHAR**)(a3 + 8);
	if (!(unsigned int)sub_14019A560(&v9, v3, (float*)&v8))
		return 0i64;
	v6 = v9;
	if ((unsigned __int64)v9 >= v3)
		return 0i64;
	while (*v6 == 32 || *v6 == 9)
	{
		if ((unsigned __int64)++v6 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v6 < v3 && *v6 == 44 && (v9 = v6 + 1, (unsigned int)sub_14019A560(&v9, v3, (float*)&v8 + 1)))
		return sub_14019D7B0(a1, a2, &v8);
	else
		return 0i64;
}

