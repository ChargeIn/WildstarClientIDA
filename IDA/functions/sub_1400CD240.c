//----- (00000001400CD240) ----------------------------------------------------
__int64 __fastcall sub_1400CD240(__int64* a1, __int64 a2)
{
	__int64 result; // rax
	int* v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rbp

	if (!a2)
		return (*(__int64(__fastcall**)(__int64*))(*a1 + 496))(a1);
	v5 = sub_14018B280(864i64, 0);
	if (v5)
		v6 = (_QWORD*)sub_14013FEB0((__int64)v5, a1[4]);
	else
		v6 = 0i64;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	if (v6 + 3 != (_QWORD*)v7)
	{
		(*(void(__fastcall**)(_QWORD*, _QWORD))(v6[3] + 120i64))(v6 + 3, 0i64);
		sub_1401A7460((__int64)(v6 + 3), v7);
	}
	sub_1401411C0((__int64)v6);
	result = (*(__int64(__fastcall**)(__int64*, _QWORD*))(*a1 + 496))(a1, v6);
	if (v6)
		return (*(__int64(__fastcall**)(_QWORD*))(*v6 + 8i64))(v6);
	return result;
}

