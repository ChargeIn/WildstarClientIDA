//----- (000000014049D760) ----------------------------------------------------
char __fastcall sub_14049D760(__int64 a1, __int64 a2, int a3, int a4)
{
	int v5; // eax
	int v6; // edx
	int v7; // ebx

	if (a2 && a2 == *(_QWORD*)(qword_140C65898 + 120))
	{
		v5 = sub_1403CDF50(qword_140C65898, a4, *(_BYTE*)(qword_140C65898 + 28140), 0);
		v6 = v5;
		v7 = a3 - 1;
		if (v7)
		{
			LOBYTE(v5) = 0;
			if (v7 == 1)
				LOBYTE(v5) = v6 == 0;
		}
	}
	else
	{
		LOBYTE(v5) = 0;
	}
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;

