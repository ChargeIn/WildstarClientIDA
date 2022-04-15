//----- (0000000140496CA0) ----------------------------------------------------
__int64 __fastcall sub_140496CA0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rdi
	unsigned __int64 v4; // rbp
	__int64 result; // rax
	_QWORD* v6; // rbx
	unsigned int* v7; // rbx
	__m128 v8; // xmm0
	__m128 v9; // xmm2
	__int64 v10; // rdi
	__m128 v11; // xmm6
	unsigned __int64 v12; // rsi
	__m128* v13; // rbx
	unsigned __int64 v14; // rax
	__int64 v15; // rsi
	unsigned __int64 v16; // rbp
	unsigned __int64 v17; // rbx
	__int64 v18; // rcx
	__m128* v19; // rbx
	__int64 v20; // [rsp+40h] [rbp+8h] BYREF

	v20 = a1;
	v2 = qword_140C65988;
	v4 = (*(__int64(__fastcall**)(_DWORD*))(qword_140C65988 + 192))(a2);
	result = v4 / *(_QWORD*)(v2 + 176);
	v6 = *(_QWORD**)(*(_QWORD*)(v2 + 184) + 8 * (v4 % *(_QWORD*)(v2 + 176)));
	if (v6)
	{
		while (1)
		{
			if (v4 == *v6)
			{
				result = (*(__int64(__fastcall**)(_DWORD*, _QWORD*))(v2 + 200))(a2, v6 + 2);
				if ((_DWORD)result)
					break;
			}
			v6 = (_QWORD*)v6[1];
			if (!v6)
				return result;
		}
		v7 = (unsigned int*)v6 + 5;
		if (v7)
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
				qword_140C65980,
				*v7,
				0i64);
			if (result)
			{
				v8 = (__m128)(unsigned int)a2[3];
				v9 = (__m128)(unsigned int)a2[2];
				LODWORD(v20) = *a2;
				v10 = result + 184;
				v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)(unsigned int)a2[1], v8), _mm_unpacklo_ps(v9, (__m128)0i64));
				v12 = (*(__int64(__fastcall**)(__int64*))(result + 208))(&v20);
				v13 = *(__m128**)(*(_QWORD*)(v10 + 16) + 8 * (v12 % *(_QWORD*)(v10 + 8)));
				if (!v13)
					goto LABEL_12;
				while (1)
				{
					if (v12 == v13->m128_u64[0])
					{
						result = (*(__int64(__fastcall**)(__int64*, __m128*))(v10 + 32))(&v20, v13 + 1);
						if ((_DWORD)result)
							break;
					}
					v13 = (__m128*)v13->m128_u64[1];
					if (!v13)
						goto LABEL_12;
				}
				v19 = v13 + 2;
				if (v19)
				{
					*v19 = v11;
				}
				else
				{
				LABEL_12:
					if (*(_QWORD*)v10 == *(_QWORD*)(v10 + 8))
						sub_1400290D0(v10);
					v14 = (*(__int64(__fastcall**)(__int64*))(v10 + 24))(&v20);
					v15 = *(_QWORD*)(v10 + 16);
					v16 = v14;
					v17 = v14 % *(_QWORD*)(v10 + 8);
					result = (__int64)sub_14018B280(48i64, 0);
					if (result)
					{
						v18 = *(_QWORD*)(v15 + 8 * v17);
						*(_QWORD*)result = v16;
						*(_QWORD*)(result + 8) = v18;
						*(_DWORD*)(result + 16) = v20;
						*(__m128*)(result + 32) = v11;
					}
					*(_QWORD*)(v15 + 8 * v17) = result;
					++* (_QWORD*)v10;
				}
			}
		}
	}
	return result;
}
// 140C65980: using guessed type __int64 qword_140C65980;
// 140C65988: using guessed type __int64 qword_140C65988;

