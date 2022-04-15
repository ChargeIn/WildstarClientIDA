#include "../winhttp.h"

//----- (0000000140092AB0) ----------------------------------------------------
__int64 __fastcall sub_140092AB0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned int i; // ebx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 >= 0)
		v7 = sub_14006C120(a1, (__int64*)(a3 + 8), v8);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 1ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
			if (v7 >= 0)
			{
				v9 = sub_1403374E0(a2, 56i64 * *(unsigned int*)(a3 + 20));
				*(_QWORD*)(a3 + 24) = v9;
				if (!v9)
					return 2147500037i64;
				for (i = 0; i < *(_DWORD*)(a3 + 20); ++i)
				{
					v7 = sub_140091140(a1, v10, *(_QWORD*)(a3 + 24) + 56i64 * i);
					if (v7 < 0)
						break;
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 140092B04: variable 'v8' is possibly undefined
// 140092B7E: variable 'v10' is possibly undefined

