#include "../winhttp.h"

//----- (000000014082B4E0) ----------------------------------------------------
__int64 __fastcall sub_14082B4E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	_QWORD* v4; // rbx
	_QWORD* v5; // r15
	__int64 v9; // rsi
	__int64 v10; // r12
	__int64 v11; // rax
	__int64 v12; // r14
	__int64 v13; // rdx
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rax
	int v19; // ebx
	_QWORD* v20; // rbx
	_QWORD* v21; // r15
	__int64 v22; // rsi
	__int64 v23; // r12
	__int64 v24; // rax
	__int64 v25; // r14
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v29; // rcx
	int v30; // eax
	_QWORD* v31; // rax
	int v32; // ebx
	_QWORD* v33; // [rsp+20h] [rbp-98h]
	_QWORD* v34; // [rsp+30h] [rbp-88h]
	int v35[20]; // [rsp+40h] [rbp-78h] BYREF

	v4 = *(_QWORD**)(a1 + 96);
	v5 = 0i64;
	if (v4)
	{
		while (1)
		{
			v9 = v4[2];
			v10 = *(_QWORD*)(v9 + 8);
			v11 = sub_140855940(v10);
			v12 = v11;
			if (a2)
			{
				if (!v11)
					goto LABEL_22;
				if (a2 != v11)
				{
					v13 = *(_QWORD*)(v11 + 64);
					v14 = *(_QWORD*)(v11 + 72);
					if (v13)
					{
						while (a2 != v13)
						{
							if (!v14)
								v14 = *(_QWORD*)(v13 + 72);
							v13 = *(_QWORD*)(v13 + 64);
							if (!v13)
								goto LABEL_10;
						}
					}
					else
					{
					LABEL_10:
						if (!v14)
							goto LABEL_22;
						while (a2 != v14)
						{
							v14 = *(_QWORD*)(v14 + 72);
							if (!v14)
							{
								v5 = v4;
								v4 = (_QWORD*)*v4;
								goto LABEL_33;
							}
						}
					}
				}
			}
			if (a3 && a3 != *(_QWORD*)(v9 + 72))
				goto LABEL_22;
			if (!a4 || a4 == *(_DWORD*)(v9 + 56))
				break;
			v5 = v4;
			v4 = (_QWORD*)*v4;
		LABEL_33:
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
			if (!v4)
				goto LABEL_36;
		}
		v15 = *(unsigned __int16*)(v10 + 60);
		if (v15 == 1027 || v15 == 1283 && sub_140856B60(*(_QWORD*)(v9 + 8), a2, *(__int64**)(v9 + 72)))
		{
			v16 = *(_QWORD*)(v9 + 8);
			v35[0] = 0;
			v17 = *(unsigned __int16*)(v16 + 60);
			if (v17 == 1027)
				goto LABEL_26;
			if (v17 == 1283)
			{
				sub_1408570E0(v16);
			LABEL_26:
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v9 + 8) + 88i64))(*(_QWORD*)(v9 + 8), v35);
			}
			sub_14083C260(qword_140C61B80, *(_DWORD*)(v9 + 56));
			v18 = *v4;
			v33 = (_QWORD*)*v4;
			if (v4 == *(_QWORD**)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v18;
			else
				*v5 = v18;
			if (v4 == *(_QWORD**)(a1 + 104))
				*(_QWORD*)(a1 + 104) = v5;
			*v4 = *(_QWORD*)(a1 + 112);
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v4;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 8) + 16i64))(*(_QWORD*)(v9 + 8));
			v19 = dword_140C10F20;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 8i64))(v9, 0i64);
			sub_140881720(v19, v9);
			v4 = v33;
			goto LABEL_33;
		}
	LABEL_22:
		v5 = v4;
		v4 = (_QWORD*)*v4;
		goto LABEL_33;
	}
LABEL_36:
	v20 = *(_QWORD**)(a1 + 144);
	v21 = 0i64;
	while (v20)
	{
		v22 = v20[2];
		v23 = *(_QWORD*)(v22 + 8);
		v24 = sub_140855940(v23);
		v25 = v24;
		if (a2)
		{
			if (!v24)
				goto LABEL_48;
			if (a2 != v24)
			{
				v26 = *(_QWORD*)(v24 + 64);
				v27 = *(_QWORD*)(v24 + 72);
				if (v26)
				{
					while (a2 != v26)
					{
						if (!v27)
							v27 = *(_QWORD*)(v26 + 72);
						v26 = *(_QWORD*)(v26 + 64);
						if (!v26)
							goto LABEL_45;
					}
				}
				else
				{
				LABEL_45:
					if (!v27)
						goto LABEL_48;
					while (a2 != v27)
					{
						v27 = *(_QWORD*)(v27 + 72);
						if (!v27)
							goto LABEL_48;
					}
				}
			}
		}
		if ((!a3 || a3 == *(_QWORD*)(v22 + 72))
			&& (!a4 || a4 == *(_DWORD*)(v22 + 56))
			&& *(_WORD*)(v23 + 60) == 1283
			&& sub_140856B60(*(_QWORD*)(v22 + 8), a2, *(__int64**)(v22 + 72)))
		{
			v29 = *(_QWORD*)(v22 + 8);
			v35[0] = 0;
			v30 = *(unsigned __int16*)(v29 + 60);
			if (v30 == 1027)
				goto LABEL_62;
			if (v30 == 1283)
			{
				sub_1408570E0(v29);
			LABEL_62:
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v22 + 8) + 88i64))(*(_QWORD*)(v22 + 8), v35);
			}
			sub_14083C260(qword_140C61B80, *(_DWORD*)(v22 + 56));
			v31 = (_QWORD*)*v20;
			v34 = (_QWORD*)*v20;
			if (v20 == *(_QWORD**)(a1 + 144))
				*(_QWORD*)(a1 + 144) = v31;
			else
				*v21 = v31;
			if (v20 == *(_QWORD**)(a1 + 152))
				*(_QWORD*)(a1 + 152) = v21;
			*v20 = *(_QWORD*)(a1 + 160);
			--* (_DWORD*)(a1 + 176);
			*(_QWORD*)(a1 + 160) = v20;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v22 + 8) + 16i64))(*(_QWORD*)(v22 + 8));
			v32 = dword_140C10F20;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v22 + 8i64))(v22, 0i64);
			sub_140881720(v32, v22);
			v20 = v34;
			goto LABEL_49;
		}
	LABEL_48:
		v21 = v20;
		v20 = (_QWORD*)*v20;
	LABEL_49:
		if (v25)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;

