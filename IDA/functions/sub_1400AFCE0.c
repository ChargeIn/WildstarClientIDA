#include "../winhttp.h"

//----- (00000001400AFCE0) ----------------------------------------------------
__int64 __fastcall sub_1400AFCE0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 i; // rbx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0xFui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 2ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
				if (v7 >= 0)
				{
					v8 = sub_1403374E0(a2, 40i64 * *(unsigned int*)(a3 + 12));
					*(_QWORD*)(a3 + 16) = v8;
					if (!v8)
						return 2147500037i64;
					for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 12); i = (unsigned int)(i + 1))
					{
						v7 = sub_1400AFA80(a1, v9, (_DWORD*)(*(_QWORD*)(a3 + 16) + 40 * i));
						if (v7 < 0)
							break;
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 1400AFDBF: variable 'v9' is possibly undefined

