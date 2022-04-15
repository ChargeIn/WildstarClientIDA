#include "../winhttp.h"

//----- (000000014019B8A0) ----------------------------------------------------
__int64 __fastcall sub_14019B8A0(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v3; // rbx
	_WORD* v6; // rax
	_WORD* v8; // rax
	int v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+24h] [rbp-24h] BYREF
	int v11[8]; // [rsp+28h] [rbp-20h] BYREF
	_WORD* v12; // [rsp+60h] [rbp+18h] BYREF

	v3 = *(_QWORD*)(a3 + 16);
	v12 = *(_WORD**)(a3 + 8);
	if (!(unsigned int)sub_14019D5F0(&v12, v3, &v9))
		return 0i64;
	v6 = v12;
	if ((unsigned __int64)v12 >= v3)
		return 0i64;
	while (*v6 == 32 || *v6 == 9)
	{
		if ((unsigned __int64)++v6 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v6 >= v3)
		return 0i64;
	if (*v6 != 44)
		return 0i64;
	v12 = v6 + 1;
	if (!(unsigned int)sub_14019D5F0(&v12, v3, &v10))
		return 0i64;
	v8 = v12;
	if ((unsigned __int64)v12 >= v3)
		return 0i64;
	while (*v8 == 32 || *v8 == 9)
	{
		if ((unsigned __int64)++v8 >= v3)
			return 0i64;
	}
	if ((unsigned __int64)v8 < v3 && *v8 == 44 && (v12 = v8 + 1, (unsigned int)sub_14019D5F0(&v12, v3, v11)))
		return sub_14001AC30(a1, a2, &v9);
	else
		return 0i64;
}
// 14019B8A0: using guessed type int var_20[8];

