//----- (000000014077A940) ----------------------------------------------------
__int64 __fastcall sub_14077A940(__int64 a1)
{
	__int64 v2; // rcx
	float* v3; // rdi
	unsigned int i; // ebx
	__int64 result; // rax
	__int64 v6; // [rsp+20h] [rbp-18h]

	v2 = qword_140C65898;
	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 29504))
	{
		v3 = (float*)(a1 + 212);
		for (i = 0; i < 2; ++i)
		{
			LODWORD(v6) = (int)*v3;
			sub_1400EA3E0(*(_QWORD*)(v2 + 29504), "ProgressClickHighlightTime", byte_1409EC2D4, i, v6);
			v2 = qword_140C65898;
			v3 += 6;
		}
		LODWORD(v6) = 0;
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"ProgressClickWindowCompletionLevel",
			byte_1409EC294,
			(unsigned int)(int)(float)(*(float*)(a1 + 176) * 100.0),
			v6);
	}
	return result;
}
// 14077A9A0: variable 'v6' is possibly undefined
// 1409EC294: using guessed type _BYTE byte_1409EC294[64];
// 1409EC2D4: using guessed type _BYTE byte_1409EC2D4[144];
// 140C65898: using guessed type __int64 qword_140C65898;

