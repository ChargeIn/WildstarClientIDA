#include "../winhttp.h"

//----- (0000000140081F60) ----------------------------------------------------
__int64 __fastcall sub_140081F60(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	__int64 v8; // rax
	__int64 i; // rbx
	_BYTE* v10; // rax
	_BYTE* v11; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (v7)
		{
			result = sub_140337160(a1, v7, 4i64 * *a3);
			if ((int)result < 0)
				return result;
			result = sub_14006C090(a1, a3 + 4, 0x20ui64);
			if ((int)result < 0)
				return result;
			v8 = sub_1403374E0(a2, 8i64 * a3[4]);
			*((_QWORD*)a3 + 3) = v8;
			if (v8)
			{
				for (i = 0i64; (unsigned int)i < a3[4]; i = (unsigned int)(i + 1))
				{
					result = sub_140081F00(a1, (__int64)a2, (_DWORD*)(*((_QWORD*)a3 + 3) + 8 * i));
					if ((int)result < 0)
						return result;
				}
				result = sub_14006C090(a1, a3 + 8, 0x20ui64);
				if ((int)result < 0)
					return result;
				v10 = (_BYTE*)sub_1403374E0(a2, 4i64 * a3[8]);
				*((_QWORD*)a3 + 5) = v10;
				if (v10)
				{
					result = sub_140337160(a1, v10, 4i64 * a3[8]);
					if ((int)result < 0)
						return result;
					result = sub_14006C090(a1, a3 + 12, 0x20ui64);
					if ((int)result < 0)
						return result;
					v11 = (_BYTE*)sub_1403374E0(a2, 4i64 * a3[12]);
					*((_QWORD*)a3 + 7) = v11;
					if (v11)
						return sub_140337160(a1, v11, 4i64 * a3[12]);
				}
			}
		}
		return 2147500037i64;
	}
	return result;
}

