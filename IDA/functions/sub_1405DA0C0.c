//----- (00000001405DA0C0) ----------------------------------------------------
void __fastcall sub_1405DA0C0(__int64 a1)
{
	int v1; // edx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rdx
	int v6; // r8d
	__int64 v7; // rdx

	v1 = *(_DWORD*)(a1 + 92);
	*(_QWORD*)a1 = off_140B6E000;
	v3 = sub_1403D90D0(qword_140C65898, v1);
	if (v3)
	{
		if ((v4 = qword_140C65898, *(_DWORD*)(v3 + 204) = 0, v5 = *(_QWORD*)(v4 + 120), v6 = *(_DWORD*)(a1 + 92), v5)
			&& *(_DWORD*)(v5 + 8) == v6
			|| (v7 = *(_QWORD*)(v4 + 25744)) != 0 && *(_DWORD*)(v7 + 8) == v6)
		{
			if (*(_DWORD*)(v3 + 3408))
				*(_DWORD*)(v4 + 26544) = 0;
		}
	}
	sub_1405D6680(a1);
}
// 140B6E000: using guessed type __int64 (__fastcall *off_140B6E000[51])();
// 140C65898: using guessed type __int64 qword_140C65898;

