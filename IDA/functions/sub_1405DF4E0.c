//----- (00000001405DF4E0) ----------------------------------------------------
void __fastcall sub_1405DF4E0(__int64 a1, __int64 a2)
{
	int v3; // r8d
	int v4; // edx
	int v5; // r10d
	__int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF

	if (a2)
	{
		v3 = *(_DWORD*)(a2 + 208);
		v4 = 1;
		if (!v3 || (v5 = 0, v3 == 4))
		{
			v4 = 2;
		}
		else if (v3 == 3 || (LOBYTE(v5) = v3 == 4, v5))
		{
			v4 = 3;
		}
		v6[1] = (__int64)sub_1405E2A30;
		v6[0] = a1;
		sub_1403F8660(a1, v4, (__int64*)(a2 + 184), v6);
	}
}

