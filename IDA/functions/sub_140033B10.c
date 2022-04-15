//----- (0000000140033B10) ----------------------------------------------------
__int64 __fastcall sub_140033B10(__int64 a1)
{
	__int64 v2; // rax
	struct tagPOINT v3; // rcx
	__int128 v5; // [rsp+30h] [rbp-18h] BYREF

	v5 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v5);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
	sub_1400E7C40(*(_QWORD*)(a1 + 88));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	sub_1400E6E80(*(_QWORD*)(a1 + 88));
	if (*(_DWORD*)(a1 + 40) != 4)
	{
		v2 = *(_QWORD*)(a1 + 32);
		if (v2)
		{
			while (*(_DWORD*)(v2 + 40) == 4)
			{
				v2 = *(_QWORD*)(v2 + 32);
				if (!v2)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 80),
				(unsigned int)qword_140C77760,
				HIDWORD(qword_140C77760));
			sub_140252260(v3, 1);
		}
	}
	return 0i64;
}
// 140033BC6: variable 'v3' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140033B10: using guessed type __int128 var_18;

