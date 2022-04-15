//----- (000000014002ADD0) ----------------------------------------------------
LRESULT __fastcall sub_14002ADD0(__int64 a1, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
	LRESULT result; // rax

	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 56i64))(*(_QWORD*)(a1 + 88));
	if (result)
		return DefWindowProcW(a2, a3, a4, lParam);
	return result;
}

