//----- (000000014029BDC0) ----------------------------------------------------
__int64 __fastcall sub_14029BDC0(_DWORD* a1)
{
	int v2; // ecx
	__int64 v3; // r11
	int v4; // eax
	int v5; // edx
	int v7; // ebx
	__int64 v8; // rax
	_DWORD* v9; // rdi

	v2 = a1[8];
	v3 = 112i64;
	if (!v2)
	{
		v7 = a1[6];
		if (v7)
		{
			v8 = 44i64 * (int)a1[7];
			do
			{
				--v7;
				v9 = (_DWORD*)((char*)&unk_140AE5200 + v8);
				v3 += ((*(_DWORD*)((char*)&unk_140AE5200 + v8 + 36)
					* (((unsigned int)(a1[2] >> v7 == 0) + (a1[2] >> v7) + v9[1]) >> v9[2])
					+ 3) & 0xFFFFFFFC)
					* a1[5]
					* (((unsigned int)(a1[3] >> v7 == 0) + (a1[3] >> v7) + v9[4]) >> v9[5])
					* ((*(_DWORD*)((char*)&unk_140AE5200 + v8 + 28) + (a1[4] >> v7) + (unsigned int)(a1[4] >> v7 == 0)) >> *(_DWORD*)((char*)&unk_140AE5200 + v8 + 32));
			} while (v7);
		}
		return v3;
	}
	if (v2 != 1)
		return v3;
	v4 = a1[6];
	v5 = v4;
	if (!v4)
		return v3;
	do
	{
		--v5;
		v3 += (unsigned int)a1[v4 - v5 - 1 + 14];
	} while (v5);
	return v3;
}

