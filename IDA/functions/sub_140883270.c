//----- (0000000140883270) ----------------------------------------------------
__int64 __fastcall sub_140883270(void(__fastcall*** a1)(_QWORD, _QWORD))
{
	char v2; // al
	int v3; // ebx
	__int64 result; // rax

	sub_140883520();
	v2 = sub_140881950();
	v3 = dword_140C111C0;
	if (v2 && dword_140C111C0 != -1 && a1)
	{
		(**a1)(a1, 0i64);
		sub_140881720(v3, (__int64)a1);
		v3 = dword_140C111C0;
	}
	result = sub_140881DD0(v3);
	dword_140C111C0 = -1;
	return result;
}
// 140C111C0: using guessed type int dword_140C111C0;

