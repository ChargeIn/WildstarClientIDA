//----- (00000001407A2ED0) ----------------------------------------------------
float __fastcall sub_1407A2ED0(_QWORD* a1, float a2)
{
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	bool v7; // cf
	float v8; // [rsp+38h] [rbp+10h] BYREF
	__int64 v9; // [rsp+40h] [rbp+18h]

	v8 = a2;
	if ((int)sub_1407A4CE0(a1, &v8) < 0)
		return 0.0;
	v4 = a1[8];
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (v8 > *(float*)(v6 + 32))
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v7 = v8 < *(float*)(v5 + 32), v9 = v5, v7))
		v9 = v4;
	if (v9 == v4)
		return MEMORY[0x38];
	else
		return *(float*)(*(_QWORD*)(v9 + 40) + 56i64);
}

