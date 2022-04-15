//----- (0000000140748E60) ----------------------------------------------------
__int64 __fastcall sub_140748E60(__int64 a1)
{
	__int64 v1; // r8
	int v2; // edx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = *(unsigned __int8*)(qword_140C65898 + 28140);
	*(_DWORD*)(v1 + 8) = 3;
	result = 1i64;
	*(double*)v1 = (double)(v2 + 1);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

