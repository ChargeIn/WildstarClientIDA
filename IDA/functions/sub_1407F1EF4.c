//----- (00000001407F1EF4) ----------------------------------------------------
__int64 __fastcall sub_1407F1EF4(__int64* a1, int* a2, unsigned __int64 a3, int a4, int a5, _OWORD* a6)
{
	__int64 result; // rax
	int v10; // r14d
	_BOOL8 v11; // rax
	unsigned __int64 v12; // rdx
	_BYTE* v13; // rbx
	int v14; // eax
	int v16; // [rsp+40h] [rbp-68h] BYREF
	int v17; // [rsp+44h] [rbp-64h]
	char v18[24]; // [rsp+58h] [rbp-50h] BYREF

	sub_1407F6CF8(*a1, (__int64)&v16, v18, 22i64);
	if (a2 && a3)
	{
		v10 = v17 - 1;
		v11 = v16 == 45;
		v12 = -1i64;
		v13 = (char*)a2 + v11;
		if (a3 != -1i64)
			v12 = a3 - v11;
		result = sub_1407F69CC((int*)((char*)a2 + v11), v12, a4, (__int64)&v16);
		if ((_DWORD)result)
		{
			*(_BYTE*)a2 = 0;
		}
		else
		{
			v14 = v17 - 1;
			if (v17 - 1 < -4 || v14 >= a4)
			{
				return sub_1407F19C8(a2, a3, a4, a5, (__int64)&v16, 1, a6);
			}
			else
			{
				if (v10 < v14)
				{
					while (*v13++)
						;
					*(v13 - 2) = 0;
				}
				return sub_1407F1CBC(a2, a3, a4, &v16, 1, a6);
			}
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	return result;
}
// 1407F1EF4: using guessed type char var_50[24];

