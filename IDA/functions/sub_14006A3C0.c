//----- (000000014006A3C0) ----------------------------------------------------
void __fastcall sub_14006A3C0(__int64* a1, int* a2, int a3)
{
	int v3; // r9d
	__int64 v5; // rdx
	int v6; // eax
	int v7; // r8d
	_DWORD* v8; // rcx

	v3 = *a2;
	if (*a2 == -1)
	{
		*a2 = a3;
	}
	else
	{
		v5 = *(_QWORD*)(*a1 + 24);
		while (*(_DWORD*)(v5 + 4i64 * v3) >> 14 != 131070)
		{
			v6 = (*(_DWORD*)(v5 + 4i64 * v3) >> 14) - 0x1FFFF;
			if (v6 + v3 + 1 == -1)
				break;
			v3 += v6 + 1;
		}
		v7 = a3 - v3;
		v8 = (_DWORD*)(v5 + 4i64 * v3);
		if ((int)abs32(v7 - 1) > 0x1FFFF)
			sub_140062CF0(a1[3], aControlStructu, *(_DWORD*)(a1[3] + 16));
		*v8 &= 0x3FFFu;
		*v8 |= (v7 + 131070) << 14;
	}
}

