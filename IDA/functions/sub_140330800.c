//----- (0000000140330800) ----------------------------------------------------
__int64 __fastcall sub_140330800(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			v3 = *(_QWORD*)(a1 + 24);
			if (v3)
				sub_14018B900(v3, 0);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

