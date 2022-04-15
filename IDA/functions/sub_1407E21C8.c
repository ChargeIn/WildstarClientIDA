#include "../winhttp.h"

//----- (00000001407E21C8) ----------------------------------------------------
__int64 sub_1407E21C8()
{
	int v5; // r8d
	int v21; // eax
	unsigned __int64 v22; // rax
	__int64 v23; // rcx

	dword_140C0F7C4 = 2;
	_RAX = 1i64;
	dword_140C0F7C0 = 1;
	__asm { cpuid }
	if ((_RCX & 0x100000) != 0)
	{
		dword_140C0F7C0 = 2;
		dword_140C0F7C4 = 6;
		if ((_RCX & 0x10000000) != 0)
		{
			dword_140C0F7C0 = 3;
			dword_140C0F7C4 = 14;
		}
	}
	v5 = dword_140C60170;
	_RAX = 7i64;
	__asm { cpuid }
	if ((_RBX & 0x200) != 0)
	{
		v5 = dword_140C60170 | 2;
		dword_140C60170 |= 2u;
	}
	_RAX = 0i64;
	__asm { cpuid }
	if ((_DWORD)_RBX == 1970169159 && (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270)
	{
		_RAX = 1i64;
		__asm { cpuid }
		v21 = _RAX & 0xFFF3FF0;
		if (v21 == 67264
			|| v21 == 132704
			|| v21 == 132720
			|| (v22 = (unsigned int)(v21 - 198224), (unsigned int)v22 <= 0x20)
			&& (v23 = 0x100010001i64, _bittest64(&v23, v22)))
		{
			dword_140C60170 = v5 | 1;
		}
	}
	return 0i64;
}
// 140C0F7C0: using guessed type int dword_140C0F7C0;
// 140C0F7C4: using guessed type int dword_140C0F7C4;
// 140C60170: using guessed type int dword_140C60170;

