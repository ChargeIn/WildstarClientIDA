//----- (00000001402ACAD0) ----------------------------------------------------
__int64 __fastcall sub_1402ACAD0(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 24));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			sub_1402AC840(a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

