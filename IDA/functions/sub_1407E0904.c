#include "../winhttp.h"

//----- (00000001407E0904) ----------------------------------------------------
__int64 __fastcall sub_1407E0904(int a1, int a2)
{
	__int64 result; // rax

	result = (unsigned int)dword_140C0F788;
	dword_140C0F788 = a2 & a1 | dword_140C0F788 & ~a2;
	return result;
}
// 140C0F788: using guessed type int dword_140C0F788;

