//----- (000000014092AC10) ----------------------------------------------------
__int64 __fastcall sub_14092AC10(unsigned int* a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
	__int64 result; // rax
	char* v11; // rax
	char* v12; // rax
	int v13; // esi
	int v14; // ebp
	char* v15; // rax
	char* v16; // rcx
	char v17; // al
	char* v18; // rax

	result = 0i64;
	a1[26] = 0;
	if (!a3 && (a5 & 0x100) == 0)
		return result;
	if ((a5 & 0x200) == 0)
	{
		v13 = 12;
		if (a3 <= 12)
			v13 = a3;
		v14 = a3 & 0x100;
		if ((a3 & 0x100) != 0 && a5 <= 12)
		{
			v13 = a5;
		}
		else
		{
			v15 = sub_14092D140((__int64)a1, 2, v13, 0i64, a5, a6);
			v16 = v15;
			if (!v15)
				return *a1;
			*v15 = 15;
			v17 = -74;
			if (a2)
				v17 = -66;
			v16[1] = v17;
		}
		if (v14)
		{
			v18 = sub_14092D140((__int64)a1, 193, v13, 0i64, a3, a4);
			if (!v18)
				return *a1;
			*v18 = -120;
		}
		return 0i64;
	}
	if (a3 > 12)
	{
		v12 = sub_14092D140((__int64)a1, 385, 512, a6, a3, a4);
		if (!v12)
			return *a1;
		*v12 = -58;
		return 0i64;
	}
	else
	{
		v11 = sub_14092D140((__int64)a1, 1, 512, a6, a3, 0i64);
		if (!v11)
			return *a1;
		*v11 = -57;
		return 0i64;
	}
}

