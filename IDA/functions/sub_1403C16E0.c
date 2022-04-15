//----- (00000001403C16E0) ----------------------------------------------------
__int64 __fastcall sub_1403C16E0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rax
	__int64 v5; // r11
	__int64 v6; // r8

	v2 = qword_140C65898;
	if (!sub_1401FCF20(a2))
		return 0i64;
	v4 = sub_1404530F0(qword_140C65910, 1, a2);
	if (!v4 || !*(_DWORD*)(v4 + 4) && !*(_DWORD*)(v4 + 8))
		return 0i64;
	v6 = *(unsigned int*)(v5 + 24);
	if ((_DWORD)v6)
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(v2 + 120),
				v6,
				0i64,
				0i64,
				0);
	else
		return 1i64;
}
// 1403C1727: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65910: using guessed type __int64 qword_140C65910;
// 140C659A0: using guessed type __int64 qword_140C659A0;

