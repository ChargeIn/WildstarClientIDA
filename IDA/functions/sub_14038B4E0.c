//----- (000000014038B4E0) ----------------------------------------------------
__int64 __fastcall sub_14038B4E0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__int64 v12; // rcx
	__int64 v13; // rdx

	v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1);
	v3 = v2;
	if (v2)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 1160i64))(v2);
		*(_OWORD*)(a1 + 512) = *(_OWORD*)v4;
		*(_OWORD*)(a1 + 528) = *(_OWORD*)(v4 + 16);
		*(_OWORD*)(a1 + 544) = *(_OWORD*)(v4 + 32);
		*(_DWORD*)(a1 + 560) = *(_DWORD*)(v4 + 48);
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 1184i64))(v3);
		*(_OWORD*)(a1 + 576) = *(_OWORD*)v5;
		*(_OWORD*)(a1 + 592) = *(_OWORD*)(v5 + 16);
		*(_OWORD*)(a1 + 608) = *(_OWORD*)(v5 + 32);
		*(_DWORD*)(a1 + 624) = *(_DWORD*)(v5 + 48);
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 1208i64))(v3);
		*(_OWORD*)(a1 + 640) = *(_OWORD*)v6;
		*(_OWORD*)(a1 + 656) = *(_OWORD*)(v6 + 16);
		*(_OWORD*)(a1 + 672) = *(_OWORD*)(v6 + 32);
		*(_DWORD*)(a1 + 688) = *(_DWORD*)(v6 + 48);
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 1224i64))(v3);
		*(_OWORD*)(a1 + 704) = *(_OWORD*)v7;
		*(_OWORD*)(a1 + 720) = *(_OWORD*)(v7 + 16);
		*(_OWORD*)(a1 + 736) = *(_OWORD*)(v7 + 32);
		*(_DWORD*)(a1 + 752) = *(_DWORD*)(v7 + 48);
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v3 + 424i64))(v3, 150i64, 0i64);
		v9 = *(__m128*)(result + 32);
		v10 = _mm_sub_ps(*(__m128*)(result + 48), v9);
		v11 = _mm_mul_ps(v10, v10);
		*(__m128*)(a1 + 800) = _mm_mul_ps(_mm_add_ps(v9, *(__m128*)(result + 48)), (__m128)xmmword_140B7AC50);
		*(float*)(a1 + 816) = fsqrt(
			(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
			+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
			* 0.5;
	}
	else
	{
		v12 = a1 + 544;
		result = a1 + 512;
		v13 = 4i64;
		do
		{
			v12 += 64i64;
			result += 64i64;
			*(_OWORD*)(result - 64) = xmmword_140C798A0;
			*(_OWORD*)(result - 48) = xmmword_140C798B0;
			*(_OWORD*)(v12 - 64) = xmmword_140C783D0;
			*(_DWORD*)(v12 - 48) = dword_140C783E0;
			--v13;
		} while (v13);
		*(_OWORD*)(a1 + 800) = xmmword_140C783D0;
		*(_DWORD*)(a1 + 816) = dword_140C783E0;
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C783D0: using guessed type __int128 xmmword_140C783D0;
// 140C783E0: using guessed type int dword_140C783E0;
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;

