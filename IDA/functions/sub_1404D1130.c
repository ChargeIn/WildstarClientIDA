//----- (00000001404D1130) ----------------------------------------------------
_QWORD* __fastcall sub_1404D1130(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rax

	*a1 = off_140B69030;
	v2 = sub_14018B280(48i64, 0);
	a1[2] = v2;
	a1[3] = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(a1[2] + 8i64) = 0i64;
	*(_QWORD*)(a1[2] + 16i64) = a1[2];
	*(_QWORD*)(a1[2] + 24i64) = a1[2];
	v3 = sub_14018B280(48i64, 0);
	a1[7] = 0i64;
	a1[6] = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(a1[6] + 8i64) = 0i64;
	*(_QWORD*)(a1[6] + 16i64) = a1[6];
	*(_QWORD*)(a1[6] + 24i64) = a1[6];
	a1[10] = 0i64;
	a1[9] = 0i64;
	a1[12] = 0i64;
	a1[11] = 0i64;
	a1[14] = 0i64;
	a1[13] = 0i64;
	a1[16] = 0i64;
	a1[15] = 0i64;
	a1[18] = 0i64;
	a1[17] = 0i64;
	return a1;
}
// 140B69030: using guessed type __int64 (__fastcall *off_140B69030[21])();
