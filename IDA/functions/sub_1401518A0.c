#include "../winhttp.h"

//----- (00000001401518A0) ----------------------------------------------------
_QWORD* __fastcall sub_1401518A0(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rsi

	result = *(_QWORD**)(a1 + 24);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = v3[8];
			if (v4)
			{
				sub_140151660(v3[8]);
				sub_14018B900(v4, 0);
			}
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v5 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 24));
	}
	v6 = a1 + 16;
	if (*(_QWORD*)(a1 + 32))
	{
		v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8i64);
		if (v7)
		{
			do
			{
				sub_140044CA0(v6, *(_QWORD**)(v7 + 24));
				v8 = *(_QWORD*)(v7 + 40);
				v9 = *(_QWORD*)(v7 + 16);
				if (v8)
					sub_14018B900(v8, 0);
				sub_14018B900(v7, 0);
				v7 = v9;
			} while (v9);
		}
		*(_QWORD*)(*(_QWORD*)(v6 + 8) + 16i64) = *(_QWORD*)(v6 + 8);
		*(_QWORD*)(*(_QWORD*)(v6 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v6 + 8);
		result[3] = result;
		*(_QWORD*)(v6 + 16) = 0i64;
	}
	return result;
}

