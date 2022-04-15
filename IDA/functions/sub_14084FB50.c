//----- (000000014084FB50) ----------------------------------------------------
__int64 __fastcall sub_14084FB50(__int64* a1, char a2, int a3)
{
	unsigned __int8* v3; // r11
	unsigned int v4; // ebx
	int v5; // r9d
	__int64 v6; // r10
	unsigned __int8* v7; // rax
	int v9; // [rsp+40h] [rbp+18h]

	v9 = a3;
	v3 = (unsigned __int8*)*a1;
	if (*a1)
	{
		v4 = *v3;
		v5 = 0;
		while (1)
		{
			v6 = (unsigned int)(v5 + 1);
			if (v3[v6] == a2)
				break;
			++v5;
			if ((unsigned int)v6 >= v4)
				goto LABEL_7;
		}
		v7 = &v3[4 * v5 + ((v4 + 4) & 0xFFFFFFFC)];
		if (v7)
			goto LABEL_9;
	}
LABEL_7:
	v7 = (unsigned __int8*)sub_14084C950(a1, a2);
	if (v7)
	{
		a3 = v9;
	LABEL_9:
		*(_DWORD*)v7 = a3;
		return 1i64;
	}
	return 2i64;
}

