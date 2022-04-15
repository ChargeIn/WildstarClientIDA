//----- (00000001408597A0) ----------------------------------------------------
__int64 __fastcall sub_1408597A0(__int64 a1, char a2)
{
	__int64 v4; // rdx

	*(_QWORD*)a1 = off_1409A3D00;
	v4 = *(_QWORD*)(a1 + 112);
	if (v4)
	{
		*(_QWORD*)(a1 + 120) = v4;
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 112) = 0i64;
		*(_QWORD*)(a1 + 120) = 0i64;
		*(_DWORD*)(a1 + 128) = 0;
	}
	sub_140851350(a1);
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A3D00: using guessed type __int64 (__fastcall *off_1409A3D00[4])();
// 140C10F20: using guessed type int dword_140C10F20;

