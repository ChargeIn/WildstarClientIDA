//----- (000000014008F2D0) ----------------------------------------------------
__int64 __fastcall sub_14008F2D0(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rsi
	unsigned int v9; // edi
	__int64 v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rax
	unsigned int v13; // edi
	__int64 v14; // rax
	__int64 v15; // rbp
	__int64 v16; // rax
	__int64 v17; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		v7 = sub_1403374E0(a2, 8i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		v8 = 0i64;
		v9 = 0;
		if (*a3)
		{
			do
			{
				v10 = *((_QWORD*)a3 + 1);
				v11 = v10 + 8i64 * v9;
				if (!v11)
					return 2147500037i64;
				result = sub_14006C090(a1, (_DWORD*)(v10 + 8i64 * v9), 0xFui64);
				if ((int)result < 0)
					return result;
				result = sub_14006C090(a1, (_DWORD*)(v11 + 4), 1ui64);
				if ((int)result < 0)
					return result;
			} while (++v9 < *a3);
		}
		result = sub_14006C090(a1, a3 + 4, 0x20ui64);
		if ((int)result >= 0)
		{
			v12 = sub_1403374E0(a2, 8i64 * a3[4]);
			*((_QWORD*)a3 + 3) = v12;
			if (!v12)
				return 2147500037i64;
			v13 = 0;
			if (a3[4])
			{
				do
				{
					v14 = *((_QWORD*)a3 + 3);
					v15 = v14 + 8i64 * v13;
					if (!v15)
						return 2147500037i64;
					result = sub_14006C090(a1, (_DWORD*)(v14 + 8i64 * v13), 0xFui64);
					if ((int)result < 0)
						return result;
					result = sub_14006C090(a1, (_DWORD*)(v15 + 4), 4ui64);
					if ((int)result < 0)
						return result;
				} while (++v13 < a3[4]);
			}
			result = sub_14006C090(a1, a3 + 8, 0x20ui64);
			if ((int)result >= 0)
			{
				v16 = sub_1403374E0(a2, 48i64 * a3[8]);
				*((_QWORD*)a3 + 5) = v16;
				if (v16)
				{
					if (!a3[8])
						return sub_14006C120(a1, (__int64*)a3 + 6, v17);
					while (1)
					{
						result = sub_14008F170(a1, a2, *((_QWORD*)a3 + 5) + 48 * v8);
						if ((int)result < 0)
							break;
						v8 = (unsigned int)(v8 + 1);
						if ((unsigned int)v8 >= a3[8])
							return sub_14006C120(a1, (__int64*)a3 + 6, v17);
					}
					return result;
				}
				return 2147500037i64;
			}
		}
	}
	return result;
}
// 14008F489: variable 'v17' is possibly undefined

