//----- (00000001402E9750) ----------------------------------------------------
void __fastcall sub_1402E9750(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	v1 = a1[2];
	*a1 = off_140B638B8;
	if (v1 && !_InterlockedDecrement((volatile signed __int32*)(v1 + 12)))
	{
		sub_1402E1540(v1);
		sub_14018B900(v1, 0);
	}
	v3 = a1[3];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[3] = 0i64;
	}
	v4 = (_QWORD*)a1[13];
	if (v4)
		*v4 = a1[14];
	v5 = a1[14];
	if (v5)
		*(_QWORD*)(v5 + 104) = a1[13];
	a1[14] = 0i64;
	a1[13] = 0i64;
}
// 1402E9779: conditional instruction was optimized away because rdi.8!=0
// 140B638B8: using guessed type __int64 (__fastcall *off_140B638B8[14])();

