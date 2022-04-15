//----- (000000014073A9C0) ----------------------------------------------------
__int64 __fastcall sub_14073A9C0(_QWORD* a1)
{
	int* v2; // rax
	int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // edx
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // [rsp+30h] [rbp+8h]

	v2 = (int*)sub_140056AB0(a1, 0xFFFFFFFF);
	if (v2)
		v3 = *v2;
	else
		v3 = 16;
	v4 = *(_QWORD*)(qword_140C65B98 + 72);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v10 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v10 = *(_QWORD*)(qword_140C65B98 + 72);
	if (v10 == v4 || v10 == -40)
		v7 = 0;
	else
		v7 = *(_DWORD*)(v10 + 72);
	v8 = a1[2];
	*(_DWORD*)(v8 + 8) = 3;
	result = 1i64;
	*(double*)v8 = (float)((float)v7 * 0.001);
	a1[2] += 16i64;
	return result;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

