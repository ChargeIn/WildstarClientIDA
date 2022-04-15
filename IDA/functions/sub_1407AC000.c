//----- (00000001407AC000) ----------------------------------------------------
int __fastcall sub_1407AC000(__int64 a1)
{
	int result; // eax
	HWND v3; // rcx
	int SystemMetrics; // ebx
	__m128i v5; // xmm2
	RECT Point; // [rsp+20h] [rbp-28h] BYREF
	struct tagRECT Rect; // [rsp+30h] [rbp-18h] BYREF
	int pvParam; // [rsp+50h] [rbp+8h] BYREF

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 184i64))(a1);
	if (result)
	{
		GetCursorPos((LPPOINT)(a1 + 436184));
		*(_DWORD*)(a1 + 436176) = *(_DWORD*)(a1 + 436184);
		*(_DWORD*)(a1 + 436180) = *(_DWORD*)(a1 + 436188);
		ScreenToClient(*(HWND*)(a1 + 16), (LPPOINT)(a1 + 436176));
		if (!*(_DWORD*)(a1 + 436344) && *(_DWORD*)(qword_140C65678 + 72) != 4)
		{
			GetClientRect(*(HWND*)(a1 + 16), &Rect);
			v3 = *(HWND*)(a1 + 16);
			Point = Rect;
			ClientToScreen(v3, (LPPOINT)&Point);
			ClientToScreen(*(HWND*)(a1 + 16), (LPPOINT)&Point.right);
			ClipCursor(&Point);
		}
		SystemMetrics = GetSystemMetrics(1);
		v5 = _mm_cvtsi32_si128(0);
		*(__m128*)(a1 + 436320) = _mm_mul_ps(
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(GetSystemMetrics(0)), v5),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(SystemMetrics), v5))),
			(__m128)xmmword_140B7AB00);
		result = SystemParametersInfoW(0x70u, 0, &pvParam, 0);
		if (result)
			*(float*)(a1 + 436336) = (float)pvParam * 0.1;
		else
			*(_DWORD*)(a1 + 436336) = 1065353216;
		*(_OWORD*)(a1 + 436192) = 0i64;
	}
	else
	{
		if (!*(_DWORD*)(a1 + 436344))
		{
			if (*(_DWORD*)(qword_140C65678 + 72) != 4)
				ClipCursor(0i64);
			result = SetCursorPos(*(_DWORD*)(a1 + 436184), *(_DWORD*)(a1 + 436188));
		}
		*(_OWORD*)(a1 + 436192) = 0i64;
	}
	return result;
}
// 140B7AB00: using guessed type __int128 xmmword_140B7AB00;
// 140C65678: using guessed type __int64 qword_140C65678;

