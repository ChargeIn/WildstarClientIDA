//----- (00000001404532A0) ----------------------------------------------------
int* __fastcall sub_1404532A0(__int64 a1, int* a2)
{
	__int64 v2; // r10
	__int64 v4; // r8
	int* v5; // rax
	int v6; // ecx
	int v8; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+24h] [rbp-14h]
	int v10; // [rsp+2Ch] [rbp-Ch]
	int* v11; // [rsp+40h] [rbp+8h] BYREF
	int* v12; // [rsp+50h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = (int*)v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < (unsigned int)*a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = (int*)v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == (int*)v2 || *a2 < (unsigned int)v5[8])
	{
		v6 = *a2;
		v9 = 0i64;
		v10 = 0;
		v8 = v6;
		v11 = v5;
		sub_1403AE630(a1, &v12, (__int64*)&v11, &v8);
		v5 = v12;
	}
	return v5 + 9;
}

