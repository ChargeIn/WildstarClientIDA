//----- (00000001402892A0) ----------------------------------------------------
__int64 __fastcall sub_1402892A0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B61700;
			v3 = *(_QWORD*)(a1 + 16);
			if (v3)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
				*(_QWORD*)(a1 + 16) = 0i64;
			}
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B61700: using guessed type __int64 (__fastcall *off_140B61700[17])();

