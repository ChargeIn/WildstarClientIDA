//----- (0000000140492DA0) ----------------------------------------------------
void __fastcall sub_140492DA0(_QWORD* a1)
{
	__int64 v2; // rcx
	_QWORD** v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rcx

	*a1 = off_140B673A8;
	v2 = a1[14];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	sub_140008410((__int64)(a1 + 8));
	sub_14018B900(a1[9], 0);
	v3 = (_QWORD**)a1[7];
	v4 = *v3;
	if (*v3 != v3)
	{
		do
		{
			v5 = (__int64)v4;
			v4 = (_QWORD*)*v4;
			sub_14018B900(v5, 0);
		} while (v4 != (_QWORD*)a1[7]);
	}
	*(_QWORD*)a1[7] = a1[7];
	*(_QWORD*)(a1[7] + 8i64) = a1[7];
	sub_14018B900(a1[7], 0);
	sub_140008410((__int64)(a1 + 2));
	sub_14018B900(a1[3], 0);
}
// 140B673A8: using guessed type __int64 (__fastcall *off_140B673A8[10])();

