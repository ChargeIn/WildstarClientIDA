//----- (000000014078A550) ----------------------------------------------------
_QWORD* __fastcall sub_14078A550(_QWORD* a1)
{
	int* v2; // rax

	a1[1] = 0i64;
	a1[2] = 0i64;
	*a1 = off_140B78100;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	v2 = sub_14018B280(40i64, 0);
	a1[8] = 0i64;
	a1[7] = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[7] + 8i64) = 0i64;
	*(_QWORD*)(a1[7] + 16i64) = a1[7];
	*(_QWORD*)(a1[7] + 24i64) = a1[7];
	a1[10] = 0i64;
	a1[11] = 0i64;
	return a1;
}
// 140B78100: using guessed type __int64 (__fastcall *off_140B78100[44])();

