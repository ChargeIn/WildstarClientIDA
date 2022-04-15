//----- (00000001400AC9D0) ----------------------------------------------------
__int64 __fastcall sub_1400AC9D0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // edi
	__int64 v8; // rax
	unsigned int v9; // ebx
	unsigned int v10; // esi
	__int64 v11; // rax

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C120(a1, (__int64*)a3, a3);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 88i64 * *(unsigned int*)(a3 + 8));
	*(_QWORD*)(a3 + 16) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0;
	v10 = 0;
	if (*(_DWORD*)(a3 + 8))
	{
		do
		{
			v7 = sub_1400AC130(a1, a2, *(_QWORD*)(a3 + 16) + 88i64 * v10);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *(_DWORD*)(a3 + 8));
	}
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
	if (v7 >= 0)
	{
		v11 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 24));
		*(_QWORD*)(a3 + 32) = v11;
		if (!v11)
			return 2147500037i64;
		if (*(_DWORD*)(a3 + 24))
		{
			do
			{
				v7 = sub_1400AC590(a1, a2, *(_QWORD*)(a3 + 32) + 16i64 * v9);
				if (v7 < 0)
					break;
				++v9;
			} while (v9 < *(_DWORD*)(a3 + 24));
		}
	}
	return (unsigned int)v7;
}

