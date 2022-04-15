//----- (000000014083E5E0) ----------------------------------------------------
__int64 __fastcall sub_14083E5E0(int* a1, int a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r9
	__int64 v8; // rax

	result = sub_1408819F0(*a1, 24i64);
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)&a1[2 * a3 + 2];
		*(_DWORD*)(v7 + 8) = a2;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)&a1[2 * a3 + 2] = v7;
		++a1[64];
		return v7 + 16;
	}
	return result;
}

