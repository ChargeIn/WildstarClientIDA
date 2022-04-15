//----- (00000001400A0DC0) ----------------------------------------------------
__int64 __fastcall sub_1400A0DC0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned int v11; // edi
	unsigned int v12; // esi
	__int64 v13; // rax

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_140337160(a1, (_BYTE*)(a3 + 24), 8i64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C120(a1, (__int64*)(a3 + 40), v8);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 48), 8ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v9 = sub_1403374E0(a2, 32i64 * *(unsigned int*)(a3 + 52));
	*(_QWORD*)(a3 + 56) = v9;
	if (!v9)
		return 2147500037i64;
	v11 = 0;
	v12 = 0;
	if (*(_DWORD*)(a3 + 52))
	{
		do
		{
			v7 = sub_1400A0D20(a1, v10, *(_QWORD*)(a3 + 56) + 32i64 * v12);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v12 < *(_DWORD*)(a3 + 52));
	}
	v7 = sub_14006C090(a1, (_DWORD*)(a3 + 64), 0x20ui64);
	if (v7 >= 0)
	{
		v13 = sub_1403374E0(a2, 16i64 * *(unsigned int*)(a3 + 64));
		*(_QWORD*)(a3 + 72) = v13;
		if (!v13)
			return 2147500037i64;
		if (*(_DWORD*)(a3 + 64))
		{
			do
			{
				v7 = sub_1400A0C90(a1, (__int64)a2, (unsigned int*)(*(_QWORD*)(a3 + 72) + 16i64 * v11));
				if (v7 < 0)
					break;
				++v11;
			} while (v11 < *(_DWORD*)(a3 + 64));
		}
	}
	return (unsigned int)v7;
}
// 1400A0E84: variable 'v8' is possibly undefined
// 1400A0EFE: variable 'v10' is possibly undefined

