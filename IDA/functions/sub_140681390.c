//----- (0000000140681390) ----------------------------------------------------
__int64 __fastcall sub_140681390(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64* v4; // rcx
	int v5; // edi
	int v6; // eax
	int v7; // edx
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // r8d
	unsigned int v12; // ecx
	__int64 v13; // rax
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0)
	{
		v13 = a1[2];
		*(_QWORD*)v13 = 0i64;
	LABEL_21:
		*(_DWORD*)(v13 + 8) = 3;
		goto LABEL_22;
	}
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = 0;
	v6 = *((_DWORD*)v4 + 2);
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v17))
	{
		v16 = 3;
		v4 = &v15;
		v15 = v17;
	LABEL_9:
		v7 = (int)*(double*)v4;
		goto LABEL_10;
	}
	v7 = 0;
LABEL_10:
	v8 = v7 - 1;
	if (v8 >= 0)
	{
		v10 = *(_QWORD*)(v3 + 8);
		v11 = *(_DWORD*)(v10 + 16);
		v12 = *(_DWORD*)(v10 + 108);
		if (v8 < v11)
		{
			if (v12 == -1)
			{
				v5 = *(_DWORD*)(*(_QWORD*)(v10 + 24) + 24i64) + v8 * *(_DWORD*)(*(_QWORD*)(v10 + 24) + 28i64);
			}
			else if (v8 >= v12 && v12 < v11)
			{
				v5 = *(_DWORD*)(*(_QWORD*)(v10 + 24) + 24i64) + *(_DWORD*)(*(_QWORD*)(v10 + 24) + 28i64) * (v8 - v12);
			}
		}
		v13 = a1[2];
		*(double*)v13 = (double)v5;
		goto LABEL_21;
	}
	v9 = a1[2];
	*(_QWORD*)v9 = 0i64;
	*(_DWORD*)(v9 + 8) = 3;
LABEL_22:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

