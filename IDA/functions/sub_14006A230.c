//----- (000000014006A230) ----------------------------------------------------
void __fastcall sub_14006A230(__int64* a1, int a2, int a3, int a4, int a5)
{
	int v5; // r11d
	int v7; // r10d
	__int64 v9; // rbx
	_DWORD* v10; // r8
	int v11; // eax
	unsigned int* v12; // rdx
	unsigned int v13; // ecx
	unsigned int v14; // eax
	__int64 v15; // rcx

	if (a2 != -1)
	{
		v5 = a4;
		v7 = a2;
		do
		{
			v9 = 4i64 * v7;
			v10 = (_DWORD*)(v9 + *(_QWORD*)(*a1 + 24));
			v11 = (*v10 >> 14) - 0x1FFFF;
			if (*v10 >> 14 == 131070)
				a4 |= v11;
			else
				a4 = v7 + v11 + 1;
			if (v7 < 1 || (v12 = v10 - 1, byte_140A12408[*(v10 - 1) & 0x3F] >= 0))
				v12 = (unsigned int*)(v9 + *(_QWORD*)(*a1 + 24));
			v13 = *v12;
			if ((*(_BYTE*)v12 & 0x3F) == 27)
			{
				if (v5 == 255 || v5 == v13 >> 23)
					v14 = v13 & 0x7FC000 | ((v13 & 0xFF81FFFF | 0x340000) >> 17);
				else
					v14 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v5 << 6)) & 0x3FC0;
				*v12 = v14;
				v15 = *(_QWORD*)(*a1 + 24);
				if ((int)abs32(a3 - v7 - 1) > 0x1FFFF)
					sub_140062CF0(a1[3], aControlStructu, *(_DWORD*)(a1[3] + 16));
				*(_DWORD*)(v9 + v15) &= 0x3FFFu;
				*(_DWORD*)(v9 + v15) |= (a3 - v7 + 131070) << 14;
			}
			else
			{
				if ((int)abs32(a5 - v7 - 1) > 0x1FFFF)
					sub_140062CF0(a1[3], aControlStructu, *(_DWORD*)(a1[3] + 16));
				*v10 &= 0x3FFFu;
				*v10 |= (a5 - v7 + 131070) << 14;
			}
			v7 = a4;
		} while (a4 != -1);
	}
}

