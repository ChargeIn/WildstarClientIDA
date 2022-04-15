#include "../winhttp.h"

//----- (00000001401340D0) ----------------------------------------------------
_QWORD* __fastcall sub_1401340D0(__int64 a1, __int64 a2)
{
	int* v3; // rdx
	__int64 v5; // rax
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rsi

	v3 = (int*)&word_140B7B704;
	if (a2)
		v3 = (int*)a2;
	v5 = 0i64;
	if (*(_WORD*)v3)
	{
		do
			++v5;
		while (*((_WORD*)v3 + v5));
	}
	sub_14001C480(a1 + 96, v3, (int*)((char*)v3 + 2 * v5));
	result = *(_QWORD**)(a1 + 168);
	v7 = (_QWORD*)result[2];
	if (v7 != result)
	{
		do
		{
			sub_1401852B0(v7[8], a1, a2);
			v8 = v7[3];
			if (v8)
			{
				v7 = (_QWORD*)v7[3];
				for (result = *(_QWORD**)(v8 + 16); result; result = (_QWORD*)result[2])
					v7 = result;
			}
			else
			{
				for (result = (_QWORD*)v7[1]; v7 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v7 = result;
				if ((_QWORD*)v7[3] != result)
					v7 = result;
			}
		} while (v7 != *(_QWORD**)(a1 + 168));
	}
	v9 = a1 + 160;
	if (*(_QWORD*)(v9 + 16))
	{
		v10 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64);
		if (v10)
		{
			do
			{
				sub_140044CA0(v9, *(_QWORD**)(v10 + 24));
				v11 = *(_QWORD*)(v10 + 40);
				v12 = *(_QWORD*)(v10 + 16);
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900(v10, 0);
				v10 = v12;
			} while (v12);
		}
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 16i64) = *(_QWORD*)(v9 + 8);
		*(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v9 + 8);
		result[3] = result;
		*(_QWORD*)(v9 + 16) = 0i64;
	}
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

