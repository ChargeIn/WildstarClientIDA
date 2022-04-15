//----- (00000001403688A0) ----------------------------------------------------
__int64 __fastcall sub_1403688A0(
	__int64 a1,
	int a2,
	__int64 a3,
	void(__fastcall*** a4)(_QWORD),
	int a5,
	int a6,
	__int64* a7,
	int a8)
{
	int* v13; // rax
	__int64 v14; // rbx
	int v15; // esi

	if (!a7)
		return 2147942487i64;
	v13 = sub_14018B280(1200i64, 0);
	if (v13)
		v14 = sub_14038AA40((__int64)v13, a1);
	else
		v14 = 0i64;
	v15 = sub_14038B170(v14, a2, a3, a4, a5, a6, a8);
	if (v15 >= 0)
	{
		*a7 = v14;
		return 0i64;
	}
	else
	{
		if (v14)
		{
			sub_14038ACF0(v14);
			sub_14018B900(v14, 0);
		}
		return (unsigned int)v15;
	}
}

