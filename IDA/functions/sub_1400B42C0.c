//----- (00000001400B42C0) ----------------------------------------------------
__int64 __fastcall sub_1400B42C0(__int64 a1, __int64(__fastcall*** a2)(_QWORD), __int64 a3)
{
	unsigned int v5; // edi
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a3 + 32) == 30001)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
		goto LABEL_6;
	}
	if (*(_DWORD*)(a3 + 32) == 30002)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
	LABEL_6:
		v5 = 0;
		goto LABEL_7;
	}
	v7 = 0x141D0E110i64;
	sub_1401A3130(114, 0, &v7);
	v5 = -2147467259;
LABEL_7:
	sub_1400B1ED0(a1, a2);
	return v5;
}

