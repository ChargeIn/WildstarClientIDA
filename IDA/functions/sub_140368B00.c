//----- (0000000140368B00) ----------------------------------------------------
__int64 __fastcall sub_140368B00(__int64 a1, _OWORD* a2, _WORD* a3, _QWORD* a4, __int64* a5, __int64 a6)
{
	int* v10; // rax
	__int64 v11; // rbx
	int v12; // esi

	if (!a3 || !*a3 || !a5)
		return 2147942487i64;
	v10 = sub_14018B280(1312i64, 0);
	if (v10)
		v11 = sub_1403757E0((__int64)v10, a1);
	else
		v11 = 0i64;
	v12 = sub_140376D60(v11, a2, (__int64)a3, a4, a6);
	if (v12 >= 0)
	{
		*a5 = v11;
		return 0i64;
	}
	else
	{
		if (v11)
		{
			sub_140375B60(v11);
			sub_14018B900(v11, 0);
		}
		return (unsigned int)v12;
	}
}

