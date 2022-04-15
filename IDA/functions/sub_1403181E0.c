//----- (00000001403181E0) ----------------------------------------------------
unsigned int* __fastcall sub_1403181E0(__int64 a1, __m128* a2, _QWORD* a3)
{
	unsigned int* result; // rax
	unsigned int* v7; // rbx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(unsigned int**)(a1 + 16);
			*a2 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * result, (__m128)result[2]),
				_mm_unpacklo_ps((__m128)result[1], (__m128)0i64));
		}
		else
		{
			v9 = (_QWORD*)a2[1].m128_u64[0];
			if (v9)
				sub_140317C90(v9);
			result = 0i64;
			a2->m128_u64[0] = 0i64;
			a2->m128_u64[1] = 0i64;
			a2[1].m128_u64[0] = 0i64;
			a2[1].m128_u64[1] = 0i64;
		}
	}
	else
	{
		result = (unsigned int*)sub_14018B280(56i64, 0);
		v7 = result;
		if (result)
		{
			result = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
			*((_QWORD*)v7 + 2) = 0i64;
			*(_QWORD*)v7 = off_140B64218;
			*((_QWORD*)v7 + 3) = a2;
			*((_QWORD*)v7 + 4) = a1;
			*(_QWORD*)(v7 + 11) = 0i64;
			v7[10] = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = (_QWORD*)a2[1].m128_u64[0];
		if (v8)
			result = (unsigned int*)sub_140317C90(v8);
		a2[1].m128_u64[0] = (unsigned __int64)v7;
		if (a3 && !*((_QWORD*)v7 + 1))
		{
			*((_QWORD*)v7 + 1) = a3;
			*((_QWORD*)v7 + 2) = *a3;
			*a3 = v7;
			result = (unsigned int*)*((_QWORD*)v7 + 2);
			if (result)
				*((_QWORD*)result + 1) = v7 + 4;
		}
	}
	return result;
}
// 140B64218: using guessed type __int64 (__fastcall *off_140B64218[8])();

