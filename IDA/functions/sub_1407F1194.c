//----- (00000001407F1194) ----------------------------------------------------
__int64 sub_1407F1194(signed __int8* a1, ...)
{
	void** v2; // rax
	void** v3; // rax
	int v4; // ebx
	void** v5; // rax
	unsigned int v6; // edi
	void** v7; // rax
	void** v8; // rax
	va_list va; // [rsp+48h] [rbp+10h] BYREF

	va_start(va, a1);
	if (a1)
	{
		v2 = sub_1407DDFA0();
		sub_1407DE010(1, (__int64)(v2 + 6));
		v3 = sub_1407DDFA0();
		v4 = sub_1407E3974((__int64)(v3 + 6));
		v5 = sub_1407DDFA0();
		v6 = sub_1407E96D0((__int64)(v5 + 6), a1, 0i64, (int*)va);
		v7 = sub_1407DDFA0();
		sub_1407E393C(v4, (__int64)(v7 + 6));
		v8 = sub_1407DDFA0();
		sub_1407DE094(1, (__int64)(v8 + 6));
		return v6;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

