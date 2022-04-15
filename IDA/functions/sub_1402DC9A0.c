//----- (00000001402DC9A0) ----------------------------------------------------
__int64 __fastcall sub_1402DC9A0(volatile signed __int32* a1, _DWORD* a2, __int64* a3)
{
	int* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rbx
	int v10; // edi
	void(__fastcall * **v11)(_QWORD); // [rsp+38h] [rbp+10h] BYREF

	if (*a2 >= 0x80u || a2[1] >= 0x80u || !a3)
		return 2147942487i64;
	if ((unsigned int)sub_1402DD480((__int64)(a1 + 416), (__int64)a2, &v11))
	{
		v9 = (__int64)v11;
		(**v11)(v11);
	}
	else
	{
		v7 = sub_14018B280(5488i64, 1u);
		if (!v7)
			return 2147942414i64;
		v8 = sub_1402DEC10((__int64)v7);
		v9 = v8;
		if (!v8)
			return 2147942414i64;
		v10 = sub_1402DF0B0(v8, a1, (__int64)a2);
		if (v10 < 0)
		{
			sub_1402DED40(v9);
			sub_14018B900(v9, 0);
			return (unsigned int)v10;
		}
	}
	*a3 = v9;
	return 0i64;
}

