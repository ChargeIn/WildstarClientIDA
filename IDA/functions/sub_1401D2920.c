#include "../winhttp.h"

//----- (00000001401D2920) ----------------------------------------------------
__int64 __fastcall sub_1401D2920(__int64 a1, unsigned int a2, __int64 a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v4; // rax
	_DWORD* v6; // r14
	unsigned __int64 v8; // rdi
	__int64 v9; // rax
	char* v11; // rdx
	unsigned __int64 v12; // rdx
	unsigned __int8* v13; // r9
	unsigned __int64 v14; // rcx
	int v15; // eax
	unsigned __int64 v16; // rcx
	unsigned __int64 v17; // rax
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rcx
	int* v20; // rdx
	unsigned __int8* v21; // r9
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // rax
	unsigned __int64 v24; // rcx
	__int64 v25; // rdx
	__int64 v26; // rdx
	int v27; // [rsp+28h] [rbp-48h]
	unsigned __int64 v28; // [rsp+40h] [rbp-30h] BYREF
	int v29; // [rsp+48h] [rbp-28h] BYREF
	unsigned __int64 v30; // [rsp+50h] [rbp-20h] BYREF
	void(__fastcall * v31)(__int64, __int64); // [rsp+58h] [rbp-18h]
	int v32; // [rsp+60h] [rbp-10h]

	v3 = *(_QWORD*)(a1 + 904);
	v4 = *(_QWORD*)(a1 + 952);
	v6 = (_DWORD*)a3;
	v8 = v3 + a2;
	*(_QWORD*)(a1 + 896) = a2;
	if (v4 >= v3 && v4 < v8)
	{
		if (!v4 && a1 != -960)
		{
			*(_QWORD*)(a1 + 980) = 0i64;
			*(_WORD*)(a1 + 988) = 0;
			*(_DWORD*)(a1 + 960) = 1732584193;
			*(_DWORD*)(a1 + 964) = -271733879;
			*(_DWORD*)(a1 + 968) = -1732584194;
			*(_DWORD*)(a1 + 972) = 271733878;
			*(_DWORD*)(a1 + 976) = -1009589776;
			*(_QWORD*)(a1 + 1056) = 0i64;
		}
		v9 = *(_QWORD*)(a1 + 952);
		a3 = v8 - v9;
		if (v8 != v9)
			sub_1401C8C20(a1 + 960, (_BYTE*)(v9 + *(_QWORD*)(a1 + 888) - v3), a3);
		*(_QWORD*)(a1 + 952) = v8;
		if (v8 == *(_QWORD*)(a1 + 712))
		{
			if (a1 != -960)
				sub_1401C8B70(a1 + 960, (__int64)&v30);
			if (v30 != *(_QWORD*)(a1 + 720)
				|| v31 != *(void(__fastcall**)(__int64, __int64))(a1 + 728)
				|| v32 != *(_DWORD*)(a1 + 736))
			{
				v30 = 0x141D44FC8i64;
				sub_1401A3130(3, 0, &v30, a1 + 24);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 744) + 72i64))(*(_QWORD*)(a1 + 744));
			}
		}
	}
	if (a2)
	{
		if (!*(_QWORD*)(a1 + 776))
		{
			if (a2 < 5)
				return 2684551169i64;
			v11 = *(char**)(a1 + 888);
			v30 = (unsigned __int64)sub_1401C3630;
			v31 = sub_14002D9C0;
			if ((unsigned int)sub_1401D7320(a1 + 752, v11, a3, (__int64)&v30))
				return 2147942414i64;
		}
		if (!*(_QWORD*)(a1 + 904))
		{
			*(_QWORD*)(a1 + 888) += 5i64;
			*(_QWORD*)(a1 + 896) -= 5i64;
			*(_QWORD*)(a1 + 904) = 5i64;
		}
	}
	for (; *(_QWORD*)(a1 + 896); *(_QWORD*)(a1 + 928) += v17)
	{
		v12 = *(_QWORD*)(a1 + 928);
		if (v12 >= *(_QWORD*)(a1 + 640))
			break;
		v13 = *(unsigned __int8**)(a1 + 888);
		v14 = (unsigned int)(*(_DWORD*)(a1 + 640) - v12);
		v28 = *(_QWORD*)(a1 + 896);
		v15 = 0;
		*(_QWORD*)(a1 + 912) = dword_140CD0180;
		if (v14 > 0x3FFF0)
			v14 = 262128i64;
		*(_QWORD*)(a1 + 920) = v14;
		v30 = v14;
		LOBYTE(v15) = v12 + v14 == *(_QWORD*)(a1 + 704);
		if ((unsigned int)sub_1401D6EB0(a1 + 752, dword_140CD0180, &v30, v13, &v28, v15, &v29))
			return 2684551169i64;
		v16 = v28;
		v17 = v30;
		*(_QWORD*)(a1 + 888) += v28;
		*(_QWORD*)(a1 + 912) += v17;
		*(_QWORD*)(a1 + 896) -= v16;
		*(_QWORD*)(a1 + 920) -= v17;
		*(_QWORD*)(a1 + 904) += v16;
	}
	v18 = *(_QWORD*)(a1 + 896);
	if (v18 && (v19 = *(unsigned int*)(a1 + 656), (_DWORD)v19))
	{
		v20 = *(int**)(a1 + 648);
		v21 = *(unsigned __int8**)(a1 + 888);
		*(_QWORD*)(a1 + 920) = v19;
		v28 = v19;
		v22 = *(_QWORD*)(a1 + 928) + v19;
		v30 = v18;
		v27 = v22 == *(_QWORD*)(a1 + 704);
		*(_QWORD*)(a1 + 912) = v20;
		if ((unsigned int)sub_1401D6EB0(a1 + 752, v20, &v28, v21, &v30, v27, &v29))
			return 2684551169i64;
		v23 = v28;
		v24 = v30;
		*(_QWORD*)(a1 + 912) += v28;
		*(_QWORD*)(a1 + 920) -= v23;
		*(_QWORD*)(a1 + 928) += v23;
		LODWORD(v23) = *(_DWORD*)(a1 + 656);
		*(_QWORD*)(a1 + 888) += v24;
		*(_QWORD*)(a1 + 896) -= v24;
		LODWORD(v23) = v23 - *(_DWORD*)(a1 + 920);
		*(_QWORD*)(a1 + 904) += v24;
		*v6 = v23;
		if (*(_QWORD*)(a1 + 928) == *(_QWORD*)(a1 + 704))
		{
			v25 = *(_QWORD*)(a1 + 768);
			v30 = (unsigned __int64)sub_1401C3630;
			v31 = sub_14002D9C0;
			sub_14002D9C0((__int64)&v30, v25);
			v26 = *(_QWORD*)(a1 + 776);
			*(_QWORD*)(a1 + 768) = 0i64;
			v31((__int64)&v30, v26);
			*(_QWORD*)(a1 + 776) = 0i64;
		}
	}
	else
	{
		*v6 = 0;
	}
	return 0i64;
}
// 1401D2A9B: variable 'a3' is possibly undefined
// 140CD0180: using guessed type int dword_140CD0180[65532];

