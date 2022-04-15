#include "../winhttp.h"

//----- (000000014019B6C0) ----------------------------------------------------
__int64 __fastcall sub_14019B6C0(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v3; // rbx
	_WORD* v6; // rax
	_WORD* v8; // [rsp+40h] [rbp+18h] BYREF
	int v9; // [rsp+48h] [rbp+20h] BYREF
	int v10; // [rsp+4Ch] [rbp+24h] BYREF

	v3 = *(_QWORD*)(a3 + 16);
	v8 = *(_WORD**)(a3 + 8);
	if (!(unsigned int)sub_14019D5F0(&v8, v3, &v9))
		return 0i64;
	v6 = v8;
	if ((unsigned __int64)v8 >= v3)
		return 0i64;
	while (*v6 == 32 || *v6 == 9)
	{
		if ((unsigned __int64)++v6 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v6 < v3 && *v6 == 44 && (v8 = v6 + 1, (unsigned int)sub_14019D5F0(&v8, v3, &v10)))
		return sub_14001A8D0(a1, a2, &v9);
	else
		return 0i64;
}

