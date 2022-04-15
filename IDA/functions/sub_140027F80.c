//----- (0000000140027F80) ----------------------------------------------------
__int64 __fastcall sub_140027F80(__int64 a1)
{
	float v2; // xmm0_4
	__int64 v3; // rax

	v2 = sub_1400A76D0(*(_QWORD*)(qword_140C66DA8 + 544)).m128_f32[0];
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

