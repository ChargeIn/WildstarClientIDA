//----- (00000001407DDC38) ----------------------------------------------------
__int64 sub_1407DDC38(_BYTE* a1, unsigned __int64 a2, __int64 a3, ...)
{
	va_list va; // [rsp+58h] [rbp+20h] BYREF

	va_start(va, a3);
	return sub_1407E0580(a1, a2, a3, 0i64, (__int64)va);
}

