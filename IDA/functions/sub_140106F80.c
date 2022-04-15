//----- (0000000140106F80) ----------------------------------------------------
__int64 __fastcall sub_140106F80(__int64 a1, __int64 a2)
{
	int* v3; // rax
	int* v4; // rax
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 16) = 4;
	*(_BYTE*)(a1 + 20) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)a1 = off_140B56B00;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 64) = v3;
	*(_QWORD*)(a1 + 72) = v3;
	*(_QWORD*)(a1 + 80) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 96) = v4;
	*(_QWORD*)(a1 + 104) = v4;
	*(_QWORD*)(a1 + 112) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_DWORD*)(a1 + 120) = 64;
	*(_QWORD*)(a1 + 124) = 64i64;
	result = a1;
	*(_DWORD*)(a1 + 132) = 0;
	return result;
}
// 140B56B00: using guessed type __int64 (__fastcall *off_140B56B00[9])();

