//----- (000000014019F790) ----------------------------------------------------
__int64 __fastcall sub_14019F790(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5E7D0;
			sub_14018B900(*(_QWORD*)(a1 + 72), 0);
			v3 = *(_QWORD*)(a1 + 88);
			if (v3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			v4 = *(_QWORD*)(a1 + 80);
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5E7D0: using guessed type __int64 (__fastcall *off_140B5E7D0[8])();

