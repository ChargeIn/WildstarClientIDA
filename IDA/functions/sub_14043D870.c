//----- (000000014043D870) ----------------------------------------------------
__int64 __fastcall sub_14043D870(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rsi
	int v5; // eax
	unsigned int* v6; // r10
	unsigned int v7; // ebx
	unsigned int v8; // ecx
	int v9; // r8d
	unsigned int v10; // eax
	__int64 v11; // r9
	__int64 v12; // rdx
	__int64 v13; // rcx
	bool v14; // zf
	__int64 v15; // [rsp+40h] [rbp+18h]

	if (!(_DWORD)a1)
		return 1i64;
	result = sub_1405A8A40(a1, a1);
	v4 = result;
	if (result)
	{
		v5 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(result + 8));
		v6 = *(unsigned int**)(v4 + 8);
		v7 = 0;
		v8 = v5 - 5;
		v9 = v5;
		v10 = *v6;
		if (v8 <= 2)
			v9 = 0;
		v11 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		v12 = v11;
		v13 = *(_QWORD*)(v11 + 8);
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < v10)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v12 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
		if (v12 == v11 || (v15 = v12, v10 < *(_DWORD*)(v12 + 32)))
			v15 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 8i64);
		if (v15 == v11 || v15 == -40)
			goto LABEL_20;
		if ((unsigned int)(a2 - 5) <= 5)
			return sub_1405510D0(v4, a2 - 5);
		if ((unsigned int)(a2 - 14) > 5)
		{
		LABEL_20:
			switch (a2)
			{
			case 11:
				if ((v9 & 0xFFFFFFFB) == 0 || v9 == 3 && ((v6[3] & 0x20) != 0 || v6[109]))
					return 1i64;
				return v7;
			case 12:
				LOBYTE(v7) = (unsigned int)(v9 - 1) <= 1;
				return v7;
			case 13:
				LOBYTE(v7) = (unsigned int)(v9 - 2) <= 1;
				return v7;
			}
			v14 = v9 == a2;
		}
		else
		{
			v14 = (unsigned int)sub_1405510D0(v4, a2 - 14) == 0;
		}
		LOBYTE(v7) = v14;
		return v7;
	}
	return result;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

