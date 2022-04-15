//----- (00000001400CCC20) ----------------------------------------------------
__int64 __fastcall sub_1400CCC20(__int64* a1, _WORD* a2)
{
	int* v4; // rax
	_BYTE* v5; // rdi

	if (!a2 || !*a2)
		return (*(__int64(__fastcall**)(__int64*, _QWORD))(*a1 + 488))(a1, 0i64);
	v4 = sub_14018B280(864i64, 0);
	if (v4)
		v5 = (_BYTE*)sub_14013FEB0((__int64)v4, a1[4]);
	else
		v5 = 0i64;
	v5[826] = 1;
	sub_1401417D0((__int64)v5, (__int64)a2);
	(*(void(__fastcall**)(__int64*, _BYTE*))(*a1 + 488))(a1, v5);
	return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)v5 + 8i64))(v5);
}

