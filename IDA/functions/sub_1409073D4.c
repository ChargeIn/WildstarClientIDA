//----- (00000001409073D4) ----------------------------------------------------
__int64 __fastcall sub_1409073D4(
	unsigned __int64* a1,
	WCHAR* a2,
	unsigned __int64 a3,
	CHAR* a4,
	unsigned __int64 a5,
	_OWORD* a6)
{
	unsigned int v10; // ebx
	unsigned __int64 v11; // r8
	_QWORD* v12; // rax
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rax
	__int128 v16; // [rsp+20h] [rbp-38h] BYREF
	__int64 v17; // [rsp+30h] [rbp-28h]
	char v18; // [rsp+38h] [rbp-20h]

	v10 = 0;
	if (a2)
	{
		if (!a3)
		{
		LABEL_5:
			v10 = 22;
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			return v10;
		}
		*a2 = 0;
	}
	else if (a3)
	{
		goto LABEL_5;
	}
	if (a1)
		*a1 = 0i64;
	sub_1407DE348((__int64)&v16, a6);
	v11 = a5;
	if (a5 > a3)
		v11 = a3;
	if (v11 <= 0x7FFFFFFF)
	{
		v13 = sub_1409071F8(a2, a4, v11, &v16);
		if (v13 == -1i64)
		{
			if (a2)
				*a2 = 0;
			v10 = *(_DWORD*)sub_1407DE1B0();
			goto LABEL_26;
		}
		v14 = v13 + 1;
		if (a2)
		{
			if (v14 > a3)
			{
				if (a5 != -1i64)
				{
					*a2 = 0;
					v12 = sub_1407DE1B0();
					v10 = 34;
					goto LABEL_21;
				}
				v14 = a3;
				v10 = 80;
			}
			a2[v14 - 1] = 0;
		}
		if (a1)
			*a1 = v14;
		goto LABEL_26;
	}
	v12 = sub_1407DE1B0();
	v10 = 22;
LABEL_21:
	*(_DWORD*)v12 = v10;
	sub_1407DC370();
LABEL_26:
	if (v18)
		*(_DWORD*)(v17 + 200) &= ~2u;
	return v10;
}

