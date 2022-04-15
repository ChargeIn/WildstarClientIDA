//----- (00000001400A12D0) ----------------------------------------------------
__int64 __fastcall sub_1400A12D0(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebp
	__int64 v8; // rax
	unsigned int v9; // ebx
	unsigned int v10; // edi
	__int64 v11; // rax

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 32i64 * *a3);
	*((_QWORD*)a3 + 1) = v8;
	if (!v8)
		return 2147500037i64;
	v9 = 0;
	v10 = 0;
	if (*a3)
	{
		do
		{
			v7 = sub_1400A1170(a1, a2, *((_QWORD*)a3 + 1) + 32i64 * v10);
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v10 < *a3);
	}
	v7 = sub_14006C090(a1, a3 + 4, 3ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C090(a1, a3 + 5, 0x20ui64);
		if (v7 >= 0)
		{
			v11 = sub_1403374E0(a2, 32i64 * a3[5]);
			*((_QWORD*)a3 + 3) = v11;
			if (!v11)
				return 2147500037i64;
			if (a3[5])
			{
				do
				{
					v7 = sub_1400A1230(a1, a2, *((_QWORD*)a3 + 3) + 32i64 * v9);
					if (v7 < 0)
						break;
					++v9;
				} while (v9 < a3[5]);
			}
		}
	}
	return (unsigned int)v7;
}

