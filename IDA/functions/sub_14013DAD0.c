//----- (000000014013DAD0) ----------------------------------------------------
__int64 __fastcall sub_14013DAD0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	_OWORD* a5,
	int a6,
	int a7,
	__int64 a8,
	_OWORD* a9,
	_WORD* a10)
{
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rbx

	*(_QWORD*)(a1 + 16) = a3;
	*(_BYTE*)(a1 + 24) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)a1 = &off_140B58150;
	*(_QWORD*)(a1 + 8) = 0i64;
	sub_1400ED880(a2, (__int64*)(a1 + 8));
	*(_QWORD*)a1 = off_140B580D0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 52) = a6;
	*(_DWORD*)(a1 + 48) = 0;
	*(_OWORD*)(a1 + 64) = *a5;
	*(_OWORD*)(a1 + 80) = *a9;
	*(_OWORD*)(a1 + 96) = a9[1];
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65680 + 40i64))(
		qword_140C65680,
		a8,
		a4,
		-1i64,
		a1 + 40);
	if (a10)
	{
		v13 = 0i64;
		if (*a10)
		{
			do
				++v13;
			while (a10[v13]);
			if (v13)
			{
				v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 112i64))(a2);
				v15 = *(_QWORD*)(a1 + 32);
				v16 = v14;
				if (v15)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
					*(_QWORD*)(a1 + 32) = 0i64;
				}
				*(_QWORD*)(a1 + 32) = v16;
				if (v16)
				{
					(**(void(__fastcall***)(__int64))v16)(v16);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
				}
			}
		}
	}
	return a1;
}
// 140B580D0: using guessed type __int64 (__fastcall *off_140B580D0[17])();
// 140B58150: using guessed type __int64 (__fastcall *off_140B58150)();
// 140C65680: using guessed type __int64 qword_140C65680;

