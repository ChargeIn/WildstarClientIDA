#include "../winhttp.h"

//----- (00000001408C5050) ----------------------------------------------------
char __fastcall sub_1408C5050(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rdx
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdx
	char v11; // al
	char v12; // cl
	unsigned int* v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	unsigned int* v16; // rcx
	__int64 v17; // rcx
	char v18; // dl
	__int64 v19; // rcx

	v3 = *(_QWORD*)(a1 + 328);
	if (*(_DWORD*)(a1 + 452) != *(_DWORD*)(v3 + 116)
		|| *(float*)(v3 + 112) != *(float*)(a1 + 448)
		|| *(float*)(v3 + 108) != *(float*)(a1 + 444))
	{
		sub_1408C4D80(a1, *(_QWORD*)(a1 + 336));
		v5 = *(_QWORD*)(a1 + 336);
		*(_DWORD*)(a1 + 288) = *(_DWORD*)(*(_QWORD*)(a1 + 328) + 116i64);
		if ((unsigned int)sub_1408C8AB0(a1, v5) != 1)
			return 1;
		sub_1408C4EE0(a1);
	}
	if (*(_BYTE*)(a1 + 489) != *(_BYTE*)(*(_QWORD*)(a1 + 328) + 153i64))
	{
		sub_1408CAAD0(a1 + 224, *(_QWORD*)(a1 + 336));
		sub_1408CAAD0(a1 + 248, *(_QWORD*)(a1 + 336));
		sub_1408CAAD0(a1 + 176, *(_QWORD*)(a1 + 336));
		v7 = *(_QWORD*)(a1 + 336);
		if (*(_BYTE*)(a1 + 300))
		{
			v8 = *(_QWORD*)(a1 + 320);
			if (v8)
			{
				sub_1408CA0F0(v8, *(_QWORD*)(a1 + 336));
				if (*(_QWORD*)(a1 + 320))
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
				*(_QWORD*)(a1 + 320) = 0i64;
			}
		}
		v9 = *(_QWORD*)(a1 + 328);
		if (*(_BYTE*)(v9 + 152)
			&& (*(_DWORD*)(v9 + 128) || *(_DWORD*)(v9 + 136) || *(_DWORD*)(v9 + 144))
			&& *(_QWORD*)(a1 + 312))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 336) + 16i64))(*(_QWORD*)(a1 + 336));
			*(_QWORD*)(a1 + 312) = 0i64;
		}
		v10 = *(_QWORD*)(a1 + 336);
		v11 = *(_BYTE*)(*(_QWORD*)(a1 + 328) + 153i64) != 0 ? 2 : 0;
		*(_BYTE*)(a1 + 300) = v11;
		v12 = v11;
		if (*(_DWORD*)(a2 + 8) == 8)
			v12 = 0;
		*(_BYTE*)(a1 + 300) = v12;
		if ((unsigned int)sub_1408C88D0(a1, v10, *(_DWORD*)(a2 + 8)) != 1)
			return 1;
		sub_1408CAB10(a1 + 224);
		sub_1408CAB10(a1 + 248);
		if ((unsigned int)sub_1408C8800(a1, *(_QWORD*)(a1 + 336)) != 1)
			return 1;
		sub_1408CAB10(a1 + 176);
		if ((unsigned int)sub_1408C8980(a1, *(_QWORD*)(a1 + 336)) != 1)
			return 1;
		v13 = *(unsigned int**)(a1 + 320);
		if (v13)
			sub_1408CA130(v13);
		v14 = *(_QWORD*)(a1 + 328);
		if (*(_BYTE*)(v14 + 152))
		{
			if (*(_DWORD*)(v14 + 128) || *(_DWORD*)(v14 + 136) || *(_DWORD*)(v14 + 144))
			{
				if ((unsigned int)sub_1408C8E10(a1) != 1)
					return 1;
				sub_1408C4FD0(a1);
			}
		}
	}
	if (*(float*)(*(_QWORD*)(a1 + 328) + 104i64) != *(float*)(a1 + 440))
	{
		sub_1408CAAD0(a1 + 224, *(_QWORD*)(a1 + 336));
		sub_1408CAAD0(a1 + 248, *(_QWORD*)(a1 + 336));
		if ((unsigned int)sub_1408C88D0(a1, *(_QWORD*)(a1 + 336), *(_DWORD*)(a2 + 8)) != 1)
			return 1;
		sub_1408CAB10(a1 + 224);
		sub_1408CAB10(a1 + 248);
	}
	v15 = *(_QWORD*)(a1 + 328);
	if (*(float*)(v15 + 96) != *(float*)(a1 + 432))
	{
		sub_1408CAAD0(a1 + 200, *(_QWORD*)(a1 + 336));
		if ((unsigned int)sub_1408C8DC0(a1, *(_QWORD*)(a1 + 336)) == 1)
		{
			sub_1408CAB10(a1 + 200);
			v15 = *(_QWORD*)(a1 + 328);
			*(_DWORD*)(a1 + 280) = (int)(float)((float)((float)(*(float*)(v15 + 96) * 0.001) + *(float*)(v15 + 8))
				* (float)*(int*)(a1 + 292));
			goto LABEL_38;
		}
		return 1;
	}
