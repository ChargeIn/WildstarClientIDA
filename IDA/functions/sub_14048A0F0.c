//----- (000000014048A0F0) ----------------------------------------------------
__int64 __fastcall sub_14048A0F0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	_QWORD* v5; // rcx
	__int64 v7; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65930 + 264);
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
	if (v3 == v2 || (v7 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v7 = *(_QWORD*)(qword_140C65930 + 264);
	if (v7 == v2)
		return 2147500037i64;
	v5 = *(_QWORD**)(v7 + 40);
	if (!v5)
		return 2147500037i64;
	else
		return sub_140488640(v5, a2);
}
// 140C65930: using guessed type __int64 qword_140C65930;
