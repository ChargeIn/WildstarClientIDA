//----- (0000000140158DB0) ----------------------------------------------------
__int64 __fastcall sub_140158DB0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	__int64 result; // rax

	*(_WORD*)(a1 + 8) = 1;
	*(_BYTE*)(a1 + 10) = 1;
	*(_QWORD*)a1 = &off_140B5CAE0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v2;
	*(_QWORD*)(a1 + 32) = v2;
	*(_QWORD*)(a1 + 40) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	sub_1401095E0(a1 + 48);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 104) = v3;
	*(_QWORD*)(a1 + 112) = v3;
	*(_QWORD*)(a1 + 120) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v4 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 136) = v4;
	*(_QWORD*)(a1 + 144) = v4;
	*(_QWORD*)(a1 + 152) = v4 + 2;
	if (v4)
		*(_BYTE*)v4 = 0;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 168) = v5;
	*(_QWORD*)(a1 + 176) = v5;
	*(_QWORD*)(a1 + 184) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 200) = v6;
	*(_QWORD*)(a1 + 208) = v6;
	*(_QWORD*)(a1 + 216) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	result = a1;
	*(_QWORD*)(a1 + 224) = 0i64;
	return result;
}
// 140B5CAE0: using guessed type __int64 (__fastcall *off_140B5CAE0)();

