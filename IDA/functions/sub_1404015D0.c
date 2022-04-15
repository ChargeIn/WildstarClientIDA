//----- (00000001404015D0) ----------------------------------------------------
__int64 __fastcall sub_1404015D0(__int64 a1, int* a2, __int64 a3)
{
	__int64 result; // rax
	int* v7; // rax

	if (*(_QWORD*)(a1 + 80))
		return 1i64;
	v7 = sub_14018B280(56i64, 0);
	if (v7)
	{
		*(_QWORD*)v7 = 0i64;
		*((_QWORD*)v7 + 1) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
		*((_QWORD*)v7 + 4) = 0i64;
		*((_QWORD*)v7 + 5) = 0i64;
		*((_QWORD*)v7 + 6) = 0i64;
	}
	*(_QWORD*)(a1 + 80) = v7;
	result = sub_140402720(a3, a1 + 88, (__int64*)(a1 + 120), a2);
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 16i64) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(*(_QWORD*)(a1 + 80) + 32i64) = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(*(_QWORD*)(a1 + 80) + 24i64) = *(_DWORD*)(a1 + 128);
	return result;
}

