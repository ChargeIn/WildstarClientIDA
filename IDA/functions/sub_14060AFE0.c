//----- (000000014060AFE0) ----------------------------------------------------
__int64 __fastcall sub_14060AFE0(int* a1, int a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rsi

	result = sub_1403D90D0(qword_140C65898, a2);
	v6 = result;
	if (!result
		|| (result = *(unsigned int*)(result + 128), (_DWORD)result != 20)
		&& (_DWORD)result != 23
		&& ((result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + 688)), (v6 = result) == 0)
			|| (result = *(unsigned int*)(result + 128), (_DWORD)result != 20) && (_DWORD)result != 23))
	{
		v6 = 0i64;
	}
	if (v6)
	{
		result = qword_140C65898;
		v7 = *(_QWORD*)(qword_140C65898 + 120);
		if (v7)
		{
			if (v6 == v7
				|| (result = (*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 16i64))(a1), (_DWORD)result)
				&& (result = *(_QWORD*)(v7 + 6304)) != 0
				&& *(_QWORD*)(v6 + 6304) == result)
			{
				result = sub_1403C2EE0(v5, a1[3], a2);
				if ((_DWORD)result)
					return (*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 24i64))(a1);
			}
		}
	}
	return result;
}
// 14060B08B: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

