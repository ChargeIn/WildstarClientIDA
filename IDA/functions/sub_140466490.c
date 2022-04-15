//----- (0000000140466490) ----------------------------------------------------
__int64 __fastcall sub_140466490(__int64 a1, float a2)
{
	bool v2; // zf
	__int64 v3; // rbx
	double v4; // xmm2_8
	__int64 result; // rax

	v2 = *(_DWORD*)(a1 + 3408) == 0;
	*(float*)(a1 + 68) = a2;
	if (!v2)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504);
		v4 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 120) + 96i64))(*(_QWORD*)(qword_140C65898 + 120));
		return sub_1400EA3E0(v3, "BreathChanged", byte_1409EBCF4, (unsigned int)(int)a2, v4, 0i64, 0i64);
	}
	return result;
}
// 1409EBCF4: using guessed type _BYTE byte_1409EBCF4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

