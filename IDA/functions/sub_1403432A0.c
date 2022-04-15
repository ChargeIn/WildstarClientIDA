//----- (00000001403432A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403432A0(__int64 a1)
{
	float* v1; // rax
	float v2; // xmm6_4

	v1 = *(float**)(a1 + 112);
	if (v1)
		v2 = *v1;
	else
		v2 = *(float*)(a1 + 124);
	return (*(float(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65858 + 280i64))(
		qword_140C65858,
		*(_QWORD*)(a1 + 40)) > v2;
}
// 140C65858: using guessed type __int64 qword_140C65858;

