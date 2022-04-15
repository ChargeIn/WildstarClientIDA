//----- (000000014018E260) ----------------------------------------------------
__int64 __fastcall sub_14018E260(char* a1, __int64 a2)
{
	__int64 v2; // r10
	char v3; // dl
	char v4; // al

	v2 = a2 - (_QWORD)a1;
	while (1)
	{
		v3 = *a1;
		if ((unsigned __int8)(*a1 - 65) <= 0x19u)
			v3 += 32;
		v4 = a1[v2];
		if ((unsigned __int8)(v4 - 65) <= 0x19u)
			v4 += 32;
		if (v3 != v4)
			break;
		if (!*a1)
			return 0i64;
		++a1;
	}
	return (unsigned int)(v3 - v4);
}

