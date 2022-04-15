//----- (000000014091C240) ----------------------------------------------------
__int64 __fastcall sub_14091C240(__int64 a1, int a2)
{
	__int64 result; // rax
	unsigned int* v3; // rsi
	__int64 v5; // rbx
	__int64 v6; // r8
	__int64 v7; // rbp
	__int64 v8; // rbp
	__int64 v9; // rdx

	result = *(unsigned int*)(a1 + 80);
	v3 = *(unsigned int**)a1;
	v5 = 0i64;
	if (!(_DWORD)result)
		return result;
	if (!a2)
	{
		result = (__int64)sub_140931B80(v3, 3, 267, *(int*)(a1 + 48), 6, 0i64);
	LABEL_6:
		v5 = result;
		goto LABEL_7;
	}
	if ((_DWORD)result == 1)
	{
		result = (__int64)sub_140931B80(v3, 0, 267, *(int*)(a1 + 48), 512, -1i64);
		goto LABEL_6;
	}
LABEL_7:
	if (*(_DWORD*)(a1 + 80) == 1)
	{
		if (!*v3)
		{
			v6 = *(int*)(a1 + 52) + 48i64;
			v3[26] = 0;
			result = sub_14092AA10(v3, 267, v6, 512, -1i64);
		}
	}
	else
	{
		v7 = *(_QWORD*)(a1 + 168);
		result = (__int64)sub_140932450((__int64)v3, 22);
		if (v7)
		{
			if (result)
			{
				*(_QWORD*)(result + 16) &= ~2ui64;
				*(_QWORD*)(result + 16) |= 1ui64;
				*(_QWORD*)(result + 24) = v7;
			}
		}
		else
		{
			v8 = result;
			if (!*v3)
			{
				result = (__int64)sub_14092D590((__int64)v3, 16i64);
				if (result)
				{
					v9 = *(_QWORD*)(a1 + 216);
					*(_QWORD*)result = v8;
					*(_QWORD*)(result + 8) = v9;
					*(_QWORD*)(a1 + 216) = result;
				}
			}
		}
	}
	if (v5)
	{
		result = (__int64)sub_140932570((__int64)v3);
		if (result)
		{
			*(_QWORD*)(v5 + 16) &= ~2ui64;
			*(_QWORD*)(v5 + 16) |= 1ui64;
			*(_QWORD*)(v5 + 24) = result;
		}
	}
	return result;
}
// 14091C304: conditional instruction was optimized away because rbp.8!=0

