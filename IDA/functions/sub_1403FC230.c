//----- (00000001403FC230) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403FC230(_QWORD* a1)
{
	unsigned __int64 v2; // rsi
	unsigned __int64 result; // rax
	_QWORD* v4; // rcx
	_QWORD* v5; // rbx

	v2 = 0i64;
	result = (__int64)(a1[3] - a1[2]) >> 3;
	if (result)
	{
		do
		{
			v4 = *(_QWORD**)(a1[2] + 8 * v2);
			if (v4)
			{
				do
				{
					v5 = (_QWORD*)*v4;
					sub_14018B900((__int64)v4, 0);
					v4 = v5;
				} while (v5);
			}
			++v2;
			*(_QWORD*)(a1[2] + 8 * v2 - 8) = 0i64;
			result = (__int64)(a1[3] - a1[2]) >> 3;
		} while (v2 < result);
		a1[5] = 0i64;
	}
	else
	{
		a1[5] = 0i64;
	}
	return result;
}

