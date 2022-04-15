#include "../winhttp.h"

//----- (0000000140579A90) ----------------------------------------------------
unsigned int sub_140579A90()
{
	bool v0; // zf
	int v1; // eax

	v0 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
	v1 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
	dword_140C8AF30 = v1;
	if (v0 || v1 == 0x3FFFFFFF)
	{
		v1 = 1;
		dword_140C8AF30 = 1;
	}
	return v1 | 0x80000000;
}
// 140C8AF30: using guessed type int dword_140C8AF30;

