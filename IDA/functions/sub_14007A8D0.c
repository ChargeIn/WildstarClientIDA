//----- (000000014007A8D0) ----------------------------------------------------
__int64 __fastcall sub_14007A8D0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned int v9; // esi
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0xEui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 12));
	*(_QWORD*)(a3 + 16) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0;
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
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
	if (v7 >= 0)
	{
		v11 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 24));
		*(_QWORD*)(a3 + 32) = v11;
		if (!v11)
			return 2147500037i64;
		if (*(_DWORD*)(a3 + 24))
		{
			while (1)
			{
				v12 = *(_QWORD*)(a3 + 32) + 16i64 * v9;
				if (!v12)
					break;
				v7 = sub_140336A40(a1, a2, (_QWORD*)v12);
				if (v7 >= 0)
					v7 = sub_14006C090(a1, (_DWORD*)(v12 + 8), 0x20ui64);
				if (v7 >= 0 && ++v9 < *(_DWORD*)(a3 + 24))
					continue;
				return (unsigned int)v7;
			}
			return (unsigned int)-2147467259;
		}
	}
	return (unsigned int)v7;
}

