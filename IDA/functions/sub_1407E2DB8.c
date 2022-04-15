#include "../winhttp.h"

//----- (00000001407E2DB8) ----------------------------------------------------
__int64 sub_1407E2DB8()
{
	int v0; // edi
	PVOID* v1; // rbx
	__int64 result; // rax

	v0 = 0;
	v1 = (PVOID*)off_140C0FA20;
	do
	{
		++v0;
		*v1 = EncodePointer(*v1);
		result = v0;
		++v1;
	} while ((unsigned __int64)v0 < 0xA);
	return result;
}
// 140C0FA20: using guessed type void (__fastcall __noreturn *off_140C0FA20[10])();

