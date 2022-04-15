//----- (00000001407A2F70) ----------------------------------------------------
float __fastcall sub_1407A2F70(__int64 a1)
{
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	bool v6; // cf
	__int64 v7; // [rsp+38h] [rbp+10h] BYREF

	LODWORD(v7) = -1082130432;
	if ((int)sub_1407A4CE0((_QWORD*)a1, (float*)&v7) < 0)
		return 0.0;
	v3 = *(_QWORD*)(a1 + 64);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(float*)&v7 > *(float*)(v5 + 32))
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v6 = *(float*)&v7 < *(float*)(v4 + 32), v7 = v4, v6))
		v7 = v3;
	if (v7 == v3)
		return MEMORY[0x38] * *(float*)(a1 + 16);
	else
		return *(float*)(*(_QWORD*)(v7 + 40) + 56i64) * *(float*)(a1 + 16);
}

