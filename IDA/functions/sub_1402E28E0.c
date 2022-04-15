//----- (00000001402E28E0) ----------------------------------------------------
void __fastcall sub_1402E28E0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rdi
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	*a1 = off_140B63100;
	if (a1[1])
	{
		v2 = (_QWORD*)a1[6];
		if (v2)
			*v2 = a1[7];
		v3 = a1[7];
		if (v3)
			*(_QWORD*)(v3 + 48) = a1[6];
		v4 = (_QWORD*)a1[1];
		a1[6] = 0i64;
		a1[7] = 0i64;
		if (!v4[228])
			(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD))(*v4 + 240i64))(v4, 0i64, 0i64);
		v5 = a1[1];
		if (!_InterlockedDecrement((volatile signed __int32*)(v5 + 12)) && v5)
		{
			sub_1402DB550(v5);
			sub_14018B900(v5, 0);
		}
	}
	v6 = (_QWORD*)a1[6];
	if (v6)
		*v6 = a1[7];
	v7 = a1[7];
	if (v7)
		*(_QWORD*)(v7 + 48) = a1[6];
	a1[7] = 0i64;
	a1[6] = 0i64;
}
// 140B63100: using guessed type __int64 (__fastcall *off_140B63100[11])();

