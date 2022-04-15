//----- (00000001403C9970) ----------------------------------------------------
void __fastcall sub_1403C9970(__int64 a1)
{
	int* v1; // rbx
	int v2; // eax
	char v3; // di
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // edx
	unsigned int v7; // eax
	unsigned int* v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx

	v1 = *(int**)(a1 + 120);
	if (v1)
	{
		v2 = dword_140C4E660;
		if (*(_DWORD*)qword_140C63750 < dword_140C4E660)
			v2 = *(_DWORD*)qword_140C63750;
		v3 = *((_BYTE*)&dword_140C4E670 + v2);
		v4 = sub_140200220(0x434u);
		if (v4)
		{
			v5 = v3 == 0;
			v6 = *(_DWORD*)(v4 + 4 * v5 + 4);
		}
		else
		{
			v6 = 28350;
		}
		v7 = sub_140612E30(v5, v6, v1[13], v1[55], v1[54]);
		v8 = (unsigned int*)sub_140211280(v7);
		if (v8)
		{
			if ((*(_DWORD*)(qword_140C63628 + 1524) & v8[6]) == 0
				|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
				|| (v9 = v8[2], !(_DWORD)v9))
			{
				v9 = v8[1];
			}
		}
		else
		{
			v9 = 0i64;
		}
		v10 = *(_QWORD*)(qword_140C63628 + 728);
		if (v10)
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v10 + 16i64))(
				v10,
				v9,
				0i64,
				0i64,
				0i64,
				0i64,
				0i64);
	}
}
// 1403C99E0: variable 'v5' is possibly undefined
// 140C4E660: using guessed type int dword_140C4E660;
// 140C4E670: using guessed type int dword_140C4E670;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;

