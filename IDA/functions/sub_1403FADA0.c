//----- (00000001403FADA0) ----------------------------------------------------
int* __fastcall sub_1403FADA0(__int64 a1, int* a2)
{
	__int64 v2; // r11
	__int64 v4; // r8
	int* v5; // rax
	int v6; // r9d
	int v7; // ecx
	int v8; // ecx
	int v10[4]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+30h] [rbp-18h]
	int* v12; // [rsp+50h] [rbp+8h] BYREF
	int* v13; // [rsp+60h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = (int*)v2;
	while (v4)
	{
		v6 = *(_DWORD*)(v4 + 32) - *a2;
		if (!v6)
		{
			v6 = *(_DWORD*)(v4 + 36) - a2[1];
			if (!v6)
				v6 = *(_DWORD*)(v4 + 40) - a2[2];
		}
		if (v6 < 0)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = (int*)v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == (int*)v2)
		goto LABEL_14;
	v7 = *a2 - v5[8];
	if (*a2 == v5[8])
	{
		v7 = a2[1] - v5[9];
		if (!v7)
			v7 = a2[2] - v5[10];
	}
	if (v7 < 0)
	{
	LABEL_14:
		v10[0] = *a2;
		v8 = a2[1];
		v11 = 0i64;
		v10[1] = v8;
		v10[2] = a2[2];
		v12 = v5;
		sub_1403FC0B0(a1, &v13, (__int64*)&v12, v10);
		v5 = v13;
	}
	return v5 + 12;
}

