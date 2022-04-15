#include "../winhttp.h"

//----- (00000001406630C0) ----------------------------------------------------
__int64 __fastcall sub_1406630C0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v3; // r9
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v9; // [rsp+38h] [rbp+10h]

	v1 = sub_140056AB0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		v3 = *(_QWORD*)v1;
		v4 = **(_DWORD**)(*(_QWORD*)v1 + 8i64);
		if (v4 == dword_140C65C38)
		{
			v5 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
			v6 = v5;
			v7 = *(_QWORD*)(v5 + 8);
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < v4)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v6 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v6 == v5 || (v9 = v6, v4 < *(_DWORD*)(v6 + 32)))
				v9 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
			if (v9 == v5
				|| v9 == -40
				|| (*(_DWORD*)(v9 + 108) & 2) == 0
				|| !sub_1405518A0(v3)
				|| (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64)) == 3)
			{
				dword_140C65C38 = 0;
			}
		}
	}
	return 0i64;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65C38: using guessed type int dword_140C65C38;

