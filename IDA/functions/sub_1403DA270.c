//----- (00000001403DA270) ----------------------------------------------------
__int64 __fastcall sub_1403DA270(__int64 a1, int* a2, double a3, double a4)
{
	_DWORD* v6; // rbx
	__int64 v7; // rax

	v6 = (_DWORD*)sub_1403D90D0(a1, *a2);
	if (v6)
	{
		v7 = *(_QWORD*)(a1 + 120);
		if (!v7 || v6[2] != *(_DWORD*)(v7 + 8))
		{
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v6 + 80i64))(v6, (unsigned int)a2[1]);
			if (a2[2] && !a2[1])
				sub_14045EC90((__int64)v6, 1, a3, a4);
			sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RefreshHealthShieldBar", &unk_1409D08F2);
		}
	}
	return 0i64;
}

