#include "../winhttp.h"

//----- (00000001400E2220) ----------------------------------------------------
__int64 __fastcall sub_1400E2220(__int64 a1, __int64 a2)
{
	unsigned __int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // r9
	__int64 v6; // r8
	unsigned __int64 v7; // rdi
	int* v8; // rbx
	unsigned __int64 v9; // rbp
	__int64 v10; // r15
	int* v11; // rdx
	__int64 v12; // rcx

	v3 = *(_QWORD*)(a1 + 768);
	result = 0i64;
	if (!v3)
		return result;
	v5 = *(_QWORD*)(a1 + 760);
	v6 = 0i64;
	while (*(_QWORD*)(v5 + 8 * v6) != a2)
	{
		result = (unsigned int)(result + 1);
		v6 = (unsigned int)result;
		if ((unsigned int)result >= v3)
			return result;
	}
	v7 = v3 - 1;
	result = (__int64)sub_1407DB590((int*)(v5 + 8 * result), (int*)(v5 + 8 * result + 8), 8 * (v3 - 1 - result));
	v8 = *(int**)(a1 + 760);
	if (v7)
	{
		if (!v8)
		{
			v9 = v7;
			v10 = 8 * v7 + 16;
			goto LABEL_12;
		}
		if (v7 > *((_QWORD*)v8 - 1))
		{
			v9 = (unsigned __int64)(sub_14018A3E0(8 * v7 + 16) - 16) >> 3;
			v10 = 8 * v9 + 16;
			result = (**((__int64(__fastcall***)(__int64, __int64))v8 - 2))((__int64)(v8 - 4), v10);
			if ((_DWORD)result)
			{
				*((_QWORD*)v8 - 1) = v9;
				goto LABEL_15;
			}
		LABEL_12:
			result = (__int64)sub_14018B280(v10, 0);
			if (result)
			{
				*(_QWORD*)(result + 8) = v9;
				*(_QWORD*)result = off_140B55060;
			}
			v8 = (int*)(result + 16);
		}
	}
LABEL_15:
	v11 = *(int**)(a1 + 760);
	if (v11 != v8)
	{
		result = (__int64)sub_1407DB590(v8, v11, 8 * v7);
		v12 = *(_QWORD*)(a1 + 760);
		if (v12)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		*(_QWORD*)(a1 + 760) = v8;
	}
	*(_QWORD*)(a1 + 768) = v7;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

