//----- (000000014003ABB0) ----------------------------------------------------
int* __fastcall sub_14003ABB0(int* a1, int* a2, unsigned __int64 a3, unsigned __int64 a4)
{
	unsigned __int64 v4; // rdi
	int* v6; // rsi
	int* v7; // rbx
	unsigned __int64 v8; // rdi
	unsigned __int64 v9; // rax
	bool v10; // cf
	unsigned __int64 v11; // rax
	int* v12; // rcx
	int* v13; // rax

	v4 = *((_QWORD*)a2 + 2);
	v6 = a2;
	v7 = a1;
	if (v4 < a3)
		sub_1407DB458("invalid string position");
	v8 = v4 - a3;
	if (a4 < v8)
		v8 = a4;
	if (a1 == a2)
	{
		v9 = v8 + a3;
		if (*((_QWORD*)a1 + 2) < v8 + a3)
			sub_1407DB458("invalid string position");
		v10 = *((_QWORD*)a1 + 3) < 0x10ui64;
		*((_QWORD*)a1 + 2) = v9;
		if (!v10)
			a1 = *(int**)a1;
		*((_BYTE*)a1 + v9) = 0;
		sub_14003AAE0(v7, 0i64, a3);
	}
	else
	{
		if (v8 == -1i64)
			sub_1407DB420("string too long");
		v11 = *((_QWORD*)a1 + 3);
		if (v11 >= v8)
		{
			if (!v8)
			{
				*((_QWORD*)a1 + 2) = 0i64;
				if (v11 < 0x10)
					*(_BYTE*)a1 = 0;
				else
					**(_BYTE**)a1 = 0;
				return v7;
			}
		}
		else
		{
			sub_14003ACE0((__int64)a1, v8, *((_QWORD*)a1 + 2));
			if (!v8)
				return v7;
		}
		if (*((_QWORD*)v6 + 3) >= 0x10ui64)
			v6 = *(int**)v6;
		if (*((_QWORD*)v7 + 3) < 0x10ui64)
			v12 = v7;
		else
			v12 = *(int**)v7;
		sub_1407DB590(v12, (int*)((char*)v6 + a3), v8);
		v10 = *((_QWORD*)v7 + 3) < 0x10ui64;
		*((_QWORD*)v7 + 2) = v8;
		if (v10)
			v13 = v7;
		else
			v13 = *(int**)v7;
		*((_BYTE*)v13 + v8) = 0;
	}
	return v7;
}
// 14003AC77: conditional instruction was optimized away because rdi.8 is in (1..FFFFFFFFFFFFFFFE)

