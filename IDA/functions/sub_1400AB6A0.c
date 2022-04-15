//----- (00000001400AB6A0) ----------------------------------------------------
__int64 __fastcall sub_1400AB6A0(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rsi
	unsigned int v11; // edi
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, a3, 0x20ui64);
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = sub_1403374E0(a2, 12i64 * *a3);
	*((_QWORD*)a3 + 1) = v8;
	if (!v8)
		return 2147500037i64;
	v10 = 0i64;
	v11 = 0;
	if (*a3)
	{
		do
		{
			v7 = sub_1400AB410(a1, v9, (_DWORD*)(*((_QWORD*)a3 + 1) + 12i64 * v11));
			if (v7 < 0)
				return (unsigned int)v7;
		} while (++v11 < *a3);
	}
	v7 = sub_14006C090(a1, a3 + 4, 0x20ui64);
	if (v7 >= 0)
	{
		v12 = sub_1403374E0(a2, 12i64 * a3[4]);
		*((_QWORD*)a3 + 3) = v12;
		if (!v12)
			return 2147500037i64;
		if (a3[4])
		{
			while (1)
			{
				v13 = *((_QWORD*)a3 + 3);
				v14 = v13 + 12 * v10;
				if (!v14)
					break;
				v7 = sub_14006C1C0(a1, (_DWORD*)(v13 + 12 * v10));
				if (v7 >= 0)
				{
					v7 = sub_14006C1C0(a1, (_DWORD*)(v14 + 4));
					if (v7 >= 0)
						v7 = sub_14006C090(a1, (_DWORD*)(v14 + 8), 1ui64);
				}
				if (v7 >= 0)
				{
					v10 = (unsigned int)(v10 + 1);
					if ((unsigned int)v10 < a3[4])
						continue;
				}
				return (unsigned int)v7;
			}
			return (unsigned int)-2147467259;
		}
	}
	return (unsigned int)v7;
}
// 1400AB731: variable 'v9' is possibly undefined

