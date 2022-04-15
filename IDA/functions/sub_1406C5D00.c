//----- (00000001406C5D00) ----------------------------------------------------
__int64 __fastcall sub_1406C5D00(__int64 a1, float a2)
{
	__m128* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rax
	__m128 v6[2]; // [rsp+40h] [rbp-38h] BYREF

	v3 = sub_1406C5D70(a1, v6);
	v4 = sub_1406C5440(a1);
	return sub_1406C5A40(a1, *(_QWORD*)(a1 + 3080), a1 + 1800, a1 + 2088, (__int64)v4, (__int64)v3, a2);
}
// 1406C5D00: using guessed type __m128 var_38[2];

