#include "../winhttp.h"

//----- (00000001400E9780) ----------------------------------------------------
void __fastcall sub_1400E9780(_QWORD* a1, __int64 a2, int* a3, __m128i* a4, __int64 a5, const __m128i* a6)
{
	char v6; // al
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // [rsp+40h] [rbp-38h] BYREF
	__int64 v19; // [rsp+48h] [rbp-30h]
	__int64 v20; // [rsp+50h] [rbp-28h]
	__int64 v21; // [rsp+58h] [rbp-20h]

	if (a2)
	{
		v6 = *(_BYTE*)(a2 + 29);
		if ((v6 & 8) == 0 && (v6 & 0x10) == 0 && (v6 & 0x20) == 0 && (v6 & 0x40) == 0 && !a1[361])
		{
			v11 = a1[45];
			v18 = 0i64;
			v19 = 0i64;
			v20 = 0i64;
			v21 = 0i64;
			v12 = sub_1401545C0(v11, (int*)L"DragDropInvalid");
			v13 = a1[45];
			v18 = v12;
			v14 = sub_1401545C0(v13, (int*)L"DragDropIgnore");
			v15 = a1[45];
			v19 = v14;
			v16 = sub_1401545C0(v15, (int*)L"DragDropValid");
			v17 = a1[45];
			v20 = v16;
			v21 = sub_1401545C0(v17, (int*)L"DragDropInvalid");
			sub_1400E9A00(a1);
			sub_1400E1740((__int64)(a1 + 421), 1, (void(__fastcall***)(_QWORD))a2, a3, &v18, a4, a5, a6);
			sub_1400E1830((__int64)(a1 + 421), (void(__fastcall***)(_QWORD))a2, 3, &qword_140C77760);
			sub_1400EAA10((__int64)a1, 26, (__int64)&unk_1409D3B0C, a2, a3, a5);
		}
	}
}
// 140A17730: using guessed type wchar_t aDragdropinvali_1[16];
// 140A17750: using guessed type wchar_t aDragdropignore_0[15];
// 140A17770: using guessed type wchar_t aDragdropvalid_0[14];
// 140A17800: using guessed type wchar_t aDragdropinvali_2[16];
// 140C77760: using guessed type __int64 qword_140C77760;

