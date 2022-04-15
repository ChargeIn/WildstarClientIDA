#include "../winhttp.h"

//----- (00000001406A4360) ----------------------------------------------------
void sub_1406A4360(__int64 a1, LARGE_INTEGER* a2, _BYTE* a3, ...)
{
	__int64 v4; // r13
	int* v5; // r14
	int* v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rax
	int* v9; // rbp
	__int64 v10; // rdi
	unsigned __int64 v11; // rdi
	int* v12; // rdx
	__int64 v13; // rax
	va_list va; // [rsp+88h] [rbp+20h] BYREF

	va_start(va, a3);
	v4 = *(_QWORD*)(qword_140C65898 + 29504);
	if (a2->QuadPart && *(int*)(a2->QuadPart + 536) >= 6)
	{
		v5 = (int*)&word_140B7B704;
		v6 = (int*)&word_140B7B704;
		if (*(_QWORD*)(qword_140C63650 + 784))
			v6 = *(int**)(qword_140C63650 + 784);
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		if (*(_WORD*)v6)
		{
			do
				++v8;
			while (*((_WORD*)v6 + v8));
		}
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v9 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v9, v6, v11);
		if ((int*)((char*)v9 + v11))
			*(_WORD*)((char*)v9 + v11) = 0;
		v12 = (int*)&word_140B7B704;
		v13 = 0i64;
		if (*(_QWORD*)(a2->QuadPart + 160))
			v12 = *(int**)(a2->QuadPart + 160);
		if (*(_WORD*)v12)
		{
			do
				++v13;
			while (*((_WORD*)v12 + v13));
		}
		sub_14001C480(qword_140C63650 + 776, v12, (int*)((char*)v12 + 2 * v13));
		sub_1400F3040(v4 + 384, *a2, a2[2].LowPart, a2[1].QuadPart, a3, va);
		if (v9)
			v5 = v9;
		if (*(_WORD*)v5)
		{
			do
				++v7;
			while (*((_WORD*)v5 + v7));
		}
		sub_14001C480(qword_140C63650 + 776, v5, (int*)((char*)v5 + 2 * v7));
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

