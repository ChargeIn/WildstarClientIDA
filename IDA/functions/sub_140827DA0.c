#include "../winhttp.h"

//----- (0000000140827DA0) ----------------------------------------------------
__int64 __fastcall sub_140827DA0(_QWORD* a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rax
	struct _RTL_CRITICAL_SECTION* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	char* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned int* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	struct _RTL_CRITICAL_SECTION* v20; // rax
	struct _RTL_CRITICAL_SECTION* v21; // rax
	LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

	v2 = 1;
	QueryPerformanceFrequency(&Frequency);
	*(float*)&dword_140C61FE8 = (float)(int)(Frequency.QuadPart / 1000);
	if (!qword_140C61BA8)
	{
		v3 = sub_1408819F0(dword_140C10F20, 17512i64);
		if (!v3)
		{
			qword_140C61BA8 = 0i64;
			goto LABEL_50;
		}
		v4 = (struct _RTL_CRITICAL_SECTION*)sub_140826E10(v3);
		qword_140C61BA8 = v4;
		if (!v4)
			goto LABEL_50;
		sub_140830F20(v4);
	}
	if (!qword_140C61BB0)
	{
		v5 = sub_1408819F0(dword_140C10F20, 4760i64);
		if (!v5)
		{
			qword_140C61BB0 = 0i64;
			goto LABEL_50;
		}
		v6 = sub_1408351C0(v5);
		qword_140C61BB0 = v6;
		if (!v6)
			goto LABEL_50;
		v2 = sub_140836CF0(v6);
		if (v2 != 1)
			goto LABEL_51;
	}
	if (!qword_140C61B90)
	{
		v7 = sub_1408819F0(dword_140C10F20, 72i64);
		if (!v7)
		{
			qword_140C61B90 = 0i64;
			goto LABEL_50;
		}
		*(_QWORD*)(v7 + 8) = 0i64;
		*(_QWORD*)(v7 + 16) = 0i64;
		*(_QWORD*)(v7 + 24) = 0i64;
		*(_QWORD*)(v7 + 32) = 0i64;
		*(_QWORD*)(v7 + 40) = 0i64;
		*(_QWORD*)(v7 + 48) = 0i64;
		*(_QWORD*)(v7 + 56) = 0i64;
		*(_QWORD*)(v7 + 64) = 0i64;
		qword_140C61B90 = v7;
		v2 = sub_140845110((_DWORD*)v7);
		if (v2 != 1)
			goto LABEL_51;
	}
	if (!qword_140C61B58)
	{
		v8 = sub_1408819F0(dword_140C10F20, 2408i64);
		if (!v8)
		{
			qword_140C61B58 = 0i64;
			goto LABEL_50;
		}
		v9 = (char*)sub_14083DE30(v8);
		qword_140C61B58 = (__int64)v9;
		if (!v9)
			goto LABEL_50;
		v2 = sub_14083EE50(v9);
		if (v2 != 1)
			goto LABEL_51;
	}
	if (!qword_140C61B80)
	{
		v10 = sub_1408819F0(dword_140C10F20, 368i64);
		if (!v10)
		{
			qword_140C61B80 = 0i64;
			goto LABEL_50;
		}
		v11 = sub_140826F10(v10);
		qword_140C61B80 = v11;
		if (!v11)
			goto LABEL_50;
		v2 = sub_14083B790(v11);
		if (v2 != 1)
			goto LABEL_51;
	}
	if (!qword_140C61B60)
	{
		v12 = sub_1408819F0(dword_140C10F20, 72i64);
		if (!v12)
		{
			qword_140C61B60 = 0i64;
			goto LABEL_50;
		}
		v13 = sub_14088C4E0(v12);
		qword_140C61B60 = v13;
		if (!v13)
			goto LABEL_50;
		v2 = sub_140845440(v13);
		if (v2 != 1)
			goto LABEL_51;
	}
	if (!qword_140C61BA0)
	{
		v14 = sub_1408819F0(dword_140C10F20, 1608i64);
		if (!v14)
		{
			qword_140C61BA0 = 0i64;
			goto LABEL_50;
		}
		v15 = sub_140830170(v14);
		qword_140C61BA0 = v15;
		if (!v15)
			goto LABEL_50;
		v2 = sub_1408303C0(v15);
		if (v2 != 1)
			goto LABEL_51;
	}
	if (!qword_140C61B70)
	{
		v16 = sub_1408819F0(dword_140C10F20, 56i64);
		if (!v16)
		{
			qword_140C61B70 = 0i64;
			goto LABEL_50;
		}
		v17 = (unsigned int*)sub_14083A940(v16);
		qword_140C61B70 = (__int64)v17;
		if (!v17)
			goto LABEL_50;
		v2 = sub_14083AE30(v17, HIDWORD(qword_140C61B08));
		if (v2 != 1)
			goto LABEL_51;
	}
	if (qword_140C61B98)
		goto LABEL_36;
	v18 = sub_1408819F0(dword_140C10F20, 32i64);
	if (!v18)
	{
		qword_140C61B98 = 0i64;
		goto LABEL_50;
	}
	v19 = sub_14083A3E0(v18);
	qword_140C61B98 = v19;
	if (v19)
	{
		v2 = sub_14083A540(v19, qword_140C61B08);
		if (v2 != 1)
			goto LABEL_51;
	LABEL_36:
		if (qword_140C61B78)
			goto LABEL_51;
		v20 = (struct _RTL_CRITICAL_SECTION*)sub_1408819F0(dword_140C10F20, 192i64);
		if (v20)
		{
			v21 = sub_140829B70(v20);
			qword_140C61B78 = (__int64)v21;
			if (v21)
			{
				v2 = sub_14082A280((__int64)v21);
				goto LABEL_51;
			}
		}
		else
		{
			qword_140C61B78 = 0i64;
		}
	}
LABEL_50:
	v2 = 52;
LABEL_51:
	if (a1)
	{
		*a1 = qword_140C61B00;
		a1[1] = qword_140C61B08;
		a1[2] = qword_140C61B10;
		a1[3] = qword_140C61B18;
		a1[4] = qword_140C61B20;
		a1[5] = qword_140C61B28;
	}
	return v2;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B00: using guessed type __int64 qword_140C61B00;
// 140C61B08: using guessed type __int64 qword_140C61B08;
// 140C61B10: using guessed type __int64 qword_140C61B10;
// 140C61B18: using guessed type __int64 qword_140C61B18;
// 140C61B20: using guessed type __int64 qword_140C61B20;
// 140C61B28: using guessed type __int64 qword_140C61B28;
// 140C61B58: using guessed type __int64 qword_140C61B58;
// 140C61B60: using guessed type __int64 qword_140C61B60;
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B78: using guessed type __int64 qword_140C61B78;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 140C61B90: using guessed type __int64 qword_140C61B90;
// 140C61B98: using guessed type __int64 qword_140C61B98;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;
// 140C61FE8: using guessed type int dword_140C61FE8;

