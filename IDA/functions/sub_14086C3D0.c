//----- (000000014086C3D0) ----------------------------------------------------
__int64 __fastcall sub_14086C3D0(__int64 a1, char a2)
{
	__int64 v4; // rcx

	*(_QWORD*)a1 = off_1409A5380;
	v4 = *(_QWORD*)(a1 + 192);
	if (v4)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 56i64))(*(_QWORD*)(a1 + 192));
			*(_BYTE*)(a1 + 479) &= ~8u;
			sub_14086C9F0(a1);
		}
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 16i64))(*(_QWORD*)(a1 + 192));
	}
	sub_14087BC50(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A5380: using guessed type __int64 (__fastcall *off_1409A5380[4])();

