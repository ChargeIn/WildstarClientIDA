//----- (00000001406C59F0) ----------------------------------------------------
__m128 __fastcall sub_1406C59F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int128 v4; // xmm0
	__int128 v6; // xmm6
	void(__fastcall * **v7)(_QWORD, __int64); // rax
	__m128 result; // xmm0

	sub_140001C90(a1, a2, a3, a4);
	v6 = v4;
	v7 = sub_1406C5440(a1);
	if (!v7)
		return (__m128)v6;
	result = (__m128) * (unsigned int*)(((__int64(__fastcall*)(void(__fastcall***)(_QWORD, __int64)))(*v7)[15])(v7)
		+ 132);
	if (result.m128_f32[0] <= *(float*)&v6)
		return (__m128)v6;
	return result;
}
// 1406C5A06: variable 'v4' is possibly undefined

