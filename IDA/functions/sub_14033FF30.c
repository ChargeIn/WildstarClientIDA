#include "../winhttp.h"

//----- (000000014033FF30) ----------------------------------------------------
__int64 __fastcall sub_14033FF30(__int64 a1, int** a2, _WORD* a3)
{
	__int64 result; // rax
	_WORD* v6; // rdi
	unsigned int i; // ebx
	int* v8; // rax
	int* v9; // rsi
	unsigned int v10; // edi
	unsigned int v11; // ebp
	_WORD* j; // rsi
	int* v13; // rax
	int* v14; // rbx

	if (!a2)
		return 2147942487i64;
	v6 = a3;
	for (i = 0; i < 8; ++i)
	{
		if (*v6)
		{
			v8 = (int*)sub_140343E40(&a3[32 * (unsigned __int64)i]);
			v9 = v8;
			if (v8)
			{
				(**(void(__fastcall***)(int*))v8)(v8);
				*a2 = v9;
				return 0i64;
			}
		}
		v6 += 32;
	}
	v10 = 0;
	v11 = -2147024809;
	for (j = a3; !*j; j += 32)
	{
	LABEL_16:
		if (++v10 >= 8)
			return v11;
	}
	v13 = sub_14018B280(632i64, 0);
	v14 = v13;
	if (v13)
	{
		*(_QWORD*)v13 = off_140B64F30;
		v13[132] = 0;
		v13[136] = -2147024809;
		*((_QWORD*)v13 + 69) = 0i64;
		*((_QWORD*)v13 + 67) = off_140B65328;
		*((_QWORD*)v13 + 70) = 0i64;
		*((_QWORD*)v13 + 71) = 1i64;
		*((_QWORD*)v13 + 72) = 0i64;
		*((_QWORD*)v13 + 73) = 0i64;
		*((_QWORD*)v13 + 74) = 0i64;
		*((_QWORD*)v13 + 77) = 0i64;
		*((_QWORD*)v13 + 78) = 0i64;
		sub_1407E4830(v13 + 2, 0i64, 0x208ui64);
		*((_QWORD*)v14 + 75) = sub_140343C50;
		*((_QWORD*)v14 + 76) = v14;
	}
	else
	{
		v14 = 0i64;
	}
	result = sub_140343D30((__int64)v14, &a3[32 * (unsigned __int64)v10]);
	v11 = result;
	if ((int)result < 0)
	{
		if (v14)
			(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v14 + 56i64))(v14, 1i64);
		goto LABEL_16;
	}
	*a2 = v14;
	return result;
}
// 140B64F30: using guessed type __int64 (__fastcall *off_140B64F30[17])();
// 140B65328: using guessed type __int64 (__fastcall *off_140B65328[13])();

