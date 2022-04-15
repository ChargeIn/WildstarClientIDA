//----- (0000000140283FC0) ----------------------------------------------------
__int64 __fastcall sub_140283FC0(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			sub_140283200(a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

