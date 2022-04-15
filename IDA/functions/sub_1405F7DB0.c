//----- (00000001405F7DB0) ----------------------------------------------------
__int64 __fastcall sub_1405F7DB0(__int64* a1, unsigned int a2, unsigned int a3)
{
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // r9
	_DWORD* v6; // rax
	__int64 v7; // rbp
	unsigned __int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdx
	int* v11; // rsi
	__int64 v12; // rcx
	unsigned __int64 v14; // [rsp+30h] [rbp+8h]

	v4 = a1[17];
	v5 = 0i64;
	if (v4)
	{
		v6 = (_DWORD*)a1[16];
		while (v6[1] != a3 || *v6 != a2)
		{
			++v5;
			v6 += 2;
			if (v5 >= v4)
				goto LABEL_6;
		}
		return 2147500037i64;
	}
	else
	{
	LABEL_6:
		v7 = v4 + 1;
		v8 = v4;
		v14 = __PAIR64__(a3, a2);
		v9 = sub_14018DB00(a1[16], v4 + 1, 8i64);
		*(_QWORD*)&v9[2 * v8] = v14;
		v10 = (int*)a1[16];
		v11 = v9;
		if (v10 != v9)
		{
			sub_1407DB590(v9, v10, 8 * a1[17]);
			v12 = a1[16];
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			a1[16] = (__int64)v11;
		}
		a1[17] = v7;
		(*(void(__fastcall**)(__int64*))(*a1 + 344))(a1);
		return 0i64;
	}
}

