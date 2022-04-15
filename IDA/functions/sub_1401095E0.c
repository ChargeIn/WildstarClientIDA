//----- (00000001401095E0) ----------------------------------------------------
__int64 __fastcall sub_1401095E0(__int64 a1)
{
	int* v2; // rax
	int v3; // xmm0_4

	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v2;
	*(_QWORD*)(a1 + 32) = v2;
	*(_QWORD*)(a1 + 40) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = dword_140C63664;
	*(_QWORD*)a1 = 0i64;
	*(_DWORD*)(a1 + 12) = 1065353216;
	*(_DWORD*)(a1 + 8) = v3;
	return a1;
}
// 140C63664: using guessed type int dword_140C63664;

