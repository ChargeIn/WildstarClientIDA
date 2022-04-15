//----- (000000014056D8C0) ----------------------------------------------------
__int64 __fastcall sub_14056D8C0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax

	if (a2 == a3 || *(_DWORD*)(a1 + 56))
	{
		*(_DWORD*)(a1 + 56) = 0;
	}
	else
	{
		result = sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PlayerPathMissionAdvanced",
			byte_1409ED524,
			*(_QWORD*)(a1 + 48));
		*(_DWORD*)(a1 + 56) = 0;
	}
	return result;
}
// 1409ED524: using guessed type _BYTE byte_1409ED524[4];
// 140C65898: using guessed type __int64 qword_140C65898;

