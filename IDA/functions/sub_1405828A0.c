//----- (00000001405828A0) ----------------------------------------------------
__int64 __fastcall sub_1405828A0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	if (v3)
	{
		*(_DWORD*)(v3 + 872) = *(_DWORD*)(a2 + 16);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildClassification", byte_1409EAA14, v3);
	}
	return 0i64;
}
// 1409EAA14: using guessed type _BYTE byte_1409EAA14[32];
// 140C65898: using guessed type __int64 qword_140C65898;

