//----- (00000001400CCB50) ----------------------------------------------------
__int64 __fastcall sub_1400CCB50(__int64* a1, int* a2)
{
	int* v4; // rax
	int* v5; // rdi
	_BYTE* v6; // rsi
	__int64 v7; // rax
	int* v8; // r8

	if (!a2 || !*(_WORD*)a2)
		return (*(__int64(__fastcall**)(__int64*, _QWORD))(*a1 + 488))(a1, 0i64);
	v4 = sub_14018B280(864i64, 0);
	v5 = 0i64;
	if (v4)
		v6 = (_BYTE*)sub_14013FEB0((__int64)v4, a1[4]);
	else
		v6 = 0i64;
	v6[826] = 1;
	v7 = a1[85];
	if (v7)
		v8 = *(int**)(v7 + 48);
	else
		v8 = 0i64;
	if (v7)
		v5 = *(int**)(v7 + 80);
	sub_140141600((__int64)v6, a2, v8, v5);
	(*(void(__fastcall**)(__int64*, _BYTE*))(*a1 + 488))(a1, v6);
	return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)v6 + 8i64))(v6);
}

