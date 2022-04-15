#include "../winhttp.h"

//----- (0000000140108E00) ----------------------------------------------------
__int64 __fastcall sub_140108E00(_QWORD* a1, int* a2)
{
	__int64 result; // rax
	int* v5; // rdx
	__int64 v6; // [rsp+40h] [rbp+18h] BYREF

	result = sub_140108D20((__int64)a1, a2);
	if (!result)
	{
		result = (__int64)sub_14018B280(88i64, 0);
		if (result)
			result = sub_140103FD0(result, (__int64)a1, a2);
		v5 = (int*)a1[13];
		v6 = result;
		if (v5 == (int*)a1[14])
		{
			sub_14010A1C0(a1 + 11, v5, &v6);
			return v6;
		}
		else
		{
			if (v5)
				*(_QWORD*)v5 = result;
			a1[13] += 8i64;
		}
	}
	return result;
}

