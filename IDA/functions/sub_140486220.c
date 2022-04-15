//----- (0000000140486220) ----------------------------------------------------
__int64 __fastcall sub_140486220(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rcx
	unsigned int v4; // edi

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 616i64))(*(_QWORD*)(a1 + 40), 0i64);
	v3 = *(_QWORD*)(a1 + 80);
	v4 = v2;
	if (v3 || *(_QWORD*)(a1 + 88))
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(a1 + 88))(v3, a1, v2);
	if (!v4)
		return 0i64;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HintArrowDistanceUpdate", byte_1409E9E64, 0xBFF0000000000000ui64);
	return 2147500037i64;
}
// 1409E9E64: using guessed type _BYTE byte_1409E9E64[48];
// 140C65898: using guessed type __int64 qword_140C65898;

