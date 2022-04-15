//----- (00000001404DA4E0) ----------------------------------------------------
void __fastcall sub_1404DA4E0(__int64 a1, unsigned int a2, int a3)
{
	__int64 v4; // rdi
	__int64 v6; // rax
	_DWORD* v7; // rcx
	int v8; // eax
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(__int64, unsigned int); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v4 = a2;
	if (*(int*)(a1 + 5276) < 9)
	{
		sub_1403BDAC0(qword_140C65898);
		sub_140195D70(a1 + 5280);
		if ((unsigned int)v4 < 0xC)
		{
			v6 = *(int*)(a1 + 5276);
			if (*(_QWORD*)(a1 + 120))
			{
				if ((int)v6 < 9)
				{
					v7 = *(_DWORD**)(a1 + 8 * (v4 + 12 * v6) + 4328);
					if (v7)
					{
						if (v7[130])
							(*(void(__fastcall**)(_DWORD*, bool))(*(_QWORD*)v7 + 64i64))(v7, a3 != 0);
					}
				}
			}
			if (a3)
			{
				v8 = dword_140C45E40;
				if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
					v8 = *(_DWORD*)qword_140C63750;
				if (*((_BYTE*)&dword_140C45E50 + v8))
				{
					sub_1404DA8C0(qword_140C65898, v4);
				}
				else
				{
					v9 = 1;
					v10 = sub_14001C280(a1);
					v12 = v4;
					v11 = sub_1404DA8C0;
					sub_140195960(a1 + 5280, dword_140C65904, (__int64)&v9, 4);
				}
			}
		}
	}
}
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65904: using guessed type int dword_140C65904;

