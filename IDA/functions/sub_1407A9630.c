//----- (00000001407A9630) ----------------------------------------------------
int* __fastcall sub_1407A9630(__int64 a1, int* a2)
{
	int* result; // rax
	int v4; // r8d
	struct tagRECT Rect; // [rsp+20h] [rbp-18h] BYREF

	if (*(_DWORD*)(a1 + 436340))
	{
		GetClientRect(*(HWND*)(a1 + 16), &Rect);
		result = a2;
		v4 = (Rect.right + Rect.left) >> 1;
		a2[1] = (Rect.bottom + Rect.top) >> 1;
		*a2 = v4;
	}
	else
	{
		*a2 = *(_DWORD*)(a1 + 436160);
		a2[1] = *(_DWORD*)(a1 + 436164);
		return a2;
	}
	return result;
}

