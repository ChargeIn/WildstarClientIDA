//----- (00000001400F2AD0) ----------------------------------------------------
char sub_1400F2AD0(__int64 a1, __int64 a2, LARGE_INTEGER a3, __int64 a4, _BYTE* a5, ...)
{
	va_list va; // [rsp+68h] [rbp+30h] BYREF

	va_start(va, a5);
	return sub_1400F2B00(a1, a2, a3, a4, a5, va);
}

