//----- (000000014092AD90) ----------------------------------------------------
__int64 __fastcall sub_14092AD90(unsigned int* a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
	__int64 result; // rax
	char* v11; // rax
	int v12; // esi
	int v13; // ebp
	char* v14; // rax
	char* v15; // rcx
	char v16; // al
	char* v17; // rax

	result = 0i64;
	a1[26] = 0;
	if (!a3 && (a5 & 0x100) == 0)
		return result;
	if ((a5 & 0x200) == 0)
	{
		v12 = 12;
		if (a3 <= 12)
			v12 = a3;
		v13 = a3 & 0x100;
		if ((a3 & 0x100) != 0 && a5 <= 12)
		{
			v12 = a5;
		}
		else
		{
			v14 = sub_14092D140((__int64)a1, 2, v12, 0i64, a5, a6);
			v15 = v14;
			if (!v14)
				return *a1;
			*v14 = 15;
			v16 = -73;
			if (a2)
				v16 = -65;
			v15[1] = v16;
		}
		if (v13)
		{
			v17 = sub_14092D140((__int64)a1, 1153, v12, 0i64, a3, a4);
			if (!v17)
				return *a1;
			*v17 = -119;
		}
		return 0i64;
	}
	if (a3 > 12)
		v11 = sub_14092D140((__int64)a1, 1665, 512, a6, a3, a4);
	else
		v11 = sub_14092D140((__int64)a1, 1, 512, a6, a3, 0i64);
	if (!v11)
		return *a1;
	*v11 = -57;
	return 0i64;
}

