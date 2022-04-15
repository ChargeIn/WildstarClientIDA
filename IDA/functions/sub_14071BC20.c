//----- (000000014071BC20) ----------------------------------------------------
__int64 __fastcall sub_14071BC20(unsigned int* a1)
{
	_DWORD* v1; // rdx
	signed int v2; // r8d
	BOOL v3; // r9d
	__int64 result; // rax

	v1 = (_DWORD*)qword_140C65898;
	v2 = a1[97];
	v3 = a1[96] == 0;
	if (v2 >= *(_DWORD*)(qword_140C65898 + 29404))
	{
		result = a1[94];
		*(_DWORD*)(qword_140C65898 + 29412) = a1[95];
		v1[7352] = v3;
		v1[7350] = result;
		v1[7351] = v2;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

