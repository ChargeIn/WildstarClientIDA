//----- (00000001406F9C10) ----------------------------------------------------
__int64 __fastcall sub_1406F9C10(__int64 a1)
{
	__int64 v1; // rdx
	float v2; // xmm0_4
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = *(float*)(qword_140C65898 + 1372);
	*(_DWORD*)(v1 + 8) = 3;
	result = 1i64;
	*(double*)v1 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

