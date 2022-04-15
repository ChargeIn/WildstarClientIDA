#include "../winhttp.h"

//----- (00000001401C1EA0) ----------------------------------------------------
__int64 __fastcall sub_1401C1EA0(_QWORD* a1, unsigned __int64* a2, _QWORD* a3, int** a4)
{
	__int64 v4; // rsi
	unsigned int v5; // edi
	unsigned __int64* v8; // r9
	__int64 v10; // rcx
	__int64 v11; // r15
	__int64 v12; // rbx
	__int64 v13; // rbp
	int v14; // eax
	_QWORD* v16; // rbx
	int* v17; // rax

	v4 = a1[10];
	v5 = 0;
	v8 = a2;
	if (!(_DWORD)v4)
		return 2147943568i64;
	v10 = a1[9];
	v11 = a1[7];
	while (1)
	{
		v12 = v5 + (((unsigned int)v4 - v5) >> 1);
		v13 = *(unsigned int*)(v10 + 4 * v12);
		v14 = sub_1407E6AF0(v8, v11 + 32i64 * (unsigned int)v13 + 4, 0x14ui64);
		if (v14 >= 0)
			break;
		LODWORD(v4) = v5 + (((unsigned int)v4 - v5) >> 1);
	LABEL_7:
		v10 = a1[9];
		v8 = a2;
		if (v5 >= (unsigned int)v4)
			return 2147943568i64;
	}
	if (v14 > 0)
	{
		v5 = v12 + 1;
		goto LABEL_7;
	}
	v16 = (_QWORD*)(v11 + 32 * v13);
	if (a3)
		*a3 = v16[3];
	if (a4)
	{
		v17 = sub_14018B280(56i64, 0);
		if (v17)
		{
			*(_QWORD*)v17 = off_140B5FD60;
			v17[12] = 1;
			*((_QWORD*)v17 + 1) = a1;
			*((_QWORD*)v17 + 2) = *v16;
			*((_QWORD*)v17 + 3) = v16[1];
			*((_QWORD*)v17 + 4) = v16[2];
			*((_QWORD*)v17 + 5) = v16[3];
			*a4 = v17;
			return 0i64;
		}
		*a4 = 0i64;
	}
	return 0i64;
}
// 140B5FD60: using guessed type __int64 (__fastcall *off_140B5FD60[20])();

