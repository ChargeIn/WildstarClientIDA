//----- (00000001401DDF30) ----------------------------------------------------
int* __fastcall sub_1401DDF30(__int64 a1, int* a2)
{
	__int64 v2; // r10
	__int64 v3; // r8
	int* v4; // rax
	int v6[10]; // [rsp+20h] [rbp-28h] BYREF
	int* v7; // [rsp+50h] [rbp+8h] BYREF
	int* v8; // [rsp+60h] [rbp+18h] BYREF

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
		v6[0] = *a2;
		v6[1] = v6[0];
		v7 = v4;
		v6[2] = v6[0];
		v6[3] = v6[0];
		v6[4] = v6[0];
		sub_1401DE930(a1, &v8, (__int64*)&v7, v6);
		v4 = v8;
	}
	return v4 + 9;
}

