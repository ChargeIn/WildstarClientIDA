//----- (0000000140609C20) ----------------------------------------------------
void __fastcall sub_140609C20(__int64 a1, float* a2, float a3)
{
	int v4; // r8d
	int v5; // eax
	int v7; // ecx
	int v8; // eax
	int v9; // eax
	unsigned int v10; // ebx
	int v11; // eax
	__int64 v12; // rbx
	int v13; // eax
	unsigned int v14; // eax

	v4 = *(_DWORD*)qword_140C63750;
	v5 = dword_140C45990;
	if (*(_DWORD*)qword_140C63750 < dword_140C45990)
		v5 = *(_DWORD*)qword_140C63750;
	if (algn_140C45994[v5 + 12])
	{
		v7 = *(_DWORD*)(a1 + 236);
		if (v7 != 2)
		{
			if (v7)
				goto LABEL_19;
			v8 = dword_140C459D0;
			if (v4 < dword_140C459D0)
				v8 = *(_DWORD*)qword_140C63750;
			if (byte_140C459E0[v8])
			{
			LABEL_19:
				if (v7 != 1)
					goto LABEL_13;
				v9 = dword_140C45A10;
				if (v4 < dword_140C45A10)
					v9 = *(_DWORD*)qword_140C63750;
				if (byte_140C45A20[v9])
				{
				LABEL_13:
					v10 = (*(__int64(__fastcall**)(float*, unsigned __int64))(*(_QWORD*)a2 + 72i64))(a2, 0x140000000ui64);
					v11 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)a2 + 64i64))(a2);
					sub_14060A770((_QWORD*)(a1 + 240), v11, v10, a3);
					sub_14060A770((_QWORD*)(a1 + 296), (int)a2[135], (int)a2[387], a3);
					v12 = sub_1404695E0((__int64)a2);
					if (v12)
					{
						LOBYTE(v13) = sub_140469530((__int64)a2);
						if (v13)
						{
							v14 = (int)sub_14053DA10(v12);
							if (v14 < 0x64)
							{
								*(_DWORD*)(a1 + 384) = v14;
								sub_14060A770((_QWORD*)(a1 + 352), v14, 0x64u, a3);
							}
						}
					}
				}
			}
		}
	}
}
// 140609D1F: variable 'v13' is possibly undefined
// 140C45990: using guessed type int dword_140C45990;
// 140C459D0: using guessed type int dword_140C459D0;
// 140C459E0: using guessed type _BYTE[32];
// 140C45A10: using guessed type int dword_140C45A10;
// 140C45A20: using guessed type _BYTE[32];
// 140C63750: using guessed type __int64 qword_140C63750;

