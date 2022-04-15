//----- (000000014048A1F0) ----------------------------------------------------
__int64 __fastcall sub_14048A1F0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 result; // rax
	unsigned int v8; // ecx
	__int64 v9; // [rsp+30h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C65930 + 264);
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
	if (v4 == v3 || (v9 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(qword_140C65930 + 264);
	if (v9 == v3)
		return 2147500037i64;
	v6 = *(_QWORD*)(v9 + 40);
	if (!v6)
		return 2147500037i64;
	result = sub_1404886F0(*(_QWORD**)(v9 + 40), a2);
	v8 = result;
	if ((int)result >= 0)
	{
		if (*(_DWORD*)(*(_QWORD*)v6 + 24i64) != 1)
			return v8;
		result = sub_1404887A0(v6, a2);
		v8 = result;
		if ((int)result >= 0)
			return v8;
	}
	return result;
}
// 140C65930: using guessed type __int64 qword_140C65930;

