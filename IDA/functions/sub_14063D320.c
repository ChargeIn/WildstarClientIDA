//----- (000000014063D320) ----------------------------------------------------
char __fastcall sub_14063D320(__int64 a1, _DWORD* a2)
{
	char* v2; // r8
	char v4; // al
	char v6; // al
	char* v7; // r9
	char* v8; // rcx
	__int64 v9; // r10
	unsigned __int64 v10; // r11
	char v11; // dl
	char v12; // cl
	char v13; // al
	char v14[256]; // [rsp+30h] [rbp-118h] BYREF

	*a2 = 16;
	v2 = *(char**)(a1 + 8);
	v4 = *v2;
	if (!*v2)
		return 0;
	while (v4 == 32)
	{
		v4 = *++v2;
		if (!v4)
			return 0;
	}
	v6 = *v2;
	if (!*v2)
		return 0;
	v7 = v2;
	v8 = v14;
	do
	{
		if (v6 == 32)
			break;
		++v7;
		*v8++ = v6;
		v6 = *v7;
	} while (*v7);
	v9 = 0i64;
	*v8 = 0;
	v10 = 0i64;
	do
		++v10;
	while (v2[v10]);
	while (1)
	{
		v11 = v14[v9];
		v12 = v11;
		if ((unsigned __int8)(v11 - 65) <= 0x19u)
			v12 = v11 + 32;
		v13 = aWait[v9];
		if ((unsigned __int8)(v13 - 65) <= 0x19u)
			v13 += 32;
		if (v12 != v13)
			return 0;
		if (!v11)
			break;
		++v9;
	}
	if (v7 + 1 - v2 < v10)
		*a2 = sub_14018E730(v7 + 1, 0xAui64);
	else
		*a2 = 1000;
	return 1;
}
// 14063D320: using guessed type char var_118[256];

