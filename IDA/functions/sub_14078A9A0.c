//----- (000000014078A9A0) ----------------------------------------------------
__int64 __fastcall sub_14078A9A0(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)a1 = off_140B78150;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 16i64) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(*(_QWORD*)(a1 + 72) + 24i64) = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_DWORD*)(a1 + 104) = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	return a1;
}
// 140B78150: using guessed type __int64 (__fastcall *off_140B78150[34])();

