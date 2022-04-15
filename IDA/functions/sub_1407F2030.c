//----- (00000001407F2030) ----------------------------------------------------
char __fastcall sub_1407F2030(char* a1, _OWORD* a2)
{
	char i; // cl
	char result; // al
	char* v5; // rbx
	char* v6; // rdx
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+30h] [rbp-18h]
	char v9; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v7, a2);
	for (i = *a1; *a1; i = *++a1)
	{
		if (i == ***(_BYTE***)(v7 + 240))
			break;
	}
	result = *a1;
	v5 = a1 + 1;
	if (result)
	{
		while (*v5 && ((*v5 - 69) & 0xDF) != 0)
			++v5;
		v6 = v5;
		do
			--v5;
		while (*v5 == 48);
		if (*v5 == ***(_BYTE***)(v7 + 240))
			--v5;
		do
		{
			result = *v6;
			++v5;
			++v6;
			*v5 = result;
		} while (result);
	}
	if (v9)
	{
		result = v8;
		*(_DWORD*)(v8 + 200) &= ~2u;
	}
	return result;
}

