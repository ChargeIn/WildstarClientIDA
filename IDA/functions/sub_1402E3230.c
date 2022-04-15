//----- (00000001402E3230) ----------------------------------------------------
void __fastcall sub_1402E3230(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = a1[4];
	*a1 = off_140B63160;
	sub_1400B6120(a1[2] + 1704i64, v2);
	v3 = a1[2];
	if (!_InterlockedDecrement((volatile signed __int32*)(v3 + 12)) && v3)
	{
		sub_1402DB550(v3);
		sub_14018B900(v3, 0);
	}
	v4 = a1[6];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = a1[3];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
}
// 140B63160: using guessed type __int64 (__fastcall *off_140B63160[53])();

