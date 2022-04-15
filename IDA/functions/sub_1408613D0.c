//----- (00000001408613D0) ----------------------------------------------------
void __fastcall sub_1408613D0(__int64 a1)
{
	float v1; // xmm7_4
	double v3; // xmm0_8
	_BYTE* v4; // rcx
	__int64 v5; // rbx
	double v6; // xmm0_8
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rax

	v1 = 0.0;
	if ((*(_BYTE*)(a1 + 32) & 1) != 0)
	{
		v3 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
		v1 = *(float*)&v3;
	}
	v4 = *(_BYTE**)(a1 + 24);
	if ((v4[380] & 0x20) == 0)
		(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v4 + 120i64))(v4);
	v5 = *(_QWORD*)(a1 + 24);
	v6 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), *(float*)(v5 + 208) * 0.00083333335);
	sub_14085F880(v5, v1 / *(float*)&v6);
	v7 = *(_QWORD*)(a1 + 24);
	LODWORD(v5) = *(_DWORD*)(v7 + 120);
	v8 = sub_14085EAB0(v7);
	sub_14083B840(qword_140C61B80, v5, v1, v1 / *(float*)&v6, v8);
	v9 = *(_QWORD*)(a1 + 24);
	if ((*(_DWORD*)(v9 + 8) & 0x10000) != 0)
		sub_140845270(qword_140C61B60, *(_DWORD*)(v9 + 120), a1);
}
// 140C61B60: using guessed type __int64 qword_140C61B60;
// 140C61B80: using guessed type __int64 qword_140C61B80;

