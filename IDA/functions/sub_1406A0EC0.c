//----- (00000001406A0EC0) ----------------------------------------------------
__int64 __fastcall sub_1406A0EC0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rcx
	__int64 v5; // rax
	int v6; // eax
	int v7; // eax
	_DWORD* v8; // rax
	const char** v9; // rax
	__int64 v11; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0)
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
	LABEL_15:
		v8[2] = 1;
		goto LABEL_16;
	}
	if (!*(_QWORD*)(v3 + 8))
	{
		if ((dword_140DC4B04 & 1) == 0)
		{
			dword_140DC4B04 |= 1u;
			v5 = sub_140200220(0x439u);
			if (v5)
				v6 = *(_DWORD*)(v5 + 12);
			else
				v6 = 200;
			dword_140DC4B08 = v6;
		}
		v7 = sub_140056D60(a1, 2u);
		if (v7 < 1 || v7 >(unsigned int)dword_140DC4B08)
		{
			v9 = (const char**)sub_14018DED0(&v11, (__int64)"count must be between 1 and %d", (unsigned int)dword_140DC4B08);
			sub_140056570(a1, 2u, *v9);
		}
		*(_DWORD*)(v3 + 20) = v7;
		v8 = (_DWORD*)a1[2];
		*v8 = 1;
		goto LABEL_15;
	}
	v4 = (_DWORD*)a1[2];
	*v4 = 0;
	v4[2] = 1;
LABEL_16:
	a1[2] += 16i64;
	return 1i64;
}
// 140DC4B04: using guessed type int dword_140DC4B04;
// 140DC4B08: using guessed type int dword_140DC4B08;

