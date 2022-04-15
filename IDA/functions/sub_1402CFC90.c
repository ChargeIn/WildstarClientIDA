//----- (00000001402CFC90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402CFC90(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 result; // rax
	__int64 v7; // rdi
	__int64 v8; // rbp
	__int64 v9; // rbx
	__int64* v10; // rcx

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8));
	if (a2 < *(unsigned int*)(result + 64))
	{
		v7 = *(_QWORD*)(result + 72) + 88 * a2;
		result = *(unsigned int*)(v7 + 24);
		if (a3 < result)
		{
			v8 = *(_QWORD*)(v7 + 32) + 40 * a3;
			v9 = 192 * a3;
			result = sub_1402CFD50(v9 + *(_QWORD*)(a1 + 304));
			v10 = (__int64*)(v9 + *(_QWORD*)(a1 + 304));
			if (v10)
				return (unsigned __int64)sub_1402D7AA0(
					v10,
					a1 + 344,
					v7,
					v8,
					(unsigned int*)(a1 + 344),
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 488i64),
					0i64);
		}
	}
	return result;
}

