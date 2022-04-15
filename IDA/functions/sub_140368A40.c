//----- (0000000140368A40) ----------------------------------------------------
__int64 __fastcall sub_140368A40(
	__int64 a1,
	_OWORD* a2,
	void(__fastcall*** a3)(_QWORD),
	_QWORD* a4,
	_QWORD* a5,
	__int64 a6)
{
	int* v11; // rax
	_QWORD* v12; // rbx
	int v13; // esi

	if (!a5)
		return 2147942487i64;
	v11 = sub_14018B280(1312i64, 0);
	if (v11)
		v12 = (_QWORD*)sub_1403757E0((__int64)v11, a1);
	else
		v12 = 0i64;
	v13 = sub_140376C10(v12, a2, a3, a4, a6);
	if (v13 >= 0)
	{
		*a5 = v12;
		return 0i64;
	}
	else
	{
		if (v12)
		{
			sub_140375B60((__int64)v12);
			sub_14018B900((__int64)v12, 0);
		}
		return (unsigned int)v13;
	}
}

