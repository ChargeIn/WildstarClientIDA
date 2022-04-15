//----- (000000014049E680) ----------------------------------------------------
char __fastcall sub_14049E680(__int64 a1, __int64 a2, int a3, int a4)
{
	int v5; // eax
	int v6; // ecx
	int v7; // ebx

	v5 = sub_1403C92E0(a1, a4);
	v6 = v5;
	v7 = a3 - 1;
	if (v7)
	{
		LOBYTE(v5) = 0;
		if (v7 == 1)
			LOBYTE(v5) = v6 == 0;
	}
	return v5;
}

