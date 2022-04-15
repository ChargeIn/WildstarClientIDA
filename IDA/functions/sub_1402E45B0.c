//----- (00000001402E45B0) ----------------------------------------------------
void __fastcall sub_1402E45B0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rbx

	*a1 = off_140B63490;
	sub_1400B6120(a1[2] + 1784i64, (__int64)(a1 + 5));
	v2 = a1[11];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[11] = 0i64;
	}
	v3 = a1[4];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[4] = 0i64;
	}
	v4 = a1[2];
	if (!_InterlockedDecrement((volatile signed __int32*)(v4 + 12)))
	{
		if (v4)
		{
			sub_1402DB550(v4);
			sub_14018B900(v4, 0);
		}
	}
}
// 140B63490: using guessed type __int64 (__fastcall *off_140B63490[37])();

