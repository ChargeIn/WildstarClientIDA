//----- (00000001400568D0) ----------------------------------------------------
__int64 __fastcall sub_1400568D0(_QWORD* a1)
{
	_DWORD* v2; // rax
	const char* v3; // r11
	char* v4; // rcx
	unsigned int v5; // r10d
	__int64 v6; // r9
	signed __int64 v7; // r8
	int v8; // eax
	int v9; // edx
	const char* v10; // rax

	v2 = sub_1400580E0((__int64)a1, 1);
	if (v2 == dword_140A12138 || (int)v2[2] <= 0)
		v3 = aCollect;
	else
		v3 = (const char*)sub_140056BB0(a1, 1u, 0i64);
	v4 = aStop_0;
	v5 = 0;
	v6 = 0i64;
	if (!aStop_0)
	{
	LABEL_11:
		v10 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"invalid option '%s'", v3);
		sub_140056570(a1, 1u, v10);
	}
	while (1)
	{
		v7 = v3 - v4;
		do
		{
			v8 = (unsigned __int8)v4[v7];
			v9 = (unsigned __int8)*v4 - v8;
			if (v9)
				break;
			++v4;
		} while (v8);
		if (!v9)
			return v5;
		v4 = off_140B50D90[++v6];
		++v5;
		if (!v4)
			goto LABEL_11;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B50D90: using guessed type char *off_140B50D90[7];

