#include "../winhttp.h"

//----- (000000014007A800) ----------------------------------------------------
__int64 __fastcall sub_14007A800(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int i; // ebx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if (v7 >= 0)
		{
			v8 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v8;
			if (!v8)
				return 2147500037i64;
			for (i = 0; i < *(_DWORD*)(a3 + 4); ++i)
			{
				v7 = sub_14007A730(a1, v9, (_DWORD*)(*(_QWORD*)(a3 + 8) + 16i64 * i));
				if (v7 < 0)
					break;
			}
		}
	}
	return (unsigned int)v7;
}
// 14007A89E: variable 'v9' is possibly undefined

