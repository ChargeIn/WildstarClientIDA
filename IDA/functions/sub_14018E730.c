//----- (000000014018E730) ----------------------------------------------------
__int64 __fastcall sub_14018E730(char* a1, unsigned __int64 a2)
{
	char* v3; // rbx
	int v5; // ecx
	unsigned int v6; // edi
	int v7; // ebp
	char v8; // dl
	unsigned int v9; // eax
	int v10; // ecx

	v3 = a1;
	if (a2 > 0x24)
		return 0i64;
	if ((unsigned int)sub_1407DE9E8(*a1))
	{
		do
			v5 = *++v3;
		while ((unsigned int)sub_1407DE9E8(v5));
	}
	v6 = 0;
	if (*v3 == 45)
	{
		v7 = 1;
	LABEL_8:
		++v3;
		goto LABEL_9;
	}
	v7 = 0;
	if (*v3 == 43)
		goto LABEL_8;
LABEL_9:
	if ((unsigned int)sub_1407DE6F8(*v3))
	{
		do
		{
			v8 = *v3;
			v9 = -1;
			if ((unsigned __int8)(*v3 - 48) > 9u)
			{
				if ((unsigned __int8)(v8 - 97) > 0x19u)
				{
					if ((unsigned __int8)(v8 - 65) <= 0x19u)
						v9 = v8 - 55;
				}
				else
				{
					v9 = v8 - 87;
				}
			}
			else
			{
				v9 = v8 - 48;
			}
			if (v9 >= a2)
				break;
			v10 = *++v3;
			v6 = v9 + a2 * v6;
		} while ((unsigned int)sub_1407DE6F8(v10));
	}
	if (v7)
		return -v6;
	return v6;
}

