//----- (000000014046BEC0) ----------------------------------------------------
int* __fastcall sub_14046BEC0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rsi
	__int64 v4; // r9
	__int64 v5; // r8
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	_DWORD* v9; // rdi
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // [rsp+40h] [rbp+8h] BYREF
	unsigned int v14; // [rsp+48h] [rbp+10h] BYREF
	__int64 v15; // [rsp+50h] [rbp+18h] BYREF

	v14 = a2;
	v3 = a1 + 5816;
	while (1)
	{
		v4 = *(_QWORD*)(v3 + 8);
		v5 = v4;
		v6 = *(_QWORD*)(v4 + 8);
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < a2)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v5 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v5 == v4 || a2 < *(_DWORD*)(v5 + 32))
		{
			v15 = *(_QWORD*)(v3 + 8);
			v7 = &v15;
		}
		else
		{
			v13 = v5;
			v7 = &v13;
		}
		v8 = *v7;
		if (v8 != *(_QWORD*)(a1 + 5824) && *(_QWORD*)(v8 + 40))
			return *(int**)(v8 + 40);
		if (a2 < 0x46)
		{
			v9 = (_DWORD*)sub_140217880(a2);
			if (v9)
				break;
		}
		a2 = 0;
		v14 = 0;
	}
	v11 = sub_14018B280(40i64, 0);
	v12 = v11;
	if (v11)
	{
		*(_QWORD*)v11 = 0i64;
		*((_QWORD*)v11 + 1) = 0i64;
		v11[5] = 1065353216;
		v11[6] = 1065353216;
		v11[7] = 1065353216;
		v11[8] = 1065353216;
	}
	else
	{
		v12 = 0i64;
	}
	v12[5] = 1065353216;
	v12[4] = v9[2];
	v12[7] = v9[4];
	v12[8] = v9[3];
	*(_QWORD*)sub_140055BE0(v3, &v14) = v12;
	return v12;
}

