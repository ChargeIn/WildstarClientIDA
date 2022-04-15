//----- (000000014034BF80) ----------------------------------------------------
__int64 sub_14034BF80(_BYTE* a1, __int64 a2, unsigned __int16* a3, ...)
{
	va_list va; // [rsp+58h] [rbp+20h] BYREF

	va_start(va, a3);
	if (qword_140C7AAC8)
		return sub_14034B7B0(a1, a2, a3, (_OWORD*)qword_140C7AAC8, (__int64)va);
	else
		return sub_140197A50(a1, a2, a3, (__int64)va);
}
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

