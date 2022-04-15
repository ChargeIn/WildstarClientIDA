//----- (00000001404667C0) ----------------------------------------------------
double __fastcall sub_1404667C0(unsigned int* a1, int a2)
{
	double result; // xmm0_8
	int v4; // ecx
	__m128i v5; // xmm0
	__int64 v6; // rax
	__int64 v7; // rbx
	bool v8; // zf
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	int v12; // eax

	switch (a2)
	{
	case 1:
		HIDWORD(result) = 0;
		*(float*)&result = (float)(*(int(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 72i64))(a1);
		return result;
	case 2:
		(*(void(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 96i64))(a1);
		return result;
	case 3:
		HIDWORD(result) = 0;
		*(float*)&result = (float)(*(int(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 120i64))(a1);
		return result;
	case 5:
		*(_QWORD*)&result = a1[387];
		return result;
	case 6:
		*(_QWORD*)&result = a1[389];
		return result;
	case 7:
		*(_QWORD*)&result = a1[391];
		return result;
	case 8:
		*(_QWORD*)&result = a1[393];
		return result;
	case 9:
		*(_QWORD*)&result = a1[395];
		return result;
	case 10:
		*(_QWORD*)&result = a1[397];
		return result;
	case 11:
		*(_QWORD*)&result = a1[399];
		return result;
	case 15:
		*(_QWORD*)&result = a1[379];
		return result;
	case 16:
		*(_QWORD*)&result = a1[445];
		return result;
	case 20:
		v4 = (int)*((float*)a1 + 457);
		if (v4 == -1)
			v5 = _mm_cvtsi32_si128(0xFFFFFFFF);
		else
			v5 = _mm_cvtsi32_si128(v4 + (int)*((float*)a1 + 805));
		*(_QWORD*)&result = _mm_cvtepi32_ps(v5).m128_u64[0];
		return result;
	case 21:
		HIDWORD(result) = 0;
		*(float*)&result = (float)(*(int(__fastcall**)(unsigned int*))(*(_QWORD*)a1 + 144i64))(a1);
		return result;
	case 22:
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
			qword_140C65980,
			*(unsigned int*)(qword_140C65980 + 56),
			0i64);
		v7 = v6;
		if (!v6)
			goto LABEL_33;
		v8 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 64i64))(v6) == 0;
		goto LABEL_24;
	case 23:
		v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
			qword_140C65980,
			*(unsigned int*)(qword_140C65980 + 60),
			0i64);
		v7 = v9;
		if (!v9)
			goto LABEL_33;
		v8 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 64i64))(v9) == 1;
		goto LABEL_24;
	case 24:
		v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
			qword_140C65980,
			*(unsigned int*)(qword_140C65980 + 64),
			0i64);
		v7 = v10;
		if (!v10)
			goto LABEL_33;
		v8 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 64i64))(v10) == 2;
	LABEL_24:
		if (v8)
		{
			HIDWORD(result) = 0;
			*(float*)&result = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v7 + 128i64))(v7);
		}
		else
		{
		LABEL_33:
			result = 0.0;
		}
		break;
	case 27:
		*(_QWORD*)&result = a1[469];
		return result;
	case 28:
		*(_QWORD*)&result = a1[473];
		return result;
	case 29:
		*(_QWORD*)&result = a1[477];
		return result;
	default:
		if (*(unsigned int**)(qword_140C65898 + 120) != a1)
			goto LABEL_33;
		v11 = *(_QWORD*)(qword_140C65898 + 28048);
		if (!v11)
			goto LABEL_33;
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 96i64))(v11);
		result = sub_140466360(a1, v12);
		break;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

