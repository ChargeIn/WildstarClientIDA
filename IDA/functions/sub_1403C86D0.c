//----- (00000001403C86D0) ----------------------------------------------------
__int64 sub_1403C86D0()
{
	__int64 v0; // rbx
	unsigned int v1; // ecx
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int v4; // ecx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v8; // rax

	v0 = qword_140C65898;
	if (qword_140C65B98
		&& (v1 = *(_DWORD*)(qword_140C65B98 + 264)) != 0
		&& (v2 = sub_140215240(v1)) != 0
		&& (v3 = sub_140214E00(*(_DWORD*)(v2 + 16))) != 0
		&& *(_DWORD*)(v3 + 52))
	{
		v4 = *(_DWORD*)(qword_140C65B98 + 264);
		if (v4)
		{
			v5 = sub_140215240(v4);
			if (v5)
			{
				v6 = sub_140214E00(*(_DWORD*)(v5 + 16));
				if (v6)
					return *(unsigned int*)(v6 + 52);
			}
		}
	}
	else
	{
		v8 = *(_QWORD*)(v0 + 29272);
		if (v8)
			return *(unsigned int*)(v8 + 68);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

