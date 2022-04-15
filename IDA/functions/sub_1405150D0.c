//----- (00000001405150D0) ----------------------------------------------------
__int64 __fastcall sub_1405150D0(__int64 a1)
{
	int* v1; // rax
	int v3; // eax
	int v4; // ecx
	__int64 result; // rax

	if (!a1)
		return 8i64;
	v1 = *(int**)(a1 + 72);
	if (!(v1 ? *(_QWORD*)(a1 + 72) : *(_QWORD*)(a1 + 64) + 8i64))
		return 8i64;
	if (!v1)
		v1 = (int*)(*(_QWORD*)(a1 + 64) + 8i64);
	v3 = *v1;
	v4 = 1;
	if (v3 > 1)
		v4 = v3;
	result = 7i64;
	if (v4 < 7)
		return (unsigned int)v4;
	return result;
}