LABEL_38:
	if (*(_DWORD*)(a1 + 428) != *(_DWORD*)(v15 + 92) || *(float*)(v15 + 100) != *(float*)(a1 + 436))
	{
		sub_1408CAAD0(a1 + 176, *(_QWORD*)(a1 + 336));
		if ((unsigned int)sub_1408C8800(a1, *(_QWORD*)(a1 + 336)) != 1)
			return 1;
		sub_1408CAB10(a1 + 176);
		sub_1408C4E80(a1, *(_QWORD*)(a1 + 336));
		if ((unsigned int)sub_1408C8980(a1, *(_QWORD*)(a1 + 336)) != 1)
			return 1;
		v16 = *(unsigned int**)(a1 + 320);
		if (v16)
			sub_1408CA130(v16);
	}
	v17 = *(_QWORD*)(a1 + 328);
	v18 = *(_BYTE*)(v17 + 152);
	if ((*(_BYTE*)(a1 + 488) != v18
		|| *(_DWORD*)(a1 + 464) != *(_DWORD*)(v17 + 128)
		|| *(_DWORD*)(a1 + 472) != *(_DWORD*)(v17 + 136)
		|| *(_DWORD*)(a1 + 480) != *(_DWORD*)(v17 + 144))
		&& v18
		&& (*(_DWORD*)(v17 + 128) || *(_DWORD*)(v17 + 136) || *(_DWORD*)(v17 + 144)))
	{
		sub_1408C4D40(a1, *(_QWORD*)(a1 + 336));
		if ((unsigned int)sub_1408C8E10(a1) != 1)
			return 1;
		sub_1408C4FD0(a1);
	}
	if (*(_DWORD*)(a1 + 468) != *(_DWORD*)(*(_QWORD*)(a1 + 328) + 132i64))
		sub_1408C4920(a1);
	if (*(_DWORD*)(a1 + 476) != *(_DWORD*)(*(_QWORD*)(a1 + 328) + 140i64))
		sub_1408C4A80(a1);
	if (*(_DWORD*)(a1 + 484) != *(_DWORD*)(*(_QWORD*)(a1 + 328) + 148i64))
		sub_1408C4BE0(a1);
	v19 = *(_QWORD*)(a1 + 328);
	*(_DWORD*)(a1 + 428) = *(_DWORD*)(v19 + 92);
	*(_DWORD*)(a1 + 432) = *(_DWORD*)(v19 + 96);
	*(_DWORD*)(a1 + 436) = *(_DWORD*)(v19 + 100);
	*(_DWORD*)(a1 + 440) = *(_DWORD*)(v19 + 104);
	*(_DWORD*)(a1 + 444) = *(_DWORD*)(v19 + 108);
	*(_DWORD*)(a1 + 448) = *(_DWORD*)(v19 + 112);
	*(_DWORD*)(a1 + 452) = *(_DWORD*)(v19 + 116);
	*(_DWORD*)(a1 + 456) = *(_DWORD*)(v19 + 120);
	*(_DWORD*)(a1 + 460) = *(_DWORD*)(v19 + 124);
	*(_DWORD*)(a1 + 464) = *(_DWORD*)(v19 + 128);
	*(_DWORD*)(a1 + 468) = *(_DWORD*)(v19 + 132);
	*(_DWORD*)(a1 + 472) = *(_DWORD*)(v19 + 136);
	*(_DWORD*)(a1 + 476) = *(_DWORD*)(v19 + 140);
	*(_DWORD*)(a1 + 480) = *(_DWORD*)(v19 + 144);
	*(_DWORD*)(a1 + 484) = *(_DWORD*)(v19 + 148);
	*(_DWORD*)(a1 + 488) = *(_DWORD*)(v19 + 152);
	*(_BYTE*)(v19 + 154) = 0;
	return 0;
}

