#include "../winhttp.h"

//----- (00000001402E3EC0) ----------------------------------------------------
__int64 __fastcall sub_1402E3EC0(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD))
{
	__int64 v6; // rcx
	int v7; // ecx
	_WORD* v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // r8
	__int16 v11; // ax
	unsigned int v12; // ebx
	__int64 v13; // rbp
	_QWORD* v14; // rdi
	int v15; // eax
	int* v16; // rdx
	__int64 result; // rax
	__int64 v18; // rax
	int v19; // edx
	int v20; // ecx
	int v21; // r8d
	int v22; // r9d
	int v23; // eax
	int v24; // edx

	if (a3)
		(**a3)(a3);
	v6 = *(_QWORD*)(a1 + 32);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	*(_QWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 32) = a3;
	v7 = *(unsigned __int16*)(a2 + 78);
	*(_DWORD*)(a1 + 44) = *(unsigned __int16*)(a2 + 76);
	*(_DWORD*)(a1 + 48) = v7;
	v8 = (_WORD*)(a1 + 76);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)a2;
	v9 = 260i64;
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 4);
	v10 = a2 + 108 - (a1 + 76);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 40);
	while (v9 != -2147483386)
	{
		v11 = *(_WORD*)((char*)v8 + v10);
		if (!v11)
			break;
		*v8++ = v11;
		if (!--v9)
		{
			--v8;
			break;
		}
	}
	*v8 = 0;
	*(_OWORD*)(a1 + 608) = *(_OWORD*)(a2 + 628);
	*(_DWORD*)(a1 + 624) = *(_DWORD*)(a2 + 44);
	*(__m128*)(a1 + 640) = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 48), (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 52), (__m128)0i64));
	*(_DWORD*)(a1 + 656) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 660) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 664) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 668) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 672) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 760) = *(_DWORD*)(a2 + 104);
	v12 = 0;
	v13 = ((__int64(__fastcall*)(void(__fastcall***)(_QWORD), __int64, __int64))(*a3)[3])(a3, v9, v10)
		+ *(unsigned int*)(a2 + 92);
	v14 = (_QWORD*)(a1 + 680);
	do
	{
		if (*v14)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 8i64))(*v14);
			*v14 = 0i64;
		}
		v15 = *(_DWORD*)(a2 + 88);
		v16 = (int*)(a1 + 44);
		if (_bittest(&v15, v12))
		{
			result = sub_1402DE000(v12, v16, v13, a3, (int**)(a1 + 8 * (v12 + 85i64)));
			if ((int)result < 0)
				return result;
			v18 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 16i64))(*v14);
			v13 += *(_DWORD*)(v18 + 12) * *(_DWORD*)(v18 + 20);
		}
		else
		{
			result = sub_1402DDF50(v12, v16, (int**)(a1 + 8 * (v12 + 85i64)));
			if ((int)result < 0)
				return result;
		}
		++v12;
		++v14;
	} while (v12 < 6);
	v19 = *(unsigned __int16*)(a2 + 84);
	v20 = *(unsigned __int16*)(a2 + 82);
	v21 = *(unsigned __int16*)(a2 + 86);
	*(_DWORD*)(a1 + 744) = *(unsigned __int16*)(a2 + 80);
	*(_DWORD*)(a1 + 748) = v20;
	*(_DWORD*)(a1 + 752) = v19;
	*(_DWORD*)(a1 + 756) = v21;
	v22 = (v19 + 15) / 16;
	v24 = *(int*)(a1 + 748) >> 31;
	v23 = *(_DWORD*)(a1 + 748);
	*(_DWORD*)(a1 + 728) = *(_DWORD*)(a1 + 744) / 16;
	*(_DWORD*)(a1 + 732) = ((v24 & 0xF) + v23) >> 4;
	*(_DWORD*)(a1 + 736) = v22;
	*(_DWORD*)(a1 + 740) = (v21 + 15) / 16;
	return 0i64;
}
// 1402E3F87: conditional instruction was optimized away because rdx.8!=0

