#include "../winhttp.h"

//----- (0000000140691F00) ----------------------------------------------------
__int64 __fastcall sub_140691F00(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	char* v5; // rax
	int* v6; // rbx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
			if (v4)
			{
				v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
				sub_14018F2D0(&v8, v5);
				v6 = v9;
				sub_140401E40(v4, v9);
				if (v6)
					sub_14018B900((__int64)v6, 0);
			}
		}
	}
	return 0i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

