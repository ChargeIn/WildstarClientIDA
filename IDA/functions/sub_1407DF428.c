//----- (00000001407DF428) ----------------------------------------------------
__int64 sub_1407DF428(_WORD* a1, __int64 a2, ...)
{
	va_list va; // [rsp+50h] [rbp+18h] BYREF

	va_start(va, a2);
	return sub_1407DF460(
		(__int64(__fastcall*)(_WORD**, __int64, __int64, __int64))sub_1407EBC38,
		a1,
		a2,
		0i64,
		(__int64)va);
}

