//----- (00000001406F6150) ----------------------------------------------------
__int64 __fastcall sub_1406F6150(__int64 a1)
{
	__int64 v2; // rcx
	double v3; // xmm0_8
	__int64 v4; // rax

	if (qword_140C65808)
	{
		v2 = *(_QWORD*)(qword_140C65898 + 31016);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 152);
		v3 = (double)(*(int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65808 + 96i64))(
			qword_140C65808,
			(unsigned int)v2);
		v4 = *(_QWORD*)(a1 + 16);
		*(double*)v4 = v3;
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v4 = 0i64;
	}
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65898: using guessed type __int64 qword_140C65898;

