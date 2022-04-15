//----- (0000000140054D90) ----------------------------------------------------
__int64 __fastcall sub_140054D90(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rax
	bool v6; // zf
	__int64(__fastcall * **v7)(); // rax

	v5 = sub_1407DB490(a3);
	*(_DWORD*)a2 = a3;
	v6 = v5 == 0;
	v7 = &off_140C5F428;
	if (v6)
		v7 = off_140C5F420;
	*(_QWORD*)(a2 + 8) = v7;
	return a2;
}
// 140C5F420: using guessed type __int64 (__fastcall **off_140C5F420[2])();
// 140C5F428: using guessed type __int64 (__fastcall **off_140C5F428)();

