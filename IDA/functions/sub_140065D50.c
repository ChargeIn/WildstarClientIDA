//----- (0000000140065D50) ----------------------------------------------------
void __fastcall sub_140065D50(__int64 a1, int a2, int a3, unsigned int* a4)
{
	__int64* v4; // rdi
	int v5; // esi
	int v6; // ebx
	int v7; // esi
	int v8; // esi
	int v9; // ecx

	v4 = *(__int64**)(a1 + 48);
	v5 = a2 - a3;
	if (*a4 - 13 <= 1)
	{
		v7 = v5 + 1;
		if (v7 < 0)
			v7 = 0;
		sub_14006A5E0((__int64)v4, a4, v7);
		if (v7 > 1)
		{
			v8 = v7 - 1;
			v9 = v8 + *((_DWORD*)v4 + 15);
			if (v9 > *(unsigned __int8*)(*v4 + 115))
			{
				if (v9 >= 250)
					sub_140062CF0(v4[3], aFunctionOrExpr, *(_DWORD*)(v4[3] + 16));
				*(_BYTE*)(*v4 + 115) = v9;
			}
			*((_DWORD*)v4 + 15) += v8;
		}
	}
	else
	{
		if (*a4)
			sub_14006AAE0((__int64)v4, (int*)a4);
		if (v5 > 0)
		{
			v6 = *((_DWORD*)v4 + 15);
			sub_14006A450(v4, v5);
			sub_140069F90((__int64)v4, v6, v5);
		}
	}
}

