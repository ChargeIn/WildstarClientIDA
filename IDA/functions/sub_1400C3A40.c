//----- (00000001400C3A40) ----------------------------------------------------
bool __fastcall sub_1400C3A40(__int64 a1, int* a2)
{
	int v3; // ecx
	int v4; // eax
	BOOL v5; // eax
	bool result; // al
	int v7; // eax
	double v8; // xmm0_8

	v3 = *a2;
	v5 = 0;
	if (*a2 >= *(_DWORD*)(a1 + 336) && v3 < *(_DWORD*)(a1 + 344))
	{
		v4 = a2[1];
		if (v4 >= *(_DWORD*)(a1 + 340) && v4 < *(_DWORD*)(a1 + 348))
			v5 = 1;
	}
	result = v5;
	if (result && (*(_BYTE*)(a1 + 412) & 1) != 0)
	{
		result = 0;
		if (v3 >= *(_DWORD*)(a1 + 352) && v3 < *(_DWORD*)(a1 + 360))
		{
			v7 = a2[1];
			if (v7 >= *(_DWORD*)(a1 + 356) && v7 < *(_DWORD*)(a1 + 364))
			{
				v8 = sub_140109AB0((float*)a1, (int*)(a1 + 352), a2);
				if (*(float*)&v8 > *(float*)(a1 + 408))
					return 1;
			}
		}
	}
	return result;
}

