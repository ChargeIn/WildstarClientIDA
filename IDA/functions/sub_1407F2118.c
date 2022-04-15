//----- (00000001407F2118) ----------------------------------------------------
char __fastcall sub_1407F2118(char* a1, _OWORD* a2)
{
	char v3; // dl
	char* v4; // rbx
	char v5; // al
	char result; // al
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+30h] [rbp-18h]
	char v9; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v7, a2);
	if ((unsigned int)sub_1407F69AC(*a1) != 101)
	{
		do
			++a1;
		while ((unsigned int)sub_1407DE874((unsigned __int8)*a1));
	}
	if ((unsigned int)sub_1407F69AC(*a1) == 120)
		a1 += 2;
	v3 = *a1;
	*a1 = ***(_BYTE***)(v7 + 240);
	v4 = a1 + 1;
	do
	{
		v5 = *v4;
		*v4 = v3;
		v3 = v5;
		result = *v4++;
	} while (result);
	if (v9)
	{
		result = v8;
		*(_DWORD*)(v8 + 200) &= ~2u;
	}
	return result;
}

