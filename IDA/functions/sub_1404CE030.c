//----- (00000001404CE030) ----------------------------------------------------
unsigned __int64 __fastcall sub_1404CE030(_QWORD* a1)
{
	unsigned __int64 v2; // rbp
	unsigned __int64 result; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	_QWORD* v6; // rdi

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
					v5 = v4[3];
					v6 = (_QWORD*)*v4;
					if (v5)
						sub_14018B900(v5, 0);
					sub_14018B900((__int64)v4, 0);
					v4 = v6;
				} while (v6);
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

