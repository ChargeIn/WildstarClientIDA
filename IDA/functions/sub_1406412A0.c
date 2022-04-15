//----- (00000001406412A0) ----------------------------------------------------
void __fastcall sub_1406412A0(__int64 a1, char a2)
{
	int v2; // edx
	__int64 v3; // rbx
	__int64 v4; // rax
	char v5; // r8
	int v6; // edx

	if (qword_140C65898 && a2)
	{
		v2 = dword_140C536B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C536B0)
			v2 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C536A0, v2, 0);
		v3 = qword_140C65898;
		v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 264i64));
		if (v4)
		{
			v5 = 1;
			*(_OWORD*)(v3 + 29152) = *(_OWORD*)(v4 + 4576);
		}
		else
		{
			v5 = 0;
		}
		v6 = dword_140C536F0;
		if (*(_DWORD*)qword_140C63750 < dword_140C536F0)
			v6 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C536E0, v6, v5);
	}
}
// 140C536A0: using guessed type __int64 (__fastcall **off_140C536A0)();
// 140C536B0: using guessed type int dword_140C536B0;
// 140C536E0: using guessed type __int64 (__fastcall **off_140C536E0)();
// 140C536F0: using guessed type int dword_140C536F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

