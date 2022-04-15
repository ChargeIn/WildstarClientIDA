//----- (0000000140401510) ----------------------------------------------------
__int64 __fastcall sub_140401510(__int64 a1, int* a2, __int64 a3)
{
	__int64 result; // rax
	int* v7; // rax

	if (*(_QWORD*)(a1 + 72))
		return 1i64;
	v7 = sub_14018B280(48i64, 0);
	if (v7)
	{
		*(_QWORD*)v7 = 0i64;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 4) = 0i64;
		*((_QWORD*)v7 + 5) = 0i64;
	}
	*(_QWORD*)(a1 + 72) = v7;
	result = sub_140402720(a3, a1 + 88, (__int64*)(a1 + 120), a2);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 16i64) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 32i64) = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(*(_QWORD*)(a1 + 72) + 24i64) = *(_DWORD*)(a1 + 128);
	return result;
}

