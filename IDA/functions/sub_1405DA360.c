//----- (00000001405DA360) ----------------------------------------------------
__int64 __fastcall sub_1405DA360(__int64 a1, char a2)
{
	int v3; // edx
	__int64 v5; // rax
	unsigned __int64 v6; // rcx
	int v7; // eax

	v3 = *(_DWORD*)(a1 + 92);
	*(_QWORD*)a1 = off_140B6DE10;
	v5 = sub_1403D90D0(qword_140C65898, v3);
	if (v5)
	{
		v7 = *(_DWORD*)(v5 + 128);
		if (v7 == 20 || v7 == 23)
		{
			if (*(_DWORD*)(a1 + 344))
				sub_1405A71B0(v6, *(_DWORD*)(a1 + 336), -*(_DWORD*)(a1 + 340));
		}
	}
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 1405DA3B6: variable 'v6' is possibly undefined
// 140B6DE10: using guessed type __int64 (__fastcall *off_140B6DE10[113])();
// 140C65898: using guessed type __int64 qword_140C65898;

