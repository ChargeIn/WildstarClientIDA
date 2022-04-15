//----- (00000001404A0490) ----------------------------------------------------
char __fastcall sub_1404A0490(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	int v6; // eax
	int v7; // edx
	int v8; // ebx

	if (qword_140C659A8)
	{
		v6 = sub_1404A6190(a1, a4, a5);
		v7 = v6;
		v8 = a3 - 1;
		if (v8)
		{
			LOBYTE(v6) = 0;
			if (v8 == 1)
				LOBYTE(v6) = v7 == 0;
		}
	}
	else
	{
		LOBYTE(v6) = a3 == 2;
	}
	return v6;
}
// 140C659A8: using guessed type __int64 qword_140C659A8;

