//----- (00000001404CD230) ----------------------------------------------------
__int64 __fastcall sub_1404CD230(__int64 a1, int a2, int a3, int a4)
{
	_DWORD* v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rdi
	int v9; // eax
	int v10; // eax
	int v11; // r9d
	int v12; // ebp
	int v13; // r14d
	unsigned int v14; // ebx
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rax
	int v18; // ecx
	__int64 result; // rax
	int v20; // ecx
	int v21; // ebx
	int v22; // eax
	int v23; // ebx
	__int64 v24; // rax
	__int64 v25; // rax
	int v26; // ecx

	v6 = (_DWORD*)sub_1403D90D0(qword_140C65898, a2);
	v7 = sub_1403D90D0(qword_140C65898, a3);
	v8 = v7;
	if (!v6 || !v7)
		return 0i64;
	v9 = v6[32];
	if (v9 == 20 || v9 == 23)
	{
		v10 = *(_DWORD*)(v8 + 128);
		if (v10 == 20 || v10 == 23)
			return 0i64;
	}
	v11 = dword_140DC31A8;
	v12 = *(_DWORD*)(v8 + 36) & 8;
	v13 = v6[9] & 8;
	v14 = 0;
	if ((dword_140DC31A8 & 1) == 0)
	{
		dword_140DC31A8 |= 1u;
		v15 = sub_140200220(0x2CFu);
		if (v15)
			v16 = *(_DWORD*)(v15 + 4);
		else
			v16 = 0;
		v11 = dword_140DC31A8;
		dword_140DC31AC = v16;
	}
	if ((v11 & 2) != 0)
	{
		v14 = dword_140DC31B0;
	}
	else
	{
		dword_140DC31A8 = v11 | 2;
		v17 = sub_140200220(0x2CDu);
		if (v17)
			v14 = *(_DWORD*)(v17 + 4);
		v11 = dword_140DC31A8;
		dword_140DC31B0 = v14;
	}
	v18 = v6[32];
	result = (unsigned int)dword_140DC31AC;
	if (v18 == 20 || v18 == 23 || (v20 = *(_DWORD*)(v8 + 128), v20 == 20) || v20 == 23)
		result = v14;
	if (v13)
	{
		if (v12)
			return 0i64;
		else
			return (unsigned int)-(int)result;
	}
	else if (!v12)
	{
		v21 = *(_DWORD*)(v8 + 60);
		if (!v21)
			v21 = *(_DWORD*)(v8 + 56);
		v22 = v6[15];
		if (!v22)
			v22 = v6[14];
		v23 = v21 - v22;
		if (a4 && *(_QWORD*)(v8 + 24))
			v23 += sub_14045BA60(v8);
		if ((v11 & 4) != 0)
		{
			result = (unsigned int)dword_140DC31B4;
		}
		else
		{
			dword_140DC31A8 = v11 | 4;
			v24 = sub_140200220(0x30Cu);
			if (v24)
			{
				result = *(unsigned int*)(v24 + 4);
				v11 = dword_140DC31A8;
				dword_140DC31B4 = result;
			}
			else
			{
				v11 = dword_140DC31A8;
				result = 4294967289i64;
				dword_140DC31B4 = -7;
			}
		}
		if ((v11 & 8) != 0)
		{
			v26 = dword_140DC31B8;
		}
		else
		{
			dword_140DC31A8 = v11 | 8;
			v25 = sub_140200220(0x30Du);
			if (v25)
			{
				v26 = *(_DWORD*)(v25 + 4);
				result = (unsigned int)dword_140DC31B4;
				dword_140DC31B8 = v26;
			}
			else
			{
				result = (unsigned int)dword_140DC31B4;
				v26 = 7;
				dword_140DC31B8 = 7;
			}
		}
		if (v23 >= (int)result)
		{
			result = (unsigned int)v23;
			if (v23 > v26)
				return (unsigned int)v26;
		}
	}
	return result;
}
// 1404CD3A9: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC31A8: using guessed type int dword_140DC31A8;
// 140DC31AC: using guessed type int dword_140DC31AC;
// 140DC31B0: using guessed type int dword_140DC31B0;
// 140DC31B4: using guessed type int dword_140DC31B4;
// 140DC31B8: using guessed type int dword_140DC31B8;

