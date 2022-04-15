//----- (000000014007BDE0) ----------------------------------------------------
__int64 __fastcall sub_14007BDE0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rax

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 24i64 * *(unsigned int*)(a3 + 4));
	*(_QWORD*)(a3 + 8) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0i64;
	v10 = 0;
	if (*(_DWORD*)(a3 + 4))
	{
		do
		{
			v7 = sub_14007B9E0(a1, a2, (_DWORD*)(*(_QWORD*)(a3 + 8) + 24i64 * v10));
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *(_DWORD*)(a3 + 4));
	}
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
	if (v7 >= 0)
	{
		v11 = sub_1403374E0(a2, 48i64 * *(unsigned int*)(a3 + 16));
		*(_QWORD*)(a3 + 24) = v11;
		if (!v11)
			return 2147500037i64;
		if (*(_DWORD*)(a3 + 16))
		{
			do
			{
				v7 = sub_14007BA50(a1, a2, (_DWORD*)(*(_QWORD*)(a3 + 24) + 48 * v9));
				if (v7 < 0)
					break;
				v9 = (unsigned int)(v9 + 1);
			} while ((unsigned int)v9 < *(_DWORD*)(a3 + 16));
		}
	}
	return (unsigned int)v7;
}

