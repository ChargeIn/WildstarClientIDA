#include "../winhttp.h"

//----- (00000001400AD750) ----------------------------------------------------
__int64 __fastcall sub_1400AD750(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xAui64);
	if ((int)result >= 0)
	{
		v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		result = sub_140337160(a1, v7, 4i64 * *a3);
		if ((int)result < 0)
			return result;
		v8 = sub_1403374E0(a2, 12i64 * *a3);
		*((_QWORD*)a3 + 2) = v8;
		if (!v8)
			return 2147500037i64;
		v10 = 0i64;
		if (*a3)
		{
			while (1)
			{
				result = sub_1400A8A30(a1, v9, (_DWORD*)(*((_QWORD*)a3 + 2) + 12 * v10));
				if ((int)result < 0)
					break;
				v10 = (unsigned int)(v10 + 1);
				if ((unsigned int)v10 >= *a3)
					goto LABEL_10;
			}
		}
		else
		{
		LABEL_10:
			result = sub_14006C090(a1, a3 + 6, 2ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 7, 0x20ui64);
				if ((int)result >= 0)
					return sub_14006C090(a1, a3 + 8, 1ui64);
			}
		}
	}
	return result;
}
// 1400AD80F: variable 'v9' is possibly undefined

