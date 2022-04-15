//----- (0000000140617470) ----------------------------------------------------
__int64 __fastcall sub_140617470(__int64 a1, __int64 a2)
{
	unsigned int v2; // r8d
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = 0;
	switch (*(_DWORD*)(a2 + 12))
	{
	case 4:
		v7 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v7 && (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 24i64))(v7, a2, 0i64) == 166)
			return (unsigned int)dword_140B27730[(unsigned int)sub_1401AE6F0(0, 9)];
		return (unsigned int)dword_140B27308[(unsigned int)sub_1401AE6F0(0, 9)];
	case 5:
		v6 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v6 && (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 24i64))(v6, a2, 0i64) == 166)
			return (unsigned int)dword_140B27718[(unsigned int)sub_1401AE6F0(0, 4)];
		else
			return (unsigned int)dword_140B273F8[(unsigned int)sub_1401AE6F0(0, 4)];
	case 6:
		v5 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v5 && (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 24i64))(v5, a2, 0i64) == 166)
			return (unsigned int)dword_140B27780[(unsigned int)sub_1401AE6F0(0, 4)];
		else
			return (unsigned int)dword_140B273E0[(unsigned int)sub_1401AE6F0(0, 4)];
	case 7:
		v3 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v3 && (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v3 + 24i64))(v3, a2, 0i64) == 166)
			return (unsigned int)dword_140B27758[(unsigned int)sub_1401AE6F0(0, 9)];
		else
			return (unsigned int)dword_140B27410[(unsigned int)sub_1401AE6F0(0, 9)];
	default:
		return v2;
	}
}
// 140B27308: using guessed type int dword_140B27308[10];
// 140B273E0: using guessed type int dword_140B273E0[6];
// 140B273F8: using guessed type int dword_140B273F8[6];
// 140B27410: using guessed type int dword_140B27410[10];
// 140B27718: using guessed type int dword_140B27718[6];
// 140B27730: using guessed type int dword_140B27730[10];
// 140B27758: using guessed type int dword_140B27758[10];
// 140B27780: using guessed type int dword_140B27780[6];
// 140C65898: using guessed type __int64 qword_140C65898;

