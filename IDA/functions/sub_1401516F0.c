//----- (00000001401516F0) ----------------------------------------------------
__int64 sub_1401516F0(LARGE_INTEGER* a1, __int64 a2, ...)
{
	va_list va; // [rsp+50h] [rbp+18h] BYREF

	va_start(va, a2);
	return sub_1400F3040(a1->QuadPart + 384, a1[13], a1[6].LowPart, *(_QWORD*)a2, *(_BYTE**)(a2 + 8), va);
}

