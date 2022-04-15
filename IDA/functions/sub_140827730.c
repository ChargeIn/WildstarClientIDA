//----- (0000000140827730) ----------------------------------------------------
__int64 __fastcall sub_140827730(__int64* a1, __int128* a2)
{
	unsigned int v5; // esi
	__int64 v6; // rcx
	unsigned int v7; // ebx
	int v8; // eax
	char v9; // [rsp+30h] [rbp-38h] BYREF
	__int64 v10; // [rsp+31h] [rbp-37h]
	__int64 v11; // [rsp+39h] [rbp-2Fh]
	__int64 v12; // [rsp+41h] [rbp-27h]
	__int64 v13; // [rsp+49h] [rbp-1Fh]
	__int16 v14; // [rsp+51h] [rbp-17h]
	char v15; // [rsp+53h] [rbp-15h]

	dword_140C10F18 = 3;
	dword_140C10F1C = 3;
	if (!(unsigned __int8)sub_140881950())
		return 74i64;
	if (!qword_140C62930)
		return 75i64;
	v5 = 0x1000000;
	if (a1)
	{
		v6 = *a1;
		qword_140C61B00 = *a1;
		qword_140C61B08 = a1[1];
		qword_140C61B10 = a1[2];
		qword_140C61B18 = a1[3];
		qword_140C61B20 = a1[4];
		qword_140C61B28 = a1[5];
	}
	else
	{
		v6 = 0i64;
		qword_140C61B08 = 0xFF000000FFi64;
		qword_140C61B10 = 0x3F80000001000000i64;
		qword_140C61B18 = 0xFFFFFFFF00040000ui64;
		qword_140C61B00 = 0i64;
		LOBYTE(qword_140C61B20) = 0;
		HIDWORD(qword_140C61B20) = 1;
		qword_140C61B28 = 0x1000000040000i64;
	}
	qword_140C61B30 = v6;
	sub_140831300(a2);
	v7 = 2;
	if (!byte_140C61B50)
	{
		if (dword_140C10F20 == -1)
		{
			if ((unsigned int)qword_140C61B10 > 0x40)
				v5 = qword_140C61B10;
			v8 = sub_140881BC0(0i64, v5, 0x40u, 1, 0);
			dword_140C10F20 = v8;
			dword_140C10F68 = v8;
			if (v8 == -1)
			{
				v7 = 52;
				goto LABEL_18;
			}
		}
		v7 = sub_140827DA0(a1);
		if (v7 != 1 || (v7 = sub_140827950(), v7 != 1))
		{
			sub_140828F70();
			v8 = dword_140C10F20;
		LABEL_18:
			if (!byte_140C61B50 && v8 != -1)
			{
				sub_140881DD0(v8);
				dword_140C10F20 = -1;
			}
			goto LABEL_21;
		}
		byte_140C61B50 = 1;
	}
LABEL_21:
	v9 = 0;
	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v14 = 0;
	v15 = 0;
	sub_1407DEB70((__int64)&v9, "779AD1D9-3419-4cbf-933B-B038DF5A2818", 0x24ui64);
	return v7;
}
// 140C10F18: using guessed type int dword_140C10F18;
// 140C10F1C: using guessed type int dword_140C10F1C;
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F68: using guessed type int dword_140C10F68;
// 140C61B00: using guessed type __int64 qword_140C61B00;
// 140C61B08: using guessed type __int64 qword_140C61B08;
// 140C61B10: using guessed type __int64 qword_140C61B10;
// 140C61B18: using guessed type __int64 qword_140C61B18;
// 140C61B20: using guessed type __int64 qword_140C61B20;
// 140C61B28: using guessed type __int64 qword_140C61B28;
// 140C61B30: using guessed type __int64 qword_140C61B30;
// 140C61B50: using guessed type char byte_140C61B50;
// 140C62930: using guessed type __int64 qword_140C62930;

