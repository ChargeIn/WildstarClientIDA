//----- (000000014004AD10) ----------------------------------------------------
__int64 __fastcall sub_14004AD10(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax
	int v6; // ecx
	__int64 v7; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
			if (v4)
			{
				v5 = (_DWORD*)(a1[3] + 16i64);
				if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
					v6 = 0;
				else
					v6 = sub_140056D60(a1, 2u);
				v7 = *(_QWORD*)(v4 + 5088);
				*(_QWORD*)(v7 + 24) = v4;
				*(_DWORD*)(v7 + 32) = v6;
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

