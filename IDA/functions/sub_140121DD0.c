//----- (0000000140121DD0) ----------------------------------------------------
bool __fastcall sub_140121DD0(__int64 a1, char** a2, char** a3)
{
	__int64 v3; // r10
	__int64 v4; // r9
	int v5; // edx
	int v6; // ecx
	int v7; // eax
	int v8; // ecx

	v3 = (__int64)*a3;
	v4 = (__int64)*a2;
	v5 = **a2;
	v6 = **a3;
	v7 = v5 - v6;
	if (v5 == v6)
	{
		while ((_BYTE)v5)
		{
			v5 = *(char*)(v4 + 1);
			v8 = *(char*)(v3 + 1);
			++v4;
			++v3;
			if (v5 != v8)
				return v5 - v8 < 0;
		}
		v7 = 0;
	}
	return v7 < 0;
}

