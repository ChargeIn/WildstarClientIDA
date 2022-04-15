#include "../winhttp.h"

//----- (000000014082F6B0) ----------------------------------------------------
__int64 __fastcall sub_14082F6B0(__int64 a1, __int64 a2, __int64* a3, int a4)
{
	_QWORD* v4; // rdi
	_QWORD* v9; // r14
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int16 v12; // ax
	__int64 v13; // rax
	int v14; // edi
	_QWORD* v15; // rdi
	_QWORD* v16; // r14
	__int64 v17; // rsi
	__int64 v18; // rcx
	__int16 v19; // ax
	__int64 v20; // rax
	int v21; // edi
	_QWORD* v23; // [rsp+20h] [rbp-98h]
	_QWORD* v24; // [rsp+30h] [rbp-88h]
	int v25[20]; // [rsp+40h] [rbp-78h] BYREF

	v4 = *(_QWORD**)(a1 + 96);
	v9 = 0i64;
	if (v4)
	{
		while (1)
		{
			v10 = v4[2];
			if ((!a2 || a2 == *(_QWORD*)(v10 + 72))
				&& (!a4 || a4 == *(_DWORD*)(v10 + 56))
				&& !sub_14082BFE0(a1, *(_QWORD*)(v10 + 8), a3))
			{
				v11 = *(_QWORD*)(v10 + 8);
				v12 = *(_WORD*)(v11 + 60);
				if (v12 != 6176)
					break;
			}
			v9 = v4;
			v4 = (_QWORD*)*v4;
		LABEL_19:
			if (!v4)
				goto LABEL_20;
		}
		v25[0] = 0;
		if (v12 != 1027)
		{
			if (v12 != 1283)
			{
			LABEL_12:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v10 + 56));
				v13 = *v4;
				v23 = (_QWORD*)*v4;
				if (v4 == *(_QWORD**)(a1 + 96))
					*(_QWORD*)(a1 + 96) = v13;
				else
					*v9 = v13;
				if (v4 == *(_QWORD**)(a1 + 104))
					*(_QWORD*)(a1 + 104) = v9;
				*v4 = *(_QWORD*)(a1 + 112);
				--* (_DWORD*)(a1 + 128);
				*(_QWORD*)(a1 + 112) = v4;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 8) + 16i64))(*(_QWORD*)(v10 + 8));
				v14 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 8i64))(v10, 0i64);
				sub_140881720(v14, v10);
				v4 = v23;
				goto LABEL_19;
			}
			sub_1408570E0(v11);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v10 + 8) + 88i64))(*(_QWORD*)(v10 + 8), v25);
		goto LABEL_12;
	}
LABEL_20:
	v15 = *(_QWORD**)(a1 + 144);
	v16 = 0i64;
	if (v15)
	{
		while (1)
		{
			v17 = v15[2];
			if ((!a2 || a2 == *(_QWORD*)(v17 + 72))
				&& (!a4 || a4 == *(_DWORD*)(v17 + 56))
				&& !sub_14082BFE0(a1, *(_QWORD*)(v17 + 8), a3))
			{
				v18 = *(_QWORD*)(v17 + 8);
				v19 = *(_WORD*)(v18 + 60);
				if (v19 != 6176)
					break;
			}
			v16 = v15;
			v15 = (_QWORD*)*v15;
		LABEL_38:
			if (!v15)
				return 1i64;
		}
		v25[0] = 0;
		if (v19 != 1027)
		{
			if (v19 != 1283)
			{
			LABEL_31:
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v17 + 56));
				v20 = *v15;
				v24 = (_QWORD*)*v15;
				if (v15 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v20;
				else
					*v16 = v20;
				if (v15 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v16;
				*v15 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v15;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v17 + 8) + 16i64))(*(_QWORD*)(v17 + 8));
				v21 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 8i64))(v17, 0i64);
				sub_140881720(v21, v17);
				v15 = v24;
				goto LABEL_38;
			}
			sub_1408570E0(v18);
		}
		(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v17 + 8) + 88i64))(*(_QWORD*)(v17 + 8), v25);
		goto LABEL_31;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

