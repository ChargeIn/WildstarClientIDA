#include "../winhttp.h"

//----- (0000000140426190) ----------------------------------------------------
__int64 __fastcall sub_140426190(__int64 a1, int a2)
{
	__int64 result; // rax
	BOOL v5; // [rsp+20h] [rbp-18h]

	result = sub_1405A8A40(a1, a2);
	if (result)
	{
		v5 = dword_140C65C38 == a2;
		return Apollo_LUAEvent(a1, "QuestHighlightChanged", byte_1409E925C, result, v5);
	}
	return result;
}
// 1409E925C: using guessed type _BYTE byte_1409E925C[48];
// 140C65C38: using guessed type int dword_140C65C38;

