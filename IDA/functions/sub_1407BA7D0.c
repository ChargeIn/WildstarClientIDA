//----- (00000001407BA7D0) ----------------------------------------------------
__int64 __fastcall sub_1407BA7D0(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	result = *(unsigned int*)(a1 + 8);
	if (v1)
	{
		*(_QWORD*)a1 = off_140B795F0;
		v4 = *(_QWORD*)(a1 + 16);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 16) = 0i64;
		}
		v5 = *(_QWORD*)(a1 + 1216);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
		v6 = *(_QWORD*)(a1 + 904);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}
// 140B795F0: using guessed type __int64 (__fastcall *off_140B795F0[8])();

