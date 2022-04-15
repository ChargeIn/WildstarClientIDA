//----- (0000000140694780) ----------------------------------------------------
__int64 __fastcall sub_140694780(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int* v5; // r8
	__int64 result; // rax
	unsigned int v7; // edx
	__int64 v8; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (int*)a1[2];
		result = 1i64;
		v7 = *(_DWORD*)(*(_QWORD*)v4 + 12i64);
		v5[2] = 1;
		*v5 = (v7 >> 2) & 1;
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0i64;
		*(_DWORD*)(v8 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

