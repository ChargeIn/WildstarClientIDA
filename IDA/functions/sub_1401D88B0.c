#include "../winhttp.h"

//----- (00000001401D88B0) ----------------------------------------------------
__int64 __fastcall sub_1401D88B0(__int64 a1, int* a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
	__int64 result; // rax
	int* v10; // rax
	int* v11; // rbx
	int v12; // edi
	int* v13; // [rsp+58h] [rbp+20h] BYREF

	if (a4)
	{
		if (!a2 && a3)
			return 2147942487i64;
		v10 = sub_14018B280(32i64, 1u);
		v11 = v10;
		if (!v10)
			return 2147942414i64;
		v10[2] = 1;
		*(_QWORD*)v10 = off_140B5F4F0;
		*((_QWORD*)v10 + 2) = a2;
		*((_QWORD*)v10 + 3) = a3;
	}
	else
	{
		result = sub_1401C5740(a2, a3, &v13);
		if ((int)result < 0)
			return result;
		v11 = v13;
	}
	v12 = (*(__int64(__fastcall**)(__int64, int*, __int64, __int64))(*(_QWORD*)a1 + 120i64))(a1, v11, a4, a5);
	(*(void(__fastcall**)(int*))(*(_QWORD*)v11 + 8i64))(v11);
	if (v12 >= 0)
		return 0i64;
	else
		return (unsigned int)v12;
}
// 140B5F4F0: using guessed type __int64 (__fastcall *off_140B5F4F0[37])();

