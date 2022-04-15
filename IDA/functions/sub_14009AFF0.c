#include "../winhttp.h"

//----- (000000014009AFF0) ----------------------------------------------------
__int64 __fastcall sub_14009AFF0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	unsigned int i; // ebx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if (v7 >= 0)
		{
			v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if (v7 >= 0)
			{
				v8 = sub_1403374E0(a2, 112i64 * *(unsigned int*)(a3 + 8));
				*(_QWORD*)(a3 + 16) = v8;
				if (!v8)
					return 2147500037i64;
				for (i = 0; i < *(_DWORD*)(a3 + 8); ++i)
				{
					v7 = sub_140099C90(a1, a2, *(_QWORD*)(a3 + 16) + 112i64 * i);
					if (v7 < 0)
						break;
				}
			}
		}
	}
	return (unsigned int)v7;
}

