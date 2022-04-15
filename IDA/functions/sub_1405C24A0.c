//----- (00000001405C24A0) ----------------------------------------------------
__int64 __fastcall sub_1405C24A0(__int64 a1)
{
	int v1; // eax
	int v2; // edx
	__int16* v3; // rax

	*(_DWORD*)(qword_140C65B98 + 164) = 0;
	*(_DWORD*)(a1 + 68) = 0;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "MatchStoppedLookingForReplacements", &unk_1409D128E);
	v1 = sub_1405BED30(qword_140C65B98, 16);
	v2 = 359357;
	if (v1)
		v2 = 309385;
	v3 = sub_14034BDD0(309385i64, v2);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v3, 0, 0i64);
	return 0i64;
}
// 1405C24F9: conditional instruction was optimized away because edx.4 is in (==4B889|==57BBD)
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B98: using guessed type __int64 qword_140C65B98;

