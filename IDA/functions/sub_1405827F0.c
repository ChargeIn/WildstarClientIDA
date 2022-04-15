//----- (00000001405827F0) ----------------------------------------------------
__int64 __fastcall sub_1405827F0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	if (v3)
	{
		*(_QWORD*)(v3 + 880) = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(v3 + 888) = *(_DWORD*)(a2 + 24);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "RecruitmentDemands", byte_1409EAA54, v3);
	}
	return 0i64;
}
// 1409EAA54: using guessed type _BYTE byte_1409EAA54[96];
// 140C65898: using guessed type __int64 qword_140C65898;

