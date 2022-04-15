#include "../winhttp.h"

//----- (0000000140091450) ----------------------------------------------------
__int64 __fastcall sub_140091450(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned int v10; // esi
	__int64 v11; // rax

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C120(a1, (__int64*)a3, a3);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 1ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 12));
	*(_QWORD*)(a3 + 16) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0i64;
	v10 = 0;
	if (*(_DWORD*)(a3 + 12))
	{
		do
		{
			v7 = sub_140336A40(a1, a2, (_QWORD*)(*(_QWORD*)(a3 + 16) + 8i64 * v10));
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *(_DWORD*)(a3 + 12));
	}
	v11 = sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 12));
	*(_QWORD*)(a3 + 24) = v11;
	if (!v11)
		return 2147500037i64;
	if (*(_DWORD*)(a3 + 12))
	{
		do
		{
			v7 = sub_14006C090(a1, (_DWORD*)(*(_QWORD*)(a3 + 24) + 4 * v9), 1ui64);
			if (v7 < 0)
				break;
			v9 = (unsigned int)(v9 + 1);
		} while ((unsigned int)v9 < *(_DWORD*)(a3 + 12));
	}
	return (unsigned int)v7;
}

