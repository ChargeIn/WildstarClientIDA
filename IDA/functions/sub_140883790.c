//----- (0000000140883790) ----------------------------------------------------
int __fastcall sub_140883790(__int64 a1)
{
	bool v1; // zf

	v1 = (*(_BYTE*)(a1 + 117) & 0x20) == 0;
	*(_QWORD*)a1 = &off_1409A7B20;
	*(_QWORD*)(a1 + 120) = off_1409A7B80;
	if (!v1)
		sub_140889050(*(_QWORD*)(a1 + 96));
	*(_QWORD*)(a1 + 120) = &off_1409A7960;
	return sub_140883870(a1);
}
// 1409A7960: using guessed type __int64 (__fastcall *off_1409A7960)();
// 1409A7B20: using guessed type __int64 (__fastcall *off_1409A7B20)();
// 1409A7B80: using guessed type __int64 (__fastcall *off_1409A7B80[17])();

