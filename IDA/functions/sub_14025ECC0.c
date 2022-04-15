//----- (000000014025ECC0) ----------------------------------------------------
__int64 __fastcall sub_14025ECC0(__int64 a1, __int64 a2, int a3)
{
	int v6; // eax
	int v7; // ecx

	sub_14025E8C0(a1, a2);
	v6 = 0;
	v7 = *(_DWORD*)(a1 + 48);
	if (v7 == 8 || v7 == 12)
		v6 = 1;
	return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 2184),
		2
		* ((*(_QWORD*)(a2 + 776) != 0i64)
			+ 2
			* (2
				- (a3 != 0)
				+ 2 * ((v7 == 17) + 2 * ((*(float*)(a1 + 332) == 0.0) + 2 * v6))
				+ (v7 == 17)
				+ 2 * ((unsigned int)(*(float*)(a1 + 332) == 0.0) + 2 * v6))));
}
// 140C65670: using guessed type __int64 qword_140C65670;

