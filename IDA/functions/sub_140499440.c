//----- (0000000140499440) ----------------------------------------------------
_QWORD* __fastcall sub_140499440(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax

	*a1 = off_140B676E8;
	v2 = sub_14018B280(48i64, 0);
	a1[3] = v2;
	a1[4] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[3] + 8i64) = 0i64;
	*(_QWORD*)(a1[3] + 16i64) = a1[3];
	*(_QWORD*)(a1[3] + 24i64) = a1[3];
	v3 = sub_14018B280(48i64, 0);
	a1[8] = 0i64;
	a1[7] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[7] + 8i64) = 0i64;
	*(_QWORD*)(a1[7] + 16i64) = a1[7];
	*(_QWORD*)(a1[7] + 24i64) = a1[7];
	return a1;
}
// 140B676E8: using guessed type __int64 (__fastcall *off_140B676E8[14])();

