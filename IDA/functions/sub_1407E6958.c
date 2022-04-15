#include "../winhttp.h"

//----- (00000001407E6958) ----------------------------------------------------
__int64 __fastcall sub_1407E6958(__int64 a1)
{
	volatile signed __int32* v1; // rax
	volatile signed __int32* v2; // rax
	volatile signed __int32* v3; // rax
	volatile signed __int32* v4; // rax
	volatile signed __int32** v5; // rax
	__int64 v6; // r8
	volatile signed __int32* v7; // rdx

	if (a1)
	{
		_InterlockedAdd((volatile signed __int32*)a1, 0xFFFFFFFF);
		v1 = *(volatile signed __int32**)(a1 + 216);
		if (v1)
			_InterlockedAdd(v1, 0xFFFFFFFF);
		v2 = *(volatile signed __int32**)(a1 + 232);
		if (v2)
			_InterlockedAdd(v2, 0xFFFFFFFF);
		v3 = *(volatile signed __int32**)(a1 + 224);
		if (v3)
			_InterlockedAdd(v3, 0xFFFFFFFF);
		v4 = *(volatile signed __int32**)(a1 + 248);
		if (v4)
			_InterlockedAdd(v4, 0xFFFFFFFF);
		v5 = (volatile signed __int32**)(a1 + 40);
		v6 = 6i64;
		do
		{
			if (*(v5 - 2) != (volatile signed __int32*)&unk_140C10010 && *v5)
				_InterlockedAdd(*v5, 0xFFFFFFFF);
			if (*(v5 - 3))
			{
				v7 = *(v5 - 1);
				if (v7)
					_InterlockedAdd(v7, 0xFFFFFFFF);
			}
			v5 += 4;
			--v6;
		} while (v6);
		_InterlockedAdd((volatile signed __int32*)(*(_QWORD*)(a1 + 288) + 348i64), 0xFFFFFFFF);
	}
	return a1;
}

