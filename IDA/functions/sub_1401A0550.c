//----- (00000001401A0550) ----------------------------------------------------
__int64 __fastcall sub_1401A0550(__int64 a1)
{
	__int64 result; // rax
	void* v3; // rcx
	void* v4; // rcx
	void* v5; // rcx
	__int64 v6; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5E728;
			v3 = *(void**)(a1 + 24);
			if (v3)
				CloseHandle(v3);
			v4 = *(void**)(a1 + 40);
			if (v4)
				CloseHandle(v4);
			v5 = *(void**)(a1 + 48);
			if (v5)
				CloseHandle(v5);
			v6 = *(_QWORD*)(a1 + 16);
			if (v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5E728: using guessed type __int64 (__fastcall *off_140B5E728[2])();

