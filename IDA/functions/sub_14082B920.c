#include "../winhttp.h"

//----- (000000014082B920) ----------------------------------------------------
void __fastcall sub_14082B920(__int64 a1, int a2)
{
	_QWORD* v2; // rdi
	_QWORD* v5; // r14
	__int64 v6; // rsi
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rax
	int v10; // edi
	_QWORD* v11; // rdi
	_QWORD* v12; // r14
	__int64 v13; // rsi
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	int v17; // edi
	_QWORD* v18; // [rsp+20h] [rbp-88h]
	_QWORD* v19; // [rsp+30h] [rbp-78h]
	int v20[20]; // [rsp+40h] [rbp-68h] BYREF

	v2 = *(_QWORD**)(a1 + 96);
	v5 = 0i64;
	if (v2)
	{
		while (1)
		{
			v6 = v2[2];
			if (*(_DWORD*)(v6 + 56) == a2)
				break;
			v5 = v2;
			v2 = (_QWORD*)*v2;
		LABEL_14:
			if (!v2)
				goto LABEL_15;
		}
		v7 = *(_QWORD*)(v6 + 8);
		v20[0] = 0;
		v8 = *(unsigned __int16*)(v7 + 60);
		if (v8 != 1027)
		{
			if (v8 != 1283)
			{
			LABEL_7:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v6 + 56));
				v9 = *v2;
				v18 = (_QWORD*)*v2;
				if (v2 == *(_QWORD**)(a1 + 96))
					*(_QWORD*)(a1 + 96) = v9;
				else
					*v5 = v9;
				if (v2 == *(_QWORD**)(a1 + 104))
					*(_QWORD*)(a1 + 104) = v5;
				*v2 = *(_QWORD*)(a1 + 112);
				--* (_DWORD*)(a1 + 128);
				*(_QWORD*)(a1 + 112) = v2;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 8) + 16i64))(*(_QWORD*)(v6 + 8));
				v10 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 8i64))(v6, 0i64);
				sub_140881720(v10, v6);
				v2 = v18;
				goto LABEL_14;
			}
			sub_1408570E0(v7);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v6 + 8) + 88i64))(*(_QWORD*)(v6 + 8), v20);
		goto LABEL_7;
	}
LABEL_15:
	v11 = *(_QWORD**)(a1 + 144);
	v12 = 0i64;
	if (v11)
	{
		while (1)
		{
			v13 = v11[2];
			if (*(_DWORD*)(v13 + 56) == a2)
				break;
			v12 = v11;
			v11 = (_QWORD*)*v11;
		LABEL_28:
			if (!v11)
				return;
		}
		v14 = *(_QWORD*)(v13 + 8);
		v20[0] = 0;
		v15 = *(unsigned __int16*)(v14 + 60);
		if (v15 != 1027)
		{
			if (v15 != 1283)
			{
			LABEL_21:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v13 + 56));
				v16 = *v11;
				v19 = (_QWORD*)*v11;
				if (v11 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v16;
				else
					*v12 = v16;
				if (v11 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v12;
				*v11 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v11;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v13 + 8) + 16i64))(*(_QWORD*)(v13 + 8));
				v17 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v13 + 8i64))(v13, 0i64);
				sub_140881720(v17, v13);
				v11 = v19;
				goto LABEL_28;
			}
			sub_1408570E0(v14);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v13 + 8) + 88i64))(*(_QWORD*)(v13 + 8), v20);
		goto LABEL_21;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

