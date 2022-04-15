//----- (000000014015CFA0) ----------------------------------------------------
__int64 __fastcall sub_14015CFA0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rbx
	int* v6; // rax

	v3 = a1[23];
	v4 = 0i64;
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[23] = 0i64;
	}
	v6 = sub_14018B280(864i64, 0);
	if (v6)
		v4 = sub_14013FEB0((__int64)v6, *(_QWORD*)(*a1 + 32i64));
	a1[23] = v4;
	if (v4 + 24 != a2)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)(v4 + 24) + 120i64))(v4 + 24, 0i64);
		sub_1401A7460(v4 + 24, a2);
	}
	return sub_1401411C0(v4);
}

