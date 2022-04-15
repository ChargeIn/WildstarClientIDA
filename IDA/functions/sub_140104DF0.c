//----- (0000000140104DF0) ----------------------------------------------------
__int64 __fastcall sub_140104DF0(__int64* a1)
{
	__int64 result; // rax
	int* v3; // rdx
	__int64 v4; // [rsp+40h] [rbp+8h] BYREF

	result = (a1[5] - a1[4]) >> 3;
	if (!(_DWORD)result)
	{
		result = (__int64)sub_14018B280(120i64, 0);
		if (result)
			result = sub_140100930(result, *(_QWORD*)(a1[1] + 16), a1[1], dword_1409D4EF4, 0);
		v3 = (int*)a1[5];
		v4 = result;
		if (v3 == (int*)a1[6])
		{
			return (__int64)sub_1400B9430(a1 + 3, v3, &v4);
		}
		else
		{
			if (v3)
				*(_QWORD*)v3 = result;
			a1[5] += 8i64;
		}
	}
	return result;
}
// 1409D4EF4: using guessed type int dword_1409D4EF4[16];

