//----- (00000001403CB770) ----------------------------------------------------
__int64 __fastcall sub_1403CB770(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	v6 = a1;
	v2 = *(_QWORD*)(qword_140C65898 + 7096);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v6 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v6 = v2;
	if (v6 != v2)
		sub_1403D58A0(qword_140C65898 + 7088, &v6);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

