//----- (000000014038F600) ----------------------------------------------------
__int64 __fastcall sub_14038F600(_QWORD* a1, void(__fastcall*** a2)(_QWORD), __int64 a3)
{
	_QWORD* v4; // rcx
	__int64 v5; // rax
	__int64* v6; // rcx
	__int64 v7; // rbx
	int v8; // edx

	*a1 = a2;
	a1[1] = a3;
	(**a2)(a2);
	v4 = (_QWORD*)(*a1 + 48i64);
	if (!a1[2])
	{
		a1[2] = v4;
		a1[3] = *v4;
		*v4 = a1;
		v5 = a1[3];
		if (v5)
			*(_QWORD*)(v5 + 16) = a1 + 3;
	}
	v6 = *(__int64**)(*a1 + 32i64);
	if (v6)
		sub_140382E90(v6);
	if (*(_QWORD*)(*a1 + 32i64))
	{
		v7 = a1[1];
		v8 = *(_DWORD*)(v7 + 1056);
		*(_DWORD*)(v7 + 1056) = v8 + 1;
		if (!v8)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 48) + 16i64))(*(_QWORD*)(v7 + 48));
			sub_1403675C0(*(_QWORD**)(v7 + 16), v7);
		}
	}
	return 0i64;
}

