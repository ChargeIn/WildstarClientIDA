//----- (00000001403A8D60) ----------------------------------------------------
__int64 __fastcall sub_1403A8D60(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rdx
	_WORD* v5; // r8
	_WORD* v6; // rcx

	v3 = sub_1403A8810(a1, *(_DWORD*)a2, *(_DWORD*)(a2 + 4));
	v4 = 32i64;
	*((_WORD*)v3 + 36) = *(_WORD*)(a2 + 16);
	*((_WORD*)v3 + 37) = *(_WORD*)(a2 + 20);
	*((_WORD*)v3 + 38) = *(_WORD*)(a2 + 24);
	*((_WORD*)v3 + 39) = *(_WORD*)(a2 + 28);
	v5 = *(_WORD**)(a2 + 8);
	v6 = v3 + 2;
	while (v4 != -2147483614 && *v5)
	{
		*v6++ = *v5++;
		if (!--v4)
		{
			--v6;
			break;
		}
	}
	*v6 = 0;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PetCustomizationUpdated", byte_1409EC114, v3);
	return 0i64;
}
// 1403A8DCE: conditional instruction was optimized away because rdx.8!=0
// 1409EC114: using guessed type _BYTE byte_1409EC114[96];
// 140C65898: using guessed type __int64 qword_140C65898;

