//----- (0000000140883820) ----------------------------------------------------
int __fastcall sub_140883820(__int64 a1)
{
	bool v1; // zf

	v1 = (*(_BYTE*)(a1 + 117) & 0x20) == 0;
	*(_QWORD*)a1 = &off_1409A7A70;
	*(_QWORD*)(a1 + 120) = &off_1409A7AB0;
	if (!v1)
		sub_140889460(*(_QWORD*)(a1 + 96));
	*(_QWORD*)(a1 + 120) = &off_1409A78F0;
	return sub_140883870(a1);
}
// 1409A78F0: using guessed type __int64 (__fastcall *off_1409A78F0)();
// 1409A7A70: using guessed type __int64 (__fastcall *off_1409A7A70)();
// 1409A7AB0: using guessed type __int64 (__fastcall *off_1409A7AB0)();

