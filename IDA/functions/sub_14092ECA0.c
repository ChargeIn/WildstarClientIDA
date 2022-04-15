//----- (000000014092ECA0) ----------------------------------------------------
char* __fastcall sub_14092ECA0(_QWORD* a1, _WORD* a2, int a3)
{
	_QWORD* v4; // r10
	char v5; // al
	__int64 v6; // r9
	__int64 v7; // rax
	_WORD* v8; // r9
	char v9; // al

	v4 = a1;
	if (a3 < 22)
	{
		v5 = sub_14092F340(a3 ^ 1);
		a2 = (_WORD*)(v6 + 2);
		*((_BYTE*)a2 - 2) = v5 - 16;
		*((_BYTE*)a2 - 1) = 13;
	}
	*a2 = -18103;
	v7 = v4[2];
	v8 = a2 + 1;
	v4[1] = v8;
	if ((v7 & 1) != 0)
		v4[2] = v7 | 0x10;
	else
		*(_QWORD*)v8 = v4[3];
	v9 = -31;
	if (a3 >= 23)
		v9 = -47;
	v8[4] = -191;
	*((_BYTE*)v8 + 10) = v9;
	return (char*)v8 + 11;
}
// 14092ECBD: variable 'v6' is possibly undefined
// 14092ECD0: variable 'v4' is possibly undefined
// 14092ECFF: variable 'a3' is possibly undefined

