//----- (00000001400A3900) ----------------------------------------------------
__int64 __fastcall sub_1400A3900(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rsi
	unsigned int v9; // edi
	_BYTE* v10; // rax
	__int64 v11; // rax
	_BYTE* v12; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		v7 = sub_1403374E0(a2, 60i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (v7)
		{
			v8 = 0i64;
			v9 = 0;
			if (*a3)
			{
				do
				{
					result = sub_1400A3850(a1, (__int64)a2, *((_QWORD*)a3 + 1) + 60i64 * v9);
					if ((int)result < 0)
						return result;
				} while (++v9 < *a3);
			}
			result = sub_14006C090(a1, a3 + 4, 0x20ui64);
			if ((int)result < 0)
				return result;
			v10 = (_BYTE*)sub_1403374E0(a2, 4i64 * a3[4]);
			*((_QWORD*)a3 + 3) = v10;
			if (v10)
			{
				result = sub_140337160(a1, v10, 4i64 * a3[4]);
				if ((int)result < 0)
					return result;
				result = sub_14006C090(a1, a3 + 8, 0x20ui64);
				if ((int)result < 0)
					return result;
				v11 = sub_1403374E0(a2, 12i64 * a3[8]);
				*((_QWORD*)a3 + 5) = v11;
				if (v11)
				{
					if (a3[8])
					{
						do
						{
							result = sub_140081DF0(a1, (__int64)a2, (_DWORD*)(*((_QWORD*)a3 + 5) + 12 * v8));
							if ((int)result < 0)
								return result;
							v8 = (unsigned int)(v8 + 1);
						} while ((unsigned int)v8 < a3[8]);
					}
					result = sub_14006C090(a1, a3 + 12, 0x20ui64);
					if ((int)result < 0)
						return result;
					v12 = (_BYTE*)sub_1403374E0(a2, 4i64 * a3[12]);
					*((_QWORD*)a3 + 7) = v12;
					if (v12)
					{
						result = sub_140337160(a1, v12, 4i64 * a3[12]);
						if ((int)result >= 0)
							return sub_14006C090(a1, a3 + 16, 0x20ui64);
						return result;
					}
				}
			}
		}
		return 2147500037i64;
	}
	return result;
}

