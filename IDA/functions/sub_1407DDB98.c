//----- (00000001407DDB98) ----------------------------------------------------
__int64 sub_1407DDB98(_BYTE* a1, signed __int8* a2, ...)
{
	unsigned int v5; // eax
	bool v6; // sf
	unsigned int v7; // ebx
	_BYTE* v8; // [rsp+20h] [rbp-30h] BYREF
	int v9; // [rsp+28h] [rbp-28h] BYREF
	_BYTE* v10; // [rsp+30h] [rbp-20h]
	int v11; // [rsp+38h] [rbp-18h]
	va_list va; // [rsp+80h] [rbp+30h] BYREF

	va_start(va, a2);
	v8 = 0i64;
	sub_1407E4830(&v9, 0i64, 0x28ui64);
	if (a2 && a1)
	{
		v9 = 0x7FFFFFFF;
		v11 = 66;
		v10 = a1;
		v8 = a1;
		v5 = sub_1407E96D0((__int64)&v8, a2, 0i64, (int*)va);
		v6 = --v9 < 0;
		v7 = v5;
		if (v6)
			sub_1407E88EC(0, (__int64)&v8);
		else
			*v8 = 0;
		return v7;
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

