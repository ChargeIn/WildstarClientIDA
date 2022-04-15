//----- (00000001404A0E10) ----------------------------------------------------
__int64 __fastcall sub_1404A0E10(__int64 a1, __int64 a2, int a3, int a4)
{
	int v7; // eax
	unsigned int v8; // ecx
	int v9; // ebx

	if (!a2)
		return 0i64;
	v7 = sub_14049BDC0(a4);
	v8 = 0;
	v9 = a3 - 1;
	if (v9)
	{
		if (v9 == 1)
		{
			LOBYTE(v8) = (v7 & *(_DWORD*)(a2 + 276)) == 0;
			return v8;
		}
	}
	else
	{
		return (v7 & *(_DWORD*)(a2 + 276)) != 0;
	}
	return v8;
}

