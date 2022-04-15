//----- (0000000140485200) ----------------------------------------------------
__int64 __fastcall sub_140485200(__int64 a1, unsigned __int64 a2, unsigned int* a3, unsigned __int64 a4)
{
	unsigned __int64 v4; // r10
	unsigned __int64 v5; // rax
	__int64 v6; // r11
	unsigned int v7; // ecx
	__int64 result; // rax

	v4 = a2;
	if (a4 < a2)
		v4 = a4;
	v5 = 0i64;
	if (v4)
	{
		v6 = a1 - (_QWORD)a3;
		while (1)
		{
			v7 = *(unsigned int*)((char*)a3 + v6);
			if (v7 != *a3)
				break;
			++v5;
			++a3;
			if (v5 >= v4)
				goto LABEL_7;
		}
		result = 1i64;
		if (v7 < *a3)
			return 0xFFFFFFFFi64;
	}
	else
	{
	LABEL_7:
		if (a2 == a4)
		{
			return 0i64;
		}
		else
		{
			result = 1i64;
			if (a2 < a4)
				return 0xFFFFFFFFi64;
		}
	}
	return result;
}

