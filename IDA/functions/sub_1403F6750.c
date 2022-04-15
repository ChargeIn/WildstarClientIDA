//----- (00000001403F6750) ----------------------------------------------------
_QWORD* __fastcall sub_1403F6750(__int64 a1)
{
	_QWORD* result; // rax
	__m128** v3; // rax
	__m128* v4; // rbx
	unsigned __int64 v5; // rax
	_QWORD** v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rcx

	result = *(_QWORD**)(a1 + 31912);
	if ((_QWORD*)*result != result)
	{
		(*(void (**)(void))(*(_QWORD*)qword_140C65680 + 136i64))();
		v3 = *(__m128***)(a1 + 31912);
		v4 = *v3;
		if (*v3 != (__m128*)v3)
		{
			do
			{
				v5 = v4[4].m128_u64[0];
				if (v5 && *(_QWORD*)v5)
					sub_140103E60(
						*(_QWORD**)v5,
						v4 + 1,
						v4 + 3,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(v5 + 8)) * *(float*)(v5 + 12)));
				v4 = (__m128*)v4->m128_u64[0];
			} while (v4 != *(__m128**)(a1 + 31912));
		}
		v6 = *(_QWORD***)(a1 + 31912);
		v7 = *v6;
		if (*v6 != v6)
		{
			do
			{
				v8 = (__int64)v7;
				v7 = (_QWORD*)*v7;
				sub_14018B900(v8, 0);
			} while (v7 != *(_QWORD**)(a1 + 31912));
		}
		**(_QWORD**)(a1 + 31912) = *(_QWORD*)(a1 + 31912);
		result = *(_QWORD**)(a1 + 31912);
		result[1] = result;
	}
	return result;
}
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

