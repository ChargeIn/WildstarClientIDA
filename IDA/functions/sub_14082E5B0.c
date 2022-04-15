//----- (000000014082E5B0) ----------------------------------------------------
__int64 __fastcall sub_14082E5B0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	_QWORD* v3; // rbx
	_QWORD* v6; // r15
	__int64 v7; // r14
	__int64 v8; // r12
	__int64 v9; // rsi
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // eax
	_QWORD* v14; // rax
	int v15; // ebx
	_QWORD* v16; // [rsp+20h] [rbp-98h]
	int v17[30]; // [rsp+40h] [rbp-78h] BYREF
	void* retaddr; // [rsp+B8h] [rbp+0h] BYREF

	result = (__int64)&retaddr;
	v3 = *(_QWORD**)(a1 + 96);
	v6 = 0i64;
	while (v3)
	{
		v7 = v3[2];
		v8 = *(_QWORD*)(v7 + 8);
		result = sub_140855940(v8);
		v9 = result;
		if (!a2 || !result)
			goto LABEL_13;
		if (a2 != result)
		{
			v10 = *(_QWORD*)(result + 64);
			v11 = *(_QWORD*)(result + 72);
			if (v10)
			{
				while (a2 != v10)
				{
					if (!v11)
						v11 = *(_QWORD*)(v10 + 72);
					v10 = *(_QWORD*)(v10 + 64);
					if (!v10)
						goto LABEL_10;
				}
			}
			else
			{
			LABEL_10:
				if (!v11)
					goto LABEL_13;
				while (a2 != v11)
				{
					v11 = *(_QWORD*)(v11 + 72);
					if (!v11)
						goto LABEL_13;
				}
			}
		}
		result = 6176i64;
		if (*(_WORD*)(v8 + 60) != 6176)
		{
			v12 = *(_QWORD*)(v7 + 8);
			v17[0] = 0;
			v13 = *(unsigned __int16*)(v12 + 60);
			if (v13 == 1027)
				goto LABEL_22;
			if (v13 == 1283)
			{
				sub_1408570E0(v12);
			LABEL_22:
				(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(v7 + 8) + 88i64))(*(_QWORD*)(v7 + 8), v17);
			}
			sub_14083C260(qword_140C61B80, *(_DWORD*)(v7 + 56));
			v14 = (_QWORD*)*v3;
			v16 = (_QWORD*)*v3;
			if (v3 == *(_QWORD**)(a1 + 96))
				*(_QWORD*)(a1 + 96) = v14;
			else
				*v6 = v14;
			if (v3 == *(_QWORD**)(a1 + 104))
				*(_QWORD*)(a1 + 104) = v6;
			*v3 = *(_QWORD*)(a1 + 112);
			--* (_DWORD*)(a1 + 128);
			*(_QWORD*)(a1 + 112) = v3;
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v7 + 8) + 16i64))(*(_QWORD*)(v7 + 8));
			v15 = dword_140C10F20;
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 8i64))(v7, 0i64);
			result = sub_140881720(v15, v7);
			v3 = v16;
			goto LABEL_14;
		}
	LABEL_13:
		v6 = v3;
		v3 = (_QWORD*)*v3;
	LABEL_14:
		if (v9)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14082E5B0: using guessed type int var_78[30];

