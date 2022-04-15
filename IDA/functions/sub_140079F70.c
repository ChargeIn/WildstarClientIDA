//----- (0000000140079F70) ----------------------------------------------------
__int64 __fastcall sub_140079F70(_QWORD* a1, _QWORD* a2, int** a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rsi
	int* v9; // rax
	__int64 v10; // [rsp+40h] [rbp+18h] BYREF

	if (!a3)
		return 2147500037i64;
	if (a1[4])
	{
		++a1[3];
		a1[4] = 0i64;
	}
	v7 = a1[2];
	if (v7 && a1[3] != *(_QWORD*)(v7 + 32) || (result = sub_140336B00((__int64)a1), (int)result >= 0))
	{
		result = sub_140336FA0(a1, &v10);
		if ((int)result >= 0)
		{
			if ((_DWORD)v10)
			{
				v8 = (unsigned int)v10;
				v9 = (int*)sub_1403374E0(a2, (unsigned int)v10);
				*a3 = v9;
				if (v9)
					return sub_140337250((__int64)a1, v9, v8);
				else
					return 2147500037i64;
			}
			else
			{
				*a3 = 0i64;
				return sub_1403370C0(a1, 4ui64);
			}
		}
	}
	return result;
}

