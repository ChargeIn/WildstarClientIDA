//----- (00000001401BF400) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401BF400(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // r14
	unsigned __int64 v4; // rbx
	unsigned __int64 v8; // r11
	char* v9; // r8
	char* v10; // r10
	char v11; // dl
	char v12; // cl
	char* v13; // r9
	__int64 v14; // r11
	char v15; // r8
	char v16; // al
	int v17; // r10d
	unsigned __int64 result; // rax

	v3 = *(_QWORD*)(a1 + 32);
	v4 = 0i64;
	while (v4 < v3)
	{
		v8 = v4 + ((v3 - v4) >> 1);
		if (!a3)
			goto LABEL_11;
		v9 = (char*)a2;
		v10 = *(char**)(56 * v8 + *(_QWORD*)(a1 + 24));
		while (1)
		{
			v11 = *v9;
			if ((unsigned __int8)(*v9 - 65) <= 0x19u)
				v11 += 32;
			v12 = *v10;
			if ((unsigned __int8)(*v10 - 65) <= 0x19u)
				v12 += 32;
			if (v11 != v12)
				break;
			if (*v9)
			{
				++v9;
				++v10;
				if ((unsigned __int64)&v9[-a2] < a3)
					continue;
			}
			goto LABEL_11;
		}
		if (v11 - v12 > 0)
			v4 = v8 + 1;
		else
			LABEL_11:
		v3 = v4 + ((v3 - v4) >> 1);
	}
	if (v4 >= *(_QWORD*)(a1 + 32) || !a3)
		return v4;
	v13 = *(char**)(56 * v4 + *(_QWORD*)(a1 + 24));
	v14 = -a2;
	while (1)
	{
		v15 = *(_BYTE*)a2;
		if ((unsigned __int8)(*(_BYTE*)a2 - 65) <= 0x19u)
			v15 += 32;
		v16 = *v13;
		if ((unsigned __int8)(*v13 - 65) <= 0x19u)
			v16 += 32;
		v17 = v15 - v16;
		if (v15 != v16)
			break;
		if (!*(_BYTE*)a2)
			return v4;
		++a2;
		++v13;
		if (a2 + v14 >= a3)
			return v4;
	}
	result = v4 + 1;
	if (v17 <= 0)
		return v4;
	return result;
}

