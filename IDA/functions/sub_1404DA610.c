//----- (00000001404DA610) ----------------------------------------------------
void __fastcall sub_1404DA610(__int64 a1, unsigned int a2, int a3)
{
	__int64 v5; // rbx
	_DWORD* v6; // rcx
	int v7; // eax
	__int64 v8; // rcx
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(__int64, unsigned int); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v5 = a2;
	sub_1403BDAC0(qword_140C65898);
	sub_140195D70(a1 + 5280);
	if ((unsigned int)v5 < 0xC)
	{
		if (*(_QWORD*)(a1 + 120))
		{
			v6 = *(_DWORD**)(a1 + 8 * v5 + 4424);
			if (v6)
			{
				if (v6[130])
					(*(void(__fastcall**)(_DWORD*, bool))(*(_QWORD*)v6 + 64i64))(v6, a3 != 0);
			}
		}
		if (a3)
		{
			v7 = dword_140C45E40;
			if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
				v7 = *(_DWORD*)qword_140C63750;
			if (*((_BYTE*)&dword_140C45E50 + v7))
			{
				if (*(_QWORD*)(qword_140C65898 + 120))
				{
					v8 = *(_QWORD*)(qword_140C65898 + 8 * v5 + 4424);
					if (v8)
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 64i64))(v8, 2i64);
				}
			}
			else
			{
				v9 = 1;
				v10 = sub_14001C280(a1);
				v12 = v5;
				v11 = sub_1404DA910;
				sub_140195960(a1 + 5280, dword_140C65904, (__int64)&v9, 4);
			}
		}
	}
}
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65904: using guessed type int dword_140C65904;

