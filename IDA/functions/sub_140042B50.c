//----- (0000000140042B50) ----------------------------------------------------
__int64 __fastcall sub_140042B50(__int64 a1, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
	__int64 result; // rax
	LPARAM v10; // r9
	UINT v11; // edx
	int v12; // edx
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-18h] BYREF

	if (a3 == 256)
	{
		QueryPerformanceCounter(&PerformanceCount);
		qword_140C8A020 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	}
	else if (a3 == 258)
	{
		QueryPerformanceCounter(&PerformanceCount);
		if ((unsigned int)((PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - qword_140C8A020)
			/ (unsigned __int64)qword_140C636B0))
		{
			v10 = lParam;
			v11 = 258;
			return DefWindowProcW(a2, v11, a4, v10);
		}
	}
	result = (*(__int64(__fastcall**)(_QWORD, HWND, _QWORD, WPARAM, LPARAM))(**(_QWORD**)(a1 + 88) + 56i64))(
		*(_QWORD*)(a1 + 88),
		a2,
		a3,
		a4,
		lParam);
	if (result)
	{
		if (qword_140C65898 && a4 != 27)
		{
			if (a3 - 255 <= 6 && (v12 = 103, _bittest(&v12, a3 - 255)) || a3 - 512 <= 0xD)
				(*(void(__fastcall**)(__int64, HWND, _QWORD, WPARAM, LPARAM))(*(_QWORD*)qword_140C65898 + 72i64))(
					qword_140C65898,
					a2,
					a3,
					a4,
					lParam);
		}
		v10 = lParam;
		v11 = a3;
		return DefWindowProcW(a2, v11, a4, v10);
	}
	return result;
}
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8A020: using guessed type __int64 qword_140C8A020;

