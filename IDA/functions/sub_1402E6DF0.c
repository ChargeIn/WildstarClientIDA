//----- (00000001402E6DF0) ----------------------------------------------------
__int64 __fastcall sub_1402E6DF0(__int64 a1, float* a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	float* v6; // rax

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 176i64))(*(_QWORD*)(a1 + 32));
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 24);
		if (v5)
		{
			v6 = (float*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
			a2[12] = a2[12] + v6[12];
			a2[13] = v6[13] + a2[13];
			a2[14] = v6[14] + a2[14];
		}
		return 0i64;
	}
	return result;
}

