#include "../winhttp.h"

//----- (000000014053A830) ----------------------------------------------------
__int64 sub_14053A830()
{
	__int64 v0; // rsi
	__int64 result; // rax
	unsigned __int64 v2; // rdx
	_QWORD* i; // rcx
	unsigned __int64 v4; // rdi
	int* v5; // rbx
	unsigned __int64 v6; // rbp
	__int64 v7; // r15
	int* v8; // rdx
	__int64 v9; // rcx

	v0 = qword_140C65898;
	result = 0i64;
	v2 = *(_QWORD*)(qword_140C65898 + 29992);
	if (!v2)
		return result;
	for (i = *(_QWORD**)(qword_140C65898 + 29984); qword_140C65A58 != *i; ++i)
	{
		if (++result >= v2)
			return result;
	}
	v4 = v2 - 1;
	result = (__int64)sub_1407DB590(
		(int*)(*(_QWORD*)(qword_140C65898 + 29984) + 8 * result),
		(int*)(*(_QWORD*)(qword_140C65898 + 29984) + 8 * result + 8),
		8 * (v2 - 1 - result));
	v5 = *(int**)(v0 + 29984);
	if (v4)
	{
		if (!v5)
		{
			v6 = v4;
			v7 = 8 * v4 + 16;
			goto LABEL_12;
		}
		if (v4 > *((_QWORD*)v5 - 1))
		{
			v6 = (unsigned __int64)(sub_14018A3E0(8 * v4 + 16) - 16) >> 3;
			v7 = 8 * v6 + 16;
			result = (**((__int64(__fastcall***)(__int64, __int64))v5 - 2))((__int64)(v5 - 4), v7);
			if ((_DWORD)result)
			{
				*((_QWORD*)v5 - 1) = v6;
				goto LABEL_15;
			}
		LABEL_12:
			result = (__int64)sub_14018B280(v7, 0);
			if (result)
			{
				*(_QWORD*)(result + 8) = v6;
				*(_QWORD*)result = off_140B55060;
			}
			v5 = (int*)(result + 16);
		}
	}
LABEL_15:
	v8 = *(int**)(v0 + 29984);
	if (v8 != v5)
	{
		result = (__int64)sub_1407DB590(v5, v8, 8 * v4);
		v9 = *(_QWORD*)(v0 + 29984);
		if (v9)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
		*(_QWORD*)(v0 + 29984) = v5;
	}
	*(_QWORD*)(v0 + 29992) = v4;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A58: using guessed type __int64 qword_140C65A58;

