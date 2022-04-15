//----- (00000001407DF3F0) ----------------------------------------------------
__int64 sub_1407DF3F0(_WORD* a1, __int64 a2, ...)
{
	va_list va; // [rsp+50h] [rbp+18h] BYREF

	va_start(va, a2);
	return sub_1407DF460(
		(__int64(__fastcall*)(_WORD**, __int64, __int64, __int64))sub_1407EA9CC,
		a1,
		a2,
		0i64,
		(__int64)va);
}

