//----- (00000001405D9CB0) ----------------------------------------------------
__int64 __fastcall sub_1405D9CB0(__int64 a1, char a2)
{
	bool v2; // zf
	__int64 v5; // rax
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 336) == 0i64;
	*(_QWORD*)a1 = off_140B6DF60;
	if (!v2)
	{
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
		if (v5)
			sub_14045B030(v5, *(int**)(a1 + 336));
	}
	v6 = *(_QWORD*)(a1 + 336);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6DF60: using guessed type __int64 (__fastcall *off_140B6DF60[71])();
// 140C65898: using guessed type __int64 qword_140C65898;

