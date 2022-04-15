//----- (00000001403CB6E0) ----------------------------------------------------
__int64 __fastcall sub_1403CB6E0(unsigned __int64 a1, unsigned int a2, float a3)
{
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	char v7[24]; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF

	v8 = a1;
	v3 = *(_QWORD*)(qword_140C65898 + 7096);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = v3;
	if (v8 == v3)
	{
		v8 = __PAIR64__(LODWORD(a3), a2);
		sub_140032F50(qword_140C65898 + 7088, (__int64)v7, &v8);
	}
	else
	{
		*(float*)(v8 + 36) = a3;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403CB6E0: using guessed type char var_18[24];

