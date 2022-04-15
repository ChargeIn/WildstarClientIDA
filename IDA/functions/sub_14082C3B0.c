#include "../winhttp.h"

//----- (000000014082C3B0) ----------------------------------------------------
void __fastcall sub_14082C3B0(__int64 a1, _QWORD* a2, __int64 a3, char a4, int a5)
{
	_QWORD* v5; // rbx
	__int64 v9; // r13
	__int64 v10; // rsi
	__int64 v11; // rbp
	_QWORD* v12; // rax
	_QWORD* v13; // rdx
	_QWORD* v14; // rcx
	__int16 v15; // cx
	_QWORD* v16; // rbx
	_QWORD* v17; // r14
	__int64 v18; // rbp
	__int64 v19; // r15
	__int64 v20; // rax
	__int64 v21; // rsi
	_QWORD* v22; // rdx
	_QWORD* v23; // rcx
	__int16 v24; // cx
	_QWORD* v25; // rax
	_QWORD* v26; // [rsp+20h] [rbp-58h]

	v5 = *(_QWORD**)(a1 + 144);
	v9 = a1;
	if (v5)
	{
		while (1)
		{
			v10 = v5[2];
			v11 = *(_QWORD*)(v10 + 8);
			v12 = (_QWORD*)sub_140855940(v11);
			if (!a2)
				goto LABEL_14;
			if (v12)
			{
				if (a2 == v12)
					goto LABEL_14;
				v13 = (_QWORD*)v12[8];
				v14 = (_QWORD*)v12[9];
				if (v13)
				{
					while (a2 != v13)
					{
						if (!v14)
							v14 = (_QWORD*)v13[9];
						v13 = (_QWORD*)v13[8];
						if (!v13)
							goto LABEL_10;
					}
					goto LABEL_14;
				}
			LABEL_10:
				if (v14)
				{
					while (a2 != v14)
					{
						v14 = (_QWORD*)v14[9];
						if (!v14)
							goto LABEL_22;
					}
				LABEL_14:
					v15 = *(_WORD*)(v11 + 60);
					if (((v15 & 0xFF00) != 768 || a4)
						&& (!a3 || a3 == *(_QWORD*)(v10 + 72))
						&& (!a5 || a5 == *(_DWORD*)(v10 + 56))
						&& v15 != 6176)
					{
						++* (_DWORD*)(v10 + 64);
					}
				}
			}
		LABEL_22:
			v5 = (_QWORD*)*v5;
			if (v12)
				(*(void(__fastcall**)(_QWORD*))(*v12 + 16i64))(v12);
			if (!v5)
			{
				v9 = a1;
				break;
			}
		}
	}
	v16 = *(_QWORD**)(v9 + 96);
	v17 = 0i64;
	while (v16)
	{
		v18 = v16[2];
		v19 = *(_QWORD*)(v18 + 8);
		v20 = sub_140855940(v19);
		v21 = v20;
		if (a2)
		{
			if (!v20)
				goto LABEL_38;
			if (a2 != (_QWORD*)v20)
			{
				v22 = *(_QWORD**)(v20 + 64);
				v23 = *(_QWORD**)(v20 + 72);
				if (v22)
				{
					while (a2 != v22)
					{
						if (!v23)
							v23 = (_QWORD*)v22[9];
						v22 = (_QWORD*)v22[8];
						if (!v22)
							goto LABEL_35;
					}
				}
				else
				{
				LABEL_35:
					if (!v23)
						goto LABEL_38;
					while (a2 != v23)
					{
						v23 = (_QWORD*)v23[9];
						if (!v23)
							goto LABEL_38;
					}
				}
			}
		}
		v24 = *(_WORD*)(v19 + 60);
		if (((v24 & 0xFF00) != 768 || a4)
			&& (!a3 || a3 == *(_QWORD*)(v18 + 72))
			&& (!a5 || a5 == *(_DWORD*)(v18 + 56))
			&& v24 != 6176)
		{
			sub_14082BF30(v9, *(_DWORD*)(v19 + 56), v18, 0);
			v25 = (_QWORD*)*v16;
			v26 = (_QWORD*)*v16;
			if (v16 == *(_QWORD**)(v9 + 96))
				*(_QWORD*)(v9 + 96) = v25;
			else
				*v17 = v25;
			if (v16 == *(_QWORD**)(v9 + 104))
				*(_QWORD*)(v9 + 104) = v17;
			*v16 = *(_QWORD*)(v9 + 112);
			--* (_DWORD*)(v9 + 128);
			*(_QWORD*)(v9 + 112) = v16;
			v16 = v26;
			goto LABEL_39;
		}
	LABEL_38:
		v17 = v16;
		v16 = (_QWORD*)*v16;
	LABEL_39:
		if (v21)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
	}
}

