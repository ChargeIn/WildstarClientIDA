//----- (000000014086E7E0) ----------------------------------------------------
__int64 __fastcall sub_14086E7E0(int a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx

	v2 = sub_1408819F0(dword_140C10F20, 240i64);
	v3 = v2;
	if (!v2)
		return 0i64;
	sub_140874010(v2, a1);
	*(_QWORD*)v3 = off_1409A5620;
	*(_QWORD*)(v3 + 216) = 0i64;
	*(_QWORD*)(v3 + 224) = 0i64;
	*(_DWORD*)(v3 + 232) = 0;
	if ((unsigned int)sub_1408745C0((_BYTE*)v3) == 1)
		return v3;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
	return 0i64;
}
// 1409A5620: using guessed type __int64 (__fastcall *off_1409A5620[4])();
// 140C10F20: using guessed type int dword_140C10F20;

