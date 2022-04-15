#include "../winhttp.h"

//----- (000000014019B470) ----------------------------------------------------
__int64 __fastcall sub_14019B470(__int64 a1, int a2, __int64 a3)
{
	unsigned __int64 v4; // rdx
	int v7; // [rsp+40h] [rbp+18h] BYREF
	WCHAR* v8; // [rsp+48h] [rbp+20h] BYREF

	v4 = *(_QWORD*)(a3 + 16);
	v8 = *(WCHAR**)(a3 + 8);
	if ((unsigned int)sub_14019AAE0(&v8, v4, &v7))
		return sub_14001A6C0(a1, a2, v7 != 0);
	else
		return 0i64;
}

