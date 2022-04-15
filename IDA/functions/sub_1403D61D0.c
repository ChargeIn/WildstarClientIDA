//----- (00000001403D61D0) ----------------------------------------------------
int* __fastcall sub_1403D61D0(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
	__int64(__fastcall * *v7)(); // [rsp+28h] [rbp-30h]
	__int64 v8; // [rsp+30h] [rbp-28h]
	__int64 v9; // [rsp+38h] [rbp-20h]
	__int64 v10; // [rsp+40h] [rbp-18h]
	__int64 v11; // [rsp+48h] [rbp-10h]
	int* v12; // [rsp+60h] [rbp+8h] BYREF
	int* v13; // [rsp+70h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)(v2 + 8);
	v4 = (int*)v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < *a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)v2 || *a2 < v4[8])
	{
		v6 = *a2;
		v8 = 0i64;
		v9 = 0i64;
		LODWORD(v10) = 0;
		v12 = v4;
		v11 = v10;
		v7 = &off_140B66868;
		sub_1403D79D0(a1, &v13, (__int64*)&v12, &v6);
		v4 = v13;
	}
	return v4 + 10;
}
// 140B66868: using guessed type __int64 (__fastcall *off_140B66868)();

