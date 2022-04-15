//----- (0000000140051A00) ----------------------------------------------------
__int64 __fastcall sub_140051A00(__int64* a1, __int64* a2, int a3)
{
	unsigned __int64 v5; // rdx
	__int64 result; // rax
	__int64 v8; // rbx
	unsigned __int64 v9; // rbp
	unsigned __int64 i; // rbx
	int* v11; // rdx
	int v12; // ecx

	v5 = a1[1] + a2[1];
	if (a1[1] > v5)
		a1[1] = v5;
	result = (__int64)sub_14018DBC0(*a1, v5, 4i64);
	v8 = result;
	if (*a1 != result)
	{
		result = (__int64)sub_1407DB590((int*)result, (int*)*a1, 4 * a1[1]);
		if (*a1)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = v8;
	}
	v9 = a2[1];
	for (i = 0i64; i < v9; ++i)
	{
		result = *a2;
		v11 = *(int**)(*a2 + 8 * i);
		v12 = v11[14];
		if ((v12 & 6) != 0)
		{
			result = a3 & (unsigned int)v12;
			if (((unsigned __int8)a3 & (unsigned __int8)v12 & 6) == 0)
				continue;
		}
		if ((v12 & 0x1F8) != 0)
		{
			result = a3 & (unsigned int)v12;
			if (((unsigned __int16)a3 & (unsigned __int16)v12 & 0x1F8) == 0)
				continue;
		}
		if ((v12 & 0xFE00) == 0 || ((unsigned __int16)a3 & (unsigned __int16)v12 & 0xFE00) != 0)
			result = sub_140003460(a1, v11);
	}
	return result;
}

