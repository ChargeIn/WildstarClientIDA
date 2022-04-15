//----- (000000014079C490) ----------------------------------------------------
__int64 __fastcall sub_14079C490(__int64 a1, int* a2, int a3, __int64* a4, int a5)
{
	int* v9; // rax
	unsigned int v10; // esi
	__int64 v11; // rdi
	int v12; // ebx
	__int64 v13; // rcx
	__int64 v15; // [rsp+20h] [rbp-38h] BYREF
	int* v16; // [rsp+28h] [rbp-30h]
	int* v17; // [rsp+30h] [rbp-28h]
	int* v18; // [rsp+38h] [rbp-20h]

	v9 = sub_14018B280(16i64, 0);
	v10 = 0;
	v11 = (__int64)v9;
	v16 = v9;
	v17 = v9;
	v18 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	if (a5)
	{
		sub_1400A7B60(&v15, a2);
		v11 = (__int64)v16;
		a2 = v16;
	}
	if (a3)
	{
		v12 = a3 - 1;
		if (v12)
		{
			if (v12 != 1)
				goto LABEL_12;
			v13 = a1 + 120;
		}
		else
		{
			v13 = a1 + 64;
		}
	}
	else
	{
		v13 = a1 + 8;
	}
	v10 = sub_14079BE70(v13, a2, a4);
LABEL_12:
	if (v11)
		sub_14018B900(v11, 0);
	return v10;
}

