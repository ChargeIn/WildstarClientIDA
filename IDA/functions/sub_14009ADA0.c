#include "../winhttp.h"

//----- (000000014009ADA0) ----------------------------------------------------
__int64 __fastcall sub_14009ADA0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int i; // ebx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x12ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if (v7 >= 0)
		{
			v7 = sub_140337160(a1, (_BYTE*)(a3 + 8), 24i64);
			if (v7 >= 0)
			{
				v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
				if (v7 >= 0)
				{
					v7 = sub_140337160(a1, (_BYTE*)(a3 + 40), 24i64);
					if (v7 >= 0)
					{
						v7 = sub_14006C090(a1, (_DWORD*)(a3 + 64), 0x20ui64);
						if (v7 >= 0)
						{
							v8 = sub_1403374E0(a2, 56i64 * *(unsigned int*)(a3 + 64));
							*(_QWORD*)(a3 + 72) = v8;
							if (!v8)
								return 2147500037i64;
							for (i = 0; i < *(_DWORD*)(a3 + 64); ++i)
							{
								v7 = sub_140099BB0(a1, v9, *(_QWORD*)(a3 + 72) + 56i64 * i);
								if (v7 < 0)
									break;
							}
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 14009AEAE: variable 'v9' is possibly undefined

