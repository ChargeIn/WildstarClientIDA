//----- (00000001408C2650) ----------------------------------------------------
__int64 __fastcall sub_1408C2650(__int64 a1, __int64 a2)
{
	__int64 i; // rdi

	if (*(_DWORD*)(a1 + 560))
		sub_1408C3610(a1 + 24, *(_QWORD*)(a1 + 16));
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 568); i = (unsigned int)(i + 1))
		sub_1408ADC30(a1 + 8 * ((unsigned int)i + 2 * i + 41), *(_QWORD*)(a1 + 16));
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

