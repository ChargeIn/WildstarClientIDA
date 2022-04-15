//----- (00000001400B6F30) ----------------------------------------------------
__int64 __fastcall sub_1400B6F30(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	__int64 result; // rax

	*(_QWORD*)a1 = off_140B561F0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 24) = v2;
	*(_QWORD*)(a1 + 32) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 96) = v3;
	*(_QWORD*)(a1 + 104) = v3;
	*(_QWORD*)(a1 + 112) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 128) = v4;
	*(_QWORD*)(a1 + 136) = v4;
	*(_QWORD*)(a1 + 144) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 160) = v5;
	*(_QWORD*)(a1 + 168) = v5;
	*(_QWORD*)(a1 + 176) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	result = a1;
	*(_DWORD*)(a1 + 80) = 1;
	return result;
}
// 140B561F0: using guessed type __int64 (__fastcall *off_140B561F0[2])();

