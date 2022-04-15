//----- (0000000140354930) ----------------------------------------------------
__int64 __fastcall sub_140354930(__int64 a1, int a2, int** a3)
{
	__int64 result; // rax
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	int* v8; // rax
	int* v9; // rbx
	int** v10; // rbx
	int v11; // edi
	int v12; // [rsp+38h] [rbp+10h] BYREF

	v12 = a2;
	if (!a3)
		return 2147942487i64;
	v6 = (*(__int64(__fastcall**)(int*))(a1 + 2104))(&v12);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 2096) + 8 * (v6 % *(_QWORD*)(a1 + 2088)));
	if (v7)
	{
		while (v6 != *v7 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2112))(&v12, v7 + 2))
		{
			v7 = (_QWORD*)v7[1];
			if (!v7)
				goto LABEL_7;
		}
		v10 = (int**)(v7 + 3);
		if (v10)
		{
			v9 = *v10;
			(**(void(__fastcall***)(int*))v9)(v9);
		LABEL_11:
			result = 0i64;
			*a3 = v9;
			return result;
		}
	}
LABEL_7:
	v8 = sub_14018B280(56i64, 0);
	v9 = v8;
	if (v8)
	{
		v8[2] = 1;
		*((_QWORD*)v8 + 2) = a1;
		*(_QWORD*)v8 = off_140B65AB0;
		v8[6] = 0;
		*(_QWORD*)(v8 + 9) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	v11 = sub_140374E90((__int64)v9, v12);
	if (v11 >= 0)
		goto LABEL_11;
	if (v9)
		sub_140354A40((__int64)v9);
	return (unsigned int)v11;
}
// 140B65AB0: using guessed type __int64 (__fastcall *off_140B65AB0[4])();

