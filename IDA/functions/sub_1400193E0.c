//----- (00000001400193E0) ----------------------------------------------------
int* __fastcall sub_1400193E0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	__int64 v4; // rax
	int* v6; // rbx
	unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF
	int* v10; // [rsp+50h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < *a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 != v2 && *a2 >= *(_DWORD*)(v4 + 32))
		return (int*)(v4 + 40);
	v7 = *a2;
	v8 = 0i64;
	v9 = v4;
	sub_14001A2E0(a1, &v10, &v9, &v7);
	v6 = v10;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return v6 + 10;
}

