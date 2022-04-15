#include "../winhttp.h"

//----- (00000001406DD390) ----------------------------------------------------
__int64 __fastcall sub_1406DD390(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_QWORD* a4,
	_OWORD* a5,
	__int64 a6,
	int a7,
	__int64 a8)
{
	_QWORD* v8; // rbx
	__int64 v9; // rdi
	int v11; // eax
	__int64 v12; // rbp
	void(__fastcall * **v13)(_QWORD); // rbp
	int v16; // [rsp+30h] [rbp-28h]
	int v17; // [rsp+60h] [rbp+8h] BYREF
	int v18; // [rsp+64h] [rbp+Ch]

	v8 = (_QWORD*)a8;
	v9 = 0i64;
	v11 = *(_DWORD*)(a8 + 4);
	v17 = 0;
	v18 = v11;
	sub_1406D7BA0(a1, a2, a3, a4, a5, a6, v16, &v17);
	*(_QWORD*)a1 = off_140B71C30;
	*(_DWORD*)(a1 + 2736) = 300;
	*(_DWORD*)(a1 + 2740) = -1;
	v12 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 432) |= 0x20000000000ui64;
	*(_QWORD*)(a1 + 1028) = *v8;
	*(_QWORD*)(a1 + 2736) = *v8;
	if (v12)
	{
		if (!*(_QWORD*)(a1 + 2584) || !sub_14002C740(a1 + 2600, L"HuddieNameplateFrame"))
		{
			v13 = (void(__fastcall***)(_QWORD))sub_140108E80(v12 + 240, (const __m128i*)L"HuddieNameplateFrame");
			if (v13)
			{
				while (aHuddienameplat_0[++v9] != 0)
					;
				sub_14001C480(a1 + 2600, (int*)L"HuddieNameplateFrame", (int*)&aHuddienameplat_0[v9]);
			}
			sub_1401097F0((_QWORD*)(a1 + 2584), v13);
		}
		*(_DWORD*)(a1 + 676) = 3;
		return a1;
	}
	else
	{
		*(_DWORD*)(a1 + 676) = 3;
		return a1;
	}
}
// 1406DD3D8: variable 'v16' is possibly undefined
// 140B3D9F8: using guessed type wchar_t aHuddienameplat_0[21];
// 140B71C30: using guessed type __int64 (__fastcall *off_140B71C30[25])();

