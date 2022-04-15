//----- (00000001408514B0) ----------------------------------------------------
__int64 __fastcall sub_1408514B0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	__int64 v6; // rdx
	bool v8; // r14
	__int64 v9; // rax
	__int64 v10; // rax
	_QWORD* v11; // rsi
	int v12; // edi
	char v14; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)a1;
	v6 = *(_QWORD*)(a2 + 388);
	v8 = *(_QWORD*)(a1 + 8) == *(_QWORD*)a1;
	if (*(_BYTE*)(a1 + 26))
		v9 = sub_140850C90((_QWORD*)a1, v6, &v14);
	else
		v9 = sub_140850BA0((_QWORD*)a1, v6, &v14);
	if (v9)
		v10 = sub_1408535A0(a1, (v9 - v3) >> 3);
	else
		v10 = sub_140851590(a1);
	v11 = (_QWORD*)v10;
	if (!v10)
		return 2i64;
	if (v8)
	{
		v12 = a3 - 1;
		if (v12)
		{
			if (v12 == 1)
			{
				sub_140843970(a1);
				*v11 = a2;
				return 1i64;
			}
		}
		else
		{
			sub_140843940(a1);
		}
	}
	*v11 = a2;
	return 1i64;
}

