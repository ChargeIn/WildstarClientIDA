#include "../winhttp.h"

//----- (00000001400ACEC0) ----------------------------------------------------
__int64 __fastcall sub_1400ACEC0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	unsigned __int8 i; // bl

	if (!a3)
		return 2147500037i64;
	v7 = sub_1400ACE10(a1, (__int64)a2, (_DWORD*)a3);
	if (v7 >= 0)
	{
		v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 16), 8ui64);
		if (v7 >= 0)
		{
			v8 = sub_1403374E0(a2, 16i64 * *(unsigned __int8*)(a3 + 16));
			*(_QWORD*)(a3 + 24) = v8;
			if (!v8)
				return 2147500037i64;
			for (i = 0; i < *(_BYTE*)(a3 + 16); ++i)
			{
				v7 = sub_1400ACD60(a1, (__int64)a2, (_DWORD*)(*(_QWORD*)(a3 + 24) + 16i64 * i));
				if (v7 < 0)
					break;
			}
		}
	}
	return (unsigned int)v7;
}

