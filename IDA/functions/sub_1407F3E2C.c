//----- (00000001407F3E2C) ----------------------------------------------------
__int64 __fastcall sub_1407F3E2C(
	unsigned __int64* a1,
	CHAR* a2,
	unsigned __int64 a3,
	const WCHAR* a4,
	unsigned __int64 a5,
	_OWORD* a6)
{
	unsigned int v6; // r14d
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // rax
	_QWORD* v13; // rax
	unsigned int v14; // ebx
	unsigned __int64 v15; // rax

	v6 = 0;
	if (a2)
	{
		if (a3)
			goto LABEL_3;
	LABEL_15:
		v13 = sub_1407DE1B0();
		v14 = 22;
	LABEL_16:
		*(_DWORD*)v13 = v14;
		sub_1407DC370();
		return v14;
	}
	if (a3)
		goto LABEL_15;
LABEL_3:
	if (a2)
		*a2 = 0;
	if (a1)
		*a1 = 0i64;
	v10 = a5;
	if (a5 > a3)
		v10 = a3;
	if (v10 > 0x7FFFFFFF)
		goto LABEL_15;
	v11 = sub_1407F3AFC(a2, a4, v10, a6);
	if (v11 == -1i64)
	{
		if (a2)
			*a2 = 0;
		return *(unsigned int*)sub_1407DE1B0();
	}
	v15 = v11 + 1;
	if (a2)
	{
		if (v15 > a3)
		{
			if (a5 != -1i64)
			{
				*a2 = 0;
				if (a3 <= v15)
				{
					v13 = sub_1407DE1B0();
					v14 = 34;
					goto LABEL_16;
				}
			}
			v15 = a3;
			v6 = 80;
		}
		a2[v15 - 1] = 0;
	}
	if (a1)
		*a1 = v15;
	return v6;
}

