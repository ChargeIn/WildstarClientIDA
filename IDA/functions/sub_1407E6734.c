#include "../winhttp.h"

//----- (00000001407E6734) ----------------------------------------------------
__int64 __fastcall sub_1407E6734(__int64 a1)
{
	volatile signed __int32* v1; // rax
	volatile signed __int32* v2; // rax
	volatile signed __int32* v3; // rax
	volatile signed __int32* v4; // rax
	volatile signed __int32** v5; // rax
	__int64 v6; // r8
	volatile signed __int32* v7; // rdx
	__int64 result; // rax

	_InterlockedIncrement((volatile signed __int32*)a1);
	v1 = *(volatile signed __int32**)(a1 + 216);
	if (v1)
		_InterlockedIncrement(v1);
	v2 = *(volatile signed __int32**)(a1 + 232);
	if (v2)
		_InterlockedIncrement(v2);
	v3 = *(volatile signed __int32**)(a1 + 224);
	if (v3)
		_InterlockedIncrement(v3);
	v4 = *(volatile signed __int32**)(a1 + 248);
	if (v4)
		_InterlockedIncrement(v4);
	v5 = (volatile signed __int32**)(a1 + 40);
	v6 = 6i64;
	do
	{
		if (*(v5 - 2) != (volatile signed __int32*)&unk_140C10010 && *v5)
			_InterlockedIncrement(*v5);
		if (*(v5 - 3))
		{
			v7 = *(v5 - 1);
			if (v7)
				_InterlockedIncrement(v7);
		}
		v5 += 4;
		--v6;
	} while (v6);
	result = *(_QWORD*)(a1 + 288);
	_InterlockedIncrement((volatile signed __int32*)(result + 348));
	return result;
}

