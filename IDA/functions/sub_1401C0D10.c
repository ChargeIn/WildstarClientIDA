//----- (00000001401C0D10) ----------------------------------------------------
__int64 __fastcall sub_1401C0D10(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	unsigned int v5; // ebx
	__int64 result; // rax
	unsigned __int64 v7; // rdx
	int v8; // r8d
	int* v9; // rax
	unsigned __int64 v10; // r9
	signed __int64 v11; // r10
	__int16 v12; // cx
	unsigned __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF
	int* v14; // [rsp+68h] [rbp+10h] BYREF

	v14 = a2;
	v5 = 0;
	v13[0] = 260i64;
	result = sub_1401A3210(a2, 0x104ui64, (__int64*)&v14, v13, 0, L"%s\\", a1 + 8);
	if ((int)result >= 0)
	{
		result = sub_1401C9010(v14, v13[0], &v14, v13, a4);
		if ((int)result >= 0)
		{
			v7 = v13[0];
			v8 = 0;
			if (v13[0] - 1 > 0x7FFFFFFE)
				v8 = -2147024809;
			if (v8 < 0)
			{
				if (v13[0])
					*(_WORD*)v14 = 0;
			}
			else
			{
				v9 = v14;
				v8 = 0;
				if (!v13[0])
					goto LABEL_13;
				v10 = 2147483646 - v13[0];
				v11 = (char*)L".bin" - (char*)v14;
				while (v10 + v7)
				{
					v12 = *(_WORD*)((char*)v9 + v11);
					if (!v12)
						break;
					*(_WORD*)v9 = v12;
					v9 = (int*)((char*)v9 + 2);
					if (!--v7)
					{
						v8 = -2147024774;
						*((_WORD*)v9 - 1) = 0;
						goto LABEL_17;
					}
				}
				if (!v7)
				{
				LABEL_13:
					v9 = (int*)((char*)v9 - 2);
					v8 = -2147024774;
				}
				*(_WORD*)v9 = 0;
			}
		LABEL_17:
			if (v8 < 0)
				return (unsigned int)v8;
			return v5;
		}
	}
	return result;
}
// 140A476A8: using guessed type wchar_t aBin_0[5];
// 140A476B8: using guessed type wchar_t aS_28[4];

