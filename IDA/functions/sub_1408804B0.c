//----- (00000001408804B0) ----------------------------------------------------
__int64 __fastcall sub_1408804B0(__int64 a1, int* a2)
{
	unsigned int v2; // r11d
	unsigned int v4; // r8d
	__int16 v5; // ax
	unsigned int v6; // ebx
	unsigned int v7; // eax
	unsigned int v8; // ecx

	v2 = *(_DWORD*)(a1 + 44);
	v4 = *a2 + v2;
	v5 = *(_WORD*)(a1 + 84);
	v6 = 45;
	*(_DWORD*)(a1 + 44) = v4;
	if (v5 == 1)
	{
		v7 = *(_DWORD*)(a1 + 40);
		if (v4 >= v7)
		{
			v6 = 17;
			*a2 = v7 - v2;
		}
	}
	else
	{
		v8 = *(_DWORD*)(a1 + 60);
		if (v4 > v8)
		{
			if (v5)
				*(_WORD*)(a1 + 84) = v5 - 1;
			*a2 = v8 - v2 + 1;
			*(_DWORD*)(a1 + 44) = *(_DWORD*)(a1 + 56);
		}
	}
	sub_140880530(a1, v2, *a2, *(_DWORD*)(a1 + 40));
	return v6;
}

