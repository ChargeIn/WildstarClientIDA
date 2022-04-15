//----- (000000014003CC10) ----------------------------------------------------
int* __fastcall sub_14003CC10(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r9
	__int64 v4; // rax
	int* v5; // rbx
	int* v7; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+28h] [rbp-40h]
	__int64 v9; // [rsp+30h] [rbp-38h]
	unsigned int v10; // [rsp+38h] [rbp-30h] BYREF
	int* v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+50h] [rbp-18h]
	int* v14; // [rsp+70h] [rbp+8h] BYREF
	int* v15; // [rsp+80h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = (int*)v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < *a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = (int*)v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == (int*)v2 || *a2 < v5[8])
	{
		v7 = 0i64;
		v8 = 0i64;
		v9 = 0i64;
		v10 = *a2;
		sub_14003CD40(&v11, &v7);
		v14 = v5;
		sub_14003CE80(a1, &v15, (__int64*)&v14, &v10);
		v5 = v15;
		if (v13)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		if (v11)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		if (v7)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	}
	return v5 + 10;
}

