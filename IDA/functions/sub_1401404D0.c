//----- (00000001401404D0) ----------------------------------------------------
float* __fastcall sub_1401404D0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	float* result; // rax
	__int128 v6[2]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_QWORD*)a2;
	v6[0] = (__int128)_mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 800), (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 692), (__m128)0i64));
	(*(void(__fastcall**)(__int64, __int128*))(v2 + 104))(a2, v6);
	v7 = a2;
	sub_14013FE10(a1 + 776, a2);
	sub_140033260((__int64*)(a1 + 808), &v7);
	result = (float*)(*(__int64(__fastcall**)(__int64, __int128*))(*(_QWORD*)a2 + 16i64))(a2, v6);
	if ((float)(result[4] - *result) > *(float*)(a1 + 832))
	{
		result = (float*)(*(__int64(__fastcall**)(__int64, __int128*))(*(_QWORD*)a2 + 16i64))(a2, v6);
		*(float*)(a1 + 832) = result[4] - *result;
	}
	return result;
}

