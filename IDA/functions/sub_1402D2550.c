//----- (00000001402D2550) ----------------------------------------------------
__int64 __fastcall sub_1402D2550(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
	__int64 v9; // rcx
	__int64 result; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 32) = a3;
	*(_QWORD*)(a1 + 24) = a6;
	*(_QWORD*)(a1 + 16) = a7;
	*(_OWORD*)(a1 + 48) = *(_OWORD*)(a4 + 16);
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a4 + 48);
	*(_DWORD*)(a1 + 80) = *(unsigned __int16*)(a4 + 72);
	*(_DWORD*)(a1 + 84) = *(unsigned __int16*)(a4 + 74);
	*(_DWORD*)(a1 + 104) = *(unsigned __int16*)(a4 + 80);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a4 + 84);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a4 + 88);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a4 + 92);
	*(__m128*)(a1 + 128) = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a4 + 96), (__m128) * (unsigned int*)(a4 + 104)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a4 + 100), (__m128)0i64));
	*(__m128*)(a1 + 144) = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a4 + 108), (__m128) * (unsigned int*)(a4 + 116)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a4 + 112), (__m128)0i64));
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a4 + 120);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a4 + 124);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a4 + 128);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a4 + 132);
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a4 + 136);
	*(_DWORD*)(a1 + 180) = *(_DWORD*)(a4 + 140);
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a4 + 144);
	*(_DWORD*)(a1 + 188) = *(_DWORD*)(a4 + 148);
	*(_DWORD*)(a1 + 192) = *(_DWORD*)(a4 + 152);
	*(_DWORD*)(a1 + 196) = *(_DWORD*)(a4 + 156);
	*(_DWORD*)(a1 + 200) = *(_DWORD*)(a4 + 160);
	sub_1402D26C0(a1);
	v9 = *(_QWORD*)(a2 + 48);
	if (!v9)
		return 0i64;
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v9 + 232i64))(v9, a1 + 360);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

