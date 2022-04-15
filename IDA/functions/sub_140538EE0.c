#include "../winhttp.h"

//----- (0000000140538EE0) ----------------------------------------------------
void __fastcall sub_140538EE0(__int64 a1, __int64* a2, _QWORD* a3, _QWORD* a4)
{
	_QWORD* v4; // rbx
	__int64 v6; // rdi
	int* v7; // rsi
	_QWORD* v8; // [rsp+50h] [rbp+18h]

	if (a3 != a4)
	{
		v8 = a3;
		v4 = a3;
		do
		{
			v6 = *a2;
			v7 = sub_14018B280(40i64, 0);
			if (v7 != (int*)-16i64)
			{
				v7[4] = *((_DWORD*)v4 + 4);
				sub_1403FE910((__int64*)v7 + 3, (__int64)(v4 + 3));
			}
			*(_QWORD*)v7 = v6;
			*((_QWORD*)v7 + 1) = *(_QWORD*)(v6 + 8);
			**(_QWORD**)(v6 + 8) = v7;
			*(_QWORD*)(v6 + 8) = v7;
			v4 = (_QWORD*)*v8;
			v8 = v4;
		} while (v4 != a4);
	}
}

