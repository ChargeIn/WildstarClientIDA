//----- (00000001400A0210) ----------------------------------------------------
__int64 __fastcall sub_1400A0210(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // r8
	unsigned int v10; // esi
	__int64 v11; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 >= 0)
	{
		v8 = sub_1403374E0(a2, 16i64 * *a3);
		*((_QWORD*)a3 + 1) = v8;
		if (!v8)
			return 2147500037i64;
		v10 = 0;
		if (*a3)
		{
			while (1)
			{
				v11 = *((_QWORD*)a3 + 1) + 16i64 * v10;
				if (!v11)
					break;
				v7 = sub_14006C120(a1, (__int64*)v11, v9);
				if (v7 >= 0)
				{
					v7 = sub_14006C090(a1, (_DWORD*)(v11 + 8), 0xEui64);
					if (v7 >= 0)
						v7 = sub_14006C090(a1, (_DWORD*)(v11 + 12), 7ui64);
				}
				if (v7 >= 0 && ++v10 < *a3)
					continue;
				return (unsigned int)v7;
			}
			return (unsigned int)-2147467259;
		}
	}
	return (unsigned int)v7;
}
// 1400A0292: variable 'v9' is possibly undefined

