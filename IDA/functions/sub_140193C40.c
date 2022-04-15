#include "../winhttp.h"

//----- (0000000140193C40) ----------------------------------------------------
int sub_140193C40()
{
	int result; // eax

	if ((dword_140C8E0F8 & 1) != 0)
		return dword_140C8E0FC;
	dword_140C8E0F8 |= 1u;
	result = sub_140193B70(6u, 2u, 0);
	dword_140C8E0FC = result;
	return result;
}
// 140C8E0F8: using guessed type int dword_140C8E0F8;
// 140C8E0FC: using guessed type int dword_140C8E0FC;

