#include "../winhttp.h"

//----- (000000014082E400) ----------------------------------------------------
void** __fastcall sub_14082E400(__int64 a1, void** a2)
{
	void** result; // rax
	_QWORD* v3; // rbx
	_QWORD* v6; // r15
	__int64 v7; // r14
	void** v8; // rsi
	void** v9; // rdx
	void** v10; // rcx
	__int64 v11; // rcx
	int v12; // eax
	_QWORD* v13; // rax
	int v14; // ebx
	_QWORD* v15; // [rsp+20h] [rbp-88h]
	int v16[20]; // [rsp+40h] [rbp-68h] BYREF
	void* retaddr; // [rsp+A8h] [rbp+0h] BYREF

	result = &retaddr;
	v3 = *(_QWORD**)(a1 + 144);
	v6 = 0i64;
	while (v3)
	{
		v7 = v3[2];
		result = (void**)sub_140855940(*(_QWORD*)(v7 + 8));
		v8 = result;
		if (a2 && result)
		{
			if (a2 == result)
				goto LABEL_18;
			v9 = (void**)result[8];
			v10 = (void**)result[9];
			if (v9)
			{
				while (a2 != v9)
				{
					if (!v10)
						v10 = (void**)v9[9];
					v9 = (void**)v9[8];
					if (!v9)
						goto LABEL_10;
				}
			LABEL_18:
				v11 = *(_QWORD*)(v7 + 8);
				v16[0] = 0;
				v12 = *(unsigned __int16*)(v11 + 60);
				if (v12 == 1027)
				{
				LABEL_21:
					(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v7 + 8) + 88i64))(*(_QWORD*)(v7 + 8), v16);
				}
				else if (v12 == 1283)
				{
					sub_1408570E0(v11);
					goto LABEL_21;
				}
				sub_14083C260(qword_140C61B80, *(_DWORD*)(v7 + 56));
				v13 = (_QWORD*)*v3;
				v15 = (_QWORD*)*v3;
				if (v3 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v13;
				else
					*v6 = v13;
				if (v3 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v6;
				*v3 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v3;
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8) + 16i64))(*(_QWORD*)(v7 + 8));
				v14 = dword_140C10F20;
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 8i64))(v7, 0i64);
				result = (void**)sub_140881720(v14, v7);
				v3 = v15;
				goto LABEL_14;
			}
		LABEL_10:
			if (v10)
			{
				while (a2 != v10)
				{
					v10 = (void**)v10[9];
					if (!v10)
						goto LABEL_13;
				}
				goto LABEL_18;
			}
		}
	LABEL_13:
		v6 = v3;
		v3 = (_QWORD*)*v3;
	LABEL_14:
		if (v8)
			result = (void**)(*((__int64(__fastcall**)(void**)) * v8 + 2))(v8);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14082E400: using guessed type int var_68[20];

