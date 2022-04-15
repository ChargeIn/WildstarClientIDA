//----- (00000001402B2710) ----------------------------------------------------
__int64 __fastcall sub_1402B2710(__int64* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *a1;
	if (v2)
	{
		sub_14018B900(v2, 0);
		result = 0i64;
		*a1 = 0i64;
	}
	else
	{
		result = 0i64;
	}
	a1[1] = 0i64;
	return result;
}

