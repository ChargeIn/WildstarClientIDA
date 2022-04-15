//----- (0000000140898DF0) ----------------------------------------------------
__int64 __fastcall sub_140898DF0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // rbx

	if (!a2 || (result = sub_140898ED0(a1, a2)) == 0)
	{
		v4 = sub_1408819F0(dword_140C10F20, 160i64);
		v5 = v4;
		if (v4)
		{
			sub_14088F8F0(v4, a1);
			*(_BYTE*)(v5 + 152) = 0;
			*(_QWORD*)v5 = off_1409A9750;
			*(_QWORD*)(v5 + 24) = off_1409A9820;
			*(_QWORD*)(v5 + 40) = &off_1409A93A0;
			++* (_DWORD*)(v5 + 80);
			if ((unsigned int)sub_14088C3E0(
				(_QWORD*)v5,
				*(_QWORD*)(*(_QWORD*)(a1 + 104) + 56i64),
				*(_QWORD*)(a1 + 104) + 24i64) == 1
				&& sub_14088FB00(v5, 0i64, 0i64))
			{
				++* (_DWORD*)(v5 + 80);
				*(_BYTE*)(v5 + 152) = 1;
				sub_14088B630(v5);
				return v5;
			}
			sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD))v5);
			sub_14088B630(v5);
		}
		return 0i64;
	}
	return result;
}
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();
// 1409A9750: using guessed type __int64 (__fastcall *off_1409A9750[5])();
// 1409A9820: using guessed type __int64 (__fastcall *off_1409A9820[9])();
// 140C10F20: using guessed type int dword_140C10F20;

