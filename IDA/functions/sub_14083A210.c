//----- (000000014083A210) ----------------------------------------------------
__int64 __fastcall sub_14083A210(int a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx

	v2 = sub_1408819F0(dword_140C10F20, 56i64);
	v3 = v2;
	if (!v2)
		return 0i64;
	sub_140865E10(v2, a1);
	*(_QWORD*)v3 = off_1409A2F38;
	sub_1408347C0(v3 + 32);
	if ((unsigned int)sub_14083A290(v3) != 1)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
		return 0i64;
	}
	return v3;
}
// 1409A2F38: using guessed type __int64 (__fastcall *off_1409A2F38[4])();
// 140C10F20: using guessed type int dword_140C10F20;

