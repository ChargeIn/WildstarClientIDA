//----- (000000014078B930) ----------------------------------------------------
__int64 __fastcall sub_14078B930(_QWORD* a1)
{
	__int64 v1; // rax
	unsigned __int64 v3; // rcx
	_DWORD* v4; // rax
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax

	v1 = a1[3];
	v3 = a1[2];
	v4 = (_DWORD*)(v1 + 16);
	if ((unsigned __int64)v4 >= v3)
		goto LABEL_8;
	if (v4 == dword_140A12138 || v4[2] != 5)
	{
		if ((unsigned __int64)v4 < v3 && v4 != dword_140A12138)
		{
			v5 = (int)v4[2];
			if ((_DWORD)v5 != -1)
			{
				v6 = off_140A123B0[v5];
				goto LABEL_9;
			}
		}
	LABEL_8:
		v6 = aNoValue;
	LABEL_9:
		v7 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v6);
		sub_140056570(a1, 2u, v7);
	}
	for (; a1[2] < (unsigned __int64)(a1[3] + 32i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 32i64;
	if (!(unsigned int)sub_140058CF0((__int64)a1, 1))
		sub_140056830(a1, (unsigned __int64*)aSetfenvCannotC);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

