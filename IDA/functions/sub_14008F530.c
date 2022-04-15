#include "../winhttp.h"

//----- (000000014008F530) ----------------------------------------------------
__int64 __fastcall sub_14008F530(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned int v9; // esi
	unsigned int* v10; // rdi

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
			v9 = 0;
			if (*(_DWORD*)(a3 + 4))
			{
				while (1)
				{
					v10 = (unsigned int*)(*(_QWORD*)(a3 + 8) + 16i64 * v9);
					if (!v10)
						break;
					v7 = sub_14006C090(a1, v10, 0x20ui64);
					if (v7 >= 0)
						v7 = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14008F60F[*v10])(a1, (__int64)a2, v10 + 2);
					if (v7 >= 0 && ++v9 < *(_DWORD*)(a3 + 4))
						continue;
					return (unsigned int)v7;
				}
				return (unsigned int)-2147467259;
			}
		}
	}
	return (unsigned int)v7;
}
// 140C1EB98: using guessed type __int64 (__fastcall *funcs_14008F60F[6])();

