//----- (0000000140368CD0) ----------------------------------------------------
__int64 __fastcall sub_140368CD0(__int64 a1, _OWORD* a2, __int64 a3, int a4, int a5, int** a6)
{
	int* v11; // rax
	int* v12; // rbx
	int v13; // esi

	if (!a6)
		return 2147942487i64;
	v11 = sub_14018B280(528i64, 0);
	if (v11)
		v12 = (int*)sub_14038E5B0((__int64)v11, a1);
	else
		v12 = 0i64;
	v13 = sub_14038E8B0(v12, a2, a3, a4, a5);
	if (v13 >= 0)
	{
		*a6 = v12;
		return 0i64;
	}
	else
	{
		if (v12)
		{
			sub_14038E6D0((__int64)v12);
			sub_14018B900((__int64)v12, 0);
		}
		return (unsigned int)v13;
	}
}

