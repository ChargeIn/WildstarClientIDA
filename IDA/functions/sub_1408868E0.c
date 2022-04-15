//----- (00000001408868E0) ----------------------------------------------------
__int64 __fastcall sub_1408868E0(__int64 a1, __int64* a2, __int64 a3, __int64* a4)
{
	__int64 v6; // rbx
	__int64 v8; // rax
	__int64 v9; // rdi
	int v11; // ebx

	v6 = 0i64;
	*a4 = 0i64;
	v8 = sub_1408819F0(dword_140C111C0, 200i64);
	v9 = v8;
	if (!v8)
	{
		sub_140883340(a1, 100);
		v8 = sub_1408819F0(dword_140C111C0, 200i64);
		v9 = v8;
		if (!v8)
			return 0i64;
	}
	sub_1408836F0(v8);
	*(_QWORD*)v9 = off_1409A7C58;
	*(_BYTE*)(v9 + 192) = 0;
	*(_QWORD*)(v9 + 184) = 0i64;
	*(_QWORD*)(v9 + 120) = off_1409A7C90;
	if ((unsigned int)sub_140884D60(v9, a1, a2) != 1)
	{
		if (v9)
		{
			v11 = dword_140C111C0;
			(**(void(__fastcall***)(__int64, _QWORD))v9)(v9, 0i64);
			sub_140881720(v11, v9);
		}
		return 0i64;
	}
	sub_140883CD0(a1, v9);
	if (v9)
		v6 = v9 + 120;
	*a4 = v6;
	return v9;
}
// 1409A7C58: using guessed type __int64 (__fastcall *off_1409A7C58[13])();
// 1409A7C90: using guessed type __int64 (__fastcall *off_1409A7C90[6])();
// 140C111C0: using guessed type int dword_140C111C0;

