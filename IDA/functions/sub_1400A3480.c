#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A3480) ----------------------------------------------------
__int64 __fastcall sub_1400A3480(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // r8
	__int64 v9; // rax
	unsigned int i; // ebx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 4ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if (v7 >= 0)
			{
				v7 = sub_14006C120(a1, (__int64*)(a3 + 16), v8);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
					if (v7 >= 0)
					{
						v9 = sub_1403374E0(a2, (unsigned __int64)*(unsigned int*)(a3 + 24) << 6);
						*(_QWORD*)(a3 + 32) = v9;
						if (!v9)
							return 2147500037i64;
						for (i = 0; i < *(_DWORD*)(a3 + 24); ++i)
						{
							v7 = sub_1400A32E0(a1, a2, *(_QWORD*)(a3 + 32) + ((unsigned __int64)i << 6));
							if (v7 < 0)
								break;
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 1400A3508: variable 'v8' is possibly undefined

