#include "../winhttp.h"

//----- (00000001401E1880) ----------------------------------------------------
__int64 __fastcall sub_1401E1880(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 i; // rbx
	float v4; // xmm0_4
	__int64 v5; // rax
	__int64 v6; // rsi
	_QWORD* v7; // r14
	__int64 v8; // rbx
	__int64 v9; // r13
	float* v10; // rdi
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v18; // [rsp+78h] [rbp+10h]

	v1 = a1 - (_QWORD)&unk_140C2D3F8;
	for (i = 0i64; i < 0x10; i += 4i64)
	{
		v4 = (*(float(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 288) + 792i64))(
			*(_QWORD*)(a1 + 288),
			*(unsigned int*)((char*)&unk_140C2D3F8 + i));
		v5 = v1 + i;
		*(float*)((char*)&unk_140C2D3F8 + v5 + 3064) = v4;
	}
	v6 = 72i64;
	v7 = (_QWORD*)(a1 + 904);
	v18 = 72i64;
	do
	{
		v8 = *(v7 - 72);
		v9 = *v7;
		if (v8)
		{
			v10 = (float*)(a1 + 3064);
			v11 = 4i64;
			do
			{
				if ((*(_DWORD*)((_BYTE*)&dword_140C637A0[-766] + (_QWORD)v10 - a1) & *(_DWORD*)(*(_QWORD*)(v8 + 24) + 144i64)) != 0)
					*v10 = fminf(
						*v10,
						sub_1401E7FB0((_QWORD*)v8, *(_DWORD*)((char*)v10 + (_QWORD)&unk_140C2D3F8 - a1 - 3064)).m128_f32[0]);
				++v10;
				--v11;
			} while (v11);
			v6 = v18;
		}
		if (v8 != v9)
		{
			if (v8 && *(_DWORD*)(a1 + 3124))
			{
				v12 = *(_QWORD*)(v8 + 48);
				if (v12)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 240i64))(v12, a1 + 3112);
				v13 = *(_QWORD*)(v8 + 56);
				if (v13)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 240i64))(v13, a1 + 3112);
				v14 = *(_QWORD*)(v8 + 72);
				if (v14)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v14 + 240i64))(v14, a1 + 3112);
				v15 = *(_QWORD*)(v8 + 80);
				if (v15)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 240i64))(v15, a1 + 3112);
				v16 = *(_QWORD*)(v8 + 88);
				if (v16)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v16 + 240i64))(v16, a1 + 3112);
				*(_DWORD*)(v8 + 112) = 0;
			}
			if (*v7 != v8)
			{
				if (v8)
					(**(void(__fastcall***)(__int64))v8)(v8);
				if (*v7)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
				*v7 = v8;
			}
		}
		++v7;
		v18 = --v6;
	} while (v6);
	return 0i64;
}
// 140C637A0: using guessed type _DWORD dword_140C637A0[4];

