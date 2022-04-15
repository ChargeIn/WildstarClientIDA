//----- (000000014087C090) ----------------------------------------------------
__int64 __fastcall sub_14087C090(__int64 a1)
{
	__int64 result; // rax

	result = sub_1408819F0(dword_140C10F20, 32i64);
	if (result)
	{
		*(_BYTE*)(result + 24) = 1;
		*(_QWORD*)result = off_1409A73C0;
		*(_WORD*)(result + 26) = -1;
		*(_BYTE*)(result + 24) = *(_BYTE*)(a1 + 24);
		*(_WORD*)(result + 26) = *(_WORD*)(a1 + 26);
	}
	return result;
}
// 1409A73C0: using guessed type __int64 (__fastcall *off_1409A73C0[5])();
// 140C10F20: using guessed type int dword_140C10F20;

