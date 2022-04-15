//----- (00000001405533C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405533C0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rdx
	__int64 v3; // rcx
	__int64 v5; // [rsp+8h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 96);
	v2 = v1;
	v3 = *(_QWORD*)(v1 + 8);
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32))
		{
			v2 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
		else
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
	}
	if (v2 == v1 || (v5 = v2, *(_DWORD*)(v2 + 32) > 1u))
		v5 = v1;
	return v5 != v1;
}

