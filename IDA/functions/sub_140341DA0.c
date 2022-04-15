#include "../winhttp.h"

//----- (0000000140341DA0) ----------------------------------------------------
__int64 __fastcall sub_140341DA0(_QWORD* a1, int(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	unsigned __int64 v3; // rbx
	__int64 v6; // rdi
	_QWORD* v7; // rbx
	_QWORD* v9; // [rsp+40h] [rbp+8h]
	unsigned __int64 v10; // [rsp+58h] [rbp+20h]

	v9 = a1;
	v3 = 0i64;
	v10 = a1[2];
	if (v10)
	{
		v6 = 0i64;
		while (a2(v6 + a1[1], a3) >= 0)
		{
			a1 = v9;
			++v3;
			v6 += 32i64;
			if (v3 >= v10)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v7 = (_QWORD*)a1[10];
		if (!v7)
			return 0i64;
		while ((int)sub_140341DA0(*v7, a2, a3) >= 0)
		{
			v7 = (_QWORD*)v7[3];
			if (!v7)
				return 0i64;
		}
	}
	return 2147500037i64;
}

