#include "../winhttp.h"

//----- (00000001400C83E0) ----------------------------------------------------
__int64 __fastcall sub_1400C83E0(__int64 a1, char a2)
{
	__int64 v2; // rax
	__int64 i; // r8
	__int64 v5; // rbx
	_QWORD* v6; // rax
	_QWORD* v8; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+28h] [rbp-10h]
	int v10; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 16);
	for (i = a1; v2; v2 = *(_QWORD*)(v2 + 16))
		a1 = v2;
	v5 = 0i64;
	v9 = 0i64;
	v8 = 0i64;
	v10 = -1;
	sub_1400C82C0(a1, (__int64)&v8, i, &v10);
	v6 = v8;
	if (v9)
	{
		if (v10 >= 0)
		{
			if (a2)
			{
				v6 = v8;
				if (v10 >= (int)v9 - 1)
					v5 = *v8;
				else
					v5 = v8[v10 + 1];
			}
			else
			{
				v6 = v8;
				if (v10 <= 0)
					v5 = v8[v9 - 1];
				else
					v5 = v8[v10 - 1];
			}
		}
		else
		{
			v5 = *v8;
		}
	}
	if (v6)
		(*(void(__fastcall**)(_QWORD*))(*(v6 - 2) + 8i64))(v6 - 2);
	return v5;
}

