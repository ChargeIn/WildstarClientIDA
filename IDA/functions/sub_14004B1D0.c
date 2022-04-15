//----- (000000014004B1D0) ----------------------------------------------------
__int64 __fastcall sub_14004B1D0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64* v6; // rdx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
			if (v4)
			{
				*(_DWORD*)(v4 + 4892) = sub_140056D60(a1, 2u);
				sub_140031E80(v4 + 4728);
				sub_1400321C0(v5, v4 + 4728, *(_DWORD*)(v4 + 4884), *(_DWORD*)(v4 + 4888), *(_DWORD*)(v4 + 4892));
				v6 = *(__int64**)(v4 + 16);
				if (v6)
				{
					sub_14002F5D0(v4 + 32, v6, 0i64);
					sub_14002FE90(v4 + 32, *(_QWORD*)(v4 + 16));
					sub_140030080(v4 + 32, *(_QWORD*)(v4 + 16));
				}
			}
		}
	}
	return 0i64;
}
// 14004B269: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

