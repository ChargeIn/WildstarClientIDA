//----- (00000001406031D0) ----------------------------------------------------
__int64 __fastcall sub_1406031D0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rdi
	__int64 v8; // r9
	bool v9; // al
	__int64 result; // rax
	__int64 v11; // rdi
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rdx
	unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *a2)
	{
		if (sub_14079EE60(v2, v2 + 16, &v16))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v16);
			if (v5)
				*(_DWORD*)(v5 + 304) = 0;
		}
		v6 = *(_QWORD*)(a1 + 64);
		*(_QWORD*)(v6 + 16) = a2[2];
		*(_QWORD*)(v6 + 24) = a2[3];
		v7 = *(_QWORD*)(a1 + 64);
		if (sub_14079EE60(v7, (__int64)(a2 + 2), &v16))
		{
			v8 = *(_QWORD*)(*(_QWORD*)(v7 + 88) + 8 * v16);
			if (v8)
			{
				*(_DWORD*)(v8 + 304) = 1;
				v9 = *((_DWORD*)a2 + 4) == *(_DWORD*)(a1 + 80) && a2[3] == *(_QWORD*)(a1 + 88);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_MemberPromoted", byte_1409EA094, v8 + 32, v9);
			}
		}
		return 0i64;
	}
	v11 = *(_QWORD*)(a1 + 72);
	if (!v11 || *(_QWORD*)(v11 + 72) != *a2)
		return 0i64;
	if (sub_14079EE60(*(_QWORD*)(a1 + 72), v11 + 16, &v16))
	{
		v12 = *(_QWORD*)(*(_QWORD*)(v11 + 88) + 8 * v16);
		if (v12)
			*(_DWORD*)(v12 + 304) = 0;
	}
	v13 = *(_QWORD*)(a1 + 72);
	*(_QWORD*)(v13 + 16) = a2[2];
	*(_QWORD*)(v13 + 24) = a2[3];
	v14 = *(_QWORD*)(a1 + 72);
	if (!sub_14079EE60(v14, (__int64)(a2 + 2), &v16))
		return 0i64;
	v15 = *(_QWORD*)(*(_QWORD*)(v14 + 88) + 8 * v16);
	result = 0i64;
	if (v15)
		*(_DWORD*)(v15 + 304) = 1;
	return result;
}
// 1409EA094: using guessed type _BYTE byte_1409EA094[128];
// 140C65898: using guessed type __int64 qword_140C65898;

