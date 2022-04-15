//----- (00000001407981B0) ----------------------------------------------------
__int64 __fastcall sub_1407981B0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v3; // rcx
	double v4; // xmm6_8
	__int64 v5; // rcx
	const char* v6; // r9
	const char* v7; // rax
	unsigned __int64 v8; // r8
	__int64* v9; // rdx
	__int64 v10; // rax
	__int64* v11; // rax
	int v12; // ecx
	double v13; // xmm0_8
	__int64 v14; // rcx
	__int64 result; // rax
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF

	v1 = (_DWORD*)a1[3];
	v3 = a1[2];
	v4 = 0.0;
	if ((unsigned __int64)v1 >= v3)
		goto LABEL_8;
	if (v1 == dword_140A12138 || v1[2] != 5)
	{
		if ((unsigned __int64)v1 < v3 && v1 != dword_140A12138)
		{
			v5 = (int)v1[2];
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
		sub_140056570(a1, 1u, v7);
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	while (1)
	{
		v8 = a1[2];
		v9 = (__int64*)dword_140A12138;
		if (a1[3] < v8)
			v9 = (__int64*)a1[3];
		if (!(unsigned int)sub_14005BA70((__int64)a1, *v9, v8 - 16))
			break;
		v10 = a1[2];
		a1[2] = v10;
		v11 = (__int64*)(v10 - 16);
		if (v11 != (__int64*)dword_140A12138 && *((_DWORD*)v11 + 2) == 3)
		{
			v12 = *((_DWORD*)v11 + 2);
			if (v12 != 3)
			{
				if (v12 != 4 || !sub_14005AC80((char*)(*v11 + 32), (unsigned __int64*)&v18))
				{
					v13 = 0.0;
					goto LABEL_21;
				}
				v17 = 3;
				v11 = &v16;
				v16 = v18;
			}
			v13 = *(double*)v11;
		LABEL_21:
			if (v13 > v4)
				v4 = v13;
		}
	}
	a1[2] -= 16i64;
	v14 = a1[2];
	result = 1i64;
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = v4;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

