//----- (0000000140067680) ----------------------------------------------------
int __fastcall sub_140067680(__int64 a1, int* a2)
{
	int v2; // r8d
	bool v6; // zf
	int v7; // esi
	__int64 v8; // rax

	v2 = *(_DWORD*)(a1 + 16);
	if (v2 == 40)
	{
		v6 = *(_DWORD*)(a1 + 32) == 287;
		v7 = *(_DWORD*)(a1 + 4);
		*(_DWORD*)(a1 + 8) = v7;
		if (v6)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v8 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v8;
		}
		sub_140067E60(a1, a2, 0i64);
		sub_1400656B0(a1, 41, 40, v7);
		return sub_14006A700(*(_QWORD*)(a1 + 48), a2);
	}
	else
	{
		if (v2 != 285)
			sub_140062CF0(a1, aUnexpectedSymb, v2);
		return sub_140065CE0(a1, (__int64)a2);
	}
}
// 140067E60: using guessed type __int64 __fastcall sub_140067E60(_QWORD, _QWORD, _QWORD);

