//----- (00000001403D2690) ----------------------------------------------------
int* __fastcall sub_1403D2690(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF
	int* v7; // [rsp+40h] [rbp+18h] BYREF
	int* v8; // [rsp+48h] [rbp+20h] BYREF

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
	if (v4 == (int*)v2 || *a2 < (unsigned int)v4[8])
	{
		v6 = (unsigned int)*a2;
		v7 = v4;
		sub_140032B30(a1, &v8, (__int64*)&v7, &v6);
		v4 = v8;
	}
	return v4 + 9;
}
