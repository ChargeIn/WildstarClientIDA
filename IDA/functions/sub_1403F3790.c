//----- (00000001403F3790) ----------------------------------------------------
char __fastcall sub_1403F3790(__int64 a1)
{
	LONG* v2; // rcx
	LONG x; // eax
	char result; // al
	struct tagPOINT Point; // [rsp+30h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 29504) && qword_140C635F0)
	{
		if (*(_QWORD*)(a1 + 30088))
		{
			GetCursorPos(&Point);
			ScreenToClient(*(HWND*)(qword_140C635F0 + 8), &Point);
			v2 = *(LONG**)(*(_QWORD*)(a1 + 29504) + 2832i64);
			x = Point.x;
			v2[1] = Point.y;
			*v2 = x;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 30088) + 120i64))(*(_QWORD*)(a1 + 30088), 0i64);
			return sub_1400E6E80(*(_QWORD*)(a1 + 29504));
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

