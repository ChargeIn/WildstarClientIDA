//----- (0000000140252260) ----------------------------------------------------
struct tagPOINT __fastcall sub_140252260(struct tagPOINT a1, int a2)
{
	_DWORD* v2; // rbx
	struct tagPOINT result; // rax
	HWND v4; // rdi
	struct tagRECT Rect; // [rsp+20h] [rbp-18h] BYREF
	struct tagPOINT Point; // [rsp+40h] [rbp+8h] BYREF

	Point = a1;
	v2 = (_DWORD*)qword_140C635F0;
	*(_DWORD*)(qword_140C635F0 + 64) &= ~0x400u;
	v2[16] |= (a2 != 0) << 10;
	GetCursorPos(&Point);
	result = (struct tagPOINT)(*(__int64(__fastcall**)(_DWORD*, struct tagPOINT*))(*(_QWORD*)v2 + 80i64))(v2, &Point);
	v4 = (HWND)result;
	if (result)
	{
		GetClientRect(*(HWND*)&result, &Rect);
		ScreenToClient(v4, &Point);
		result = Point;
		if (Point.x >= Rect.left && Point.x < Rect.right)
		{
			result = (struct tagPOINT)(unsigned int)Point.y;
			if (Point.y >= Rect.top && Point.y < Rect.bottom)
				return (struct tagPOINT)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 480i64))(
					qword_140C65670,
					(unsigned int)((int)(v2[16] << 21) >> 31));
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;

