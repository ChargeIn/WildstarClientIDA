//----- (00000001408AB260) ----------------------------------------------------
__int64 __fastcall sub_1408AB260(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	__int64 v5; // rsi
	__int64 i; // rdi

	v4 = a1 + 24;
	v5 = 2i64;
	do
	{
		sub_1408AD480(v4, *(_QWORD*)(a1 + 16));
		v4 += 944i64;
		--v5;
	} while (v5);
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 2456); i = (unsigned int)(i + 1))
		sub_1408ADC30(a1 + 8 * (i + 2 * (i + 134)), *(_QWORD*)(a1 + 16));
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

