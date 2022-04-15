//----- (00000001404A1620) ----------------------------------------------------
char __fastcall sub_1404A1620(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	int v5; // eax
	int v6; // eax
	int v7; // edx
	int v8; // ebx

	if (a2 && ((v5 = *(_DWORD*)(a2 + 128), v5 == 20) || v5 == 23))
	{
		v6 = sub_1403D2140(qword_140C65898, a4);
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
		LOBYTE(v6) = 0;
	}
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

